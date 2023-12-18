/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 9 Aula 5
    Software para Windows
    
    Um programa editor de texto.
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <windows.h>                             /* biblioteca do Windows */
#include "main.h"                                /* arquivo auxiliar Main.h */


/* ========================================================================= */
/* --- Constantes --- */
#define IDC_MAIN_TEXT   1001


/* ========================================================================= */
/* --- Protótipo das Funções --- */
BOOL LoadFile(HWND hEdit, LPSTR pszFileName);
BOOL SaveFile(HWND hEdit, LPSTR pszFileName);
BOOL DoFileOpenSave(HWND hwnd, BOOL bSave);
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam);


/* ========================================================================= */
/* --- Bibliotecas --- */
static char g_szClassName[] = "WR Text Editor";
static HINSTANCE g_hInst = NULL;


/* ========================================================================= */
/* --- Função Windows Principal --- */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
   LPSTR lpCmdLine, int nCmdShow)
{   
   /* -- Variáveis Locais -- */                
   HWND hwnd;                                    /* handle utilizado na janela windows */
   MSG Msg;                                      /* armazenará as mensagens do programa */
   WNDCLASSEX WndClass;                          /* estrutura de dados para a classe de janela */

   g_hInst = hInstance;

   WndClass.cbSize        = sizeof(WNDCLASSEX);  /* compatibiliza para o tamanho WNDCLASSEX */
   WndClass.style         = 0;                   /* estilo aplicado */
   WndClass.lpfnWndProc   = WndProc;             /* função de janela chamada pelo Windows */
   WndClass.cbClsExtra    = 0;                   /* sem bytes adicionais */
   WndClass.cbWndExtra    = 0;                   /* sem bytes adicionais */
   WndClass.hInstance     = g_hInst;             /* handle desta instância */

   WndClass.hIcon         = LoadIcon(NULL, IDI_APPLICATION);    /* ícone padrão */
   WndClass.hCursor       = LoadCursor(NULL, IDC_ARROW);        /* seta do mouse */
   WndClass.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
   WndClass.lpszMenuName  = "MAINMENU";
   WndClass.lpszClassName = g_szClassName;
   WndClass.hIconSm       = LoadIcon(NULL, IDI_APPLICATION);

   /* Exibe mensagem de erro no caso de falha ao criar a classe Windows */
   if(!RegisterClassEx(&WndClass))
   {
      MessageBox(0, "Window Registration Failed!", "Error!",
         MB_ICONEXCLAMATION | MB_OK | MB_SYSTEMMODAL);
      return 0;
   }
  

   /* -- Cria a Janela do Editor -- */
   hwnd = CreateWindowEx (
           WS_EX_CLIENTEDGE,                     /* possibilidades de variação extendidas */
           g_szClassName,                        /* nome da classe janela */
           "WR Text Editor",                     /* Texto Título */
           WS_OVERLAPPEDWINDOW,                  /* Estilo de janela: normal */
           CW_USEDEFAULT,                        /* Windows decide a coordenada X */
           CW_USEDEFAULT,                        /* Windows decide a coordenada Y */
           640,                                  /* Largura inicial da janela: 650 pixels */
           480,                                  /* Altura inicial da janela: 400 pixels */
           NULL,                                 /* sem janelas-pai */
           NULL,                                 /* sem menu */
           g_hInst,                              /* handle da instância do programa */
           NULL                                  /* nenhum argumento adicional */
           );

   /* Exibe mensagem de erro no caso de falha na criação da janela */
   if(hwnd == NULL)
   {
      MessageBox(0, "Window Creation Failed!", "Error!",
         MB_ICONEXCLAMATION | MB_OK | MB_SYSTEMMODAL);
      return 0;
   }
 
   ShowWindow(hwnd, nCmdShow);                   /* exibe a janela do programa */
   UpdateWindow(hwnd);                           /* indica atualização da janela principal */

   /* -- Loop para repetição de mensagens, até GetMessage retornar 0 -- */
   while(GetMessage(&Msg, NULL, 0, 0))
   {
      TranslateMessage(&Msg);                    /* autoriza o uso do teclado */
      DispatchMessage(&Msg);                     /* retorna o controle ao Windows */
   }
   return Msg.wParam;

} /* end WinMain */


/* ========================================================================= */
/* --- Desenvolvimento das Funções --- */


/* ========================================================================= */
/* --- Função para abrir os arquivos de texto --- */
BOOL LoadFile(HWND hEdit, LPSTR pszFileName)
{
   HANDLE hFile;
   BOOL bSuccess = FALSE;

   hFile = CreateFile(pszFileName, GENERIC_READ, FILE_SHARE_READ, NULL,
      OPEN_EXISTING, 0, 0);
   if(hFile != INVALID_HANDLE_VALUE)
   {
      DWORD dwFileSize;
      dwFileSize = GetFileSize(hFile, NULL);
      if(dwFileSize != 0xFFFFFFFF)
      {
         LPSTR pszFileText;
         pszFileText = (LPSTR)GlobalAlloc(GPTR, dwFileSize + 1);
         if(pszFileText != NULL)
         {
            DWORD dwRead;
            if(ReadFile(hFile, pszFileText, dwFileSize, &dwRead, NULL))
            {
               pszFileText[dwFileSize] = 0; 
               if(SetWindowText(hEdit, pszFileText))
                  bSuccess = TRUE; 
            }
            GlobalFree(pszFileText);
         }
      }
      CloseHandle(hFile);
   }
   return bSuccess;

} /* end LoadFile */


/* ========================================================================= */
/* --- Função para salvar os arquivos de texto --- */
BOOL SaveFile(HWND hEdit, LPSTR pszFileName)
{
   HANDLE hFile;
   BOOL bSuccess = FALSE;

   hFile = CreateFile(pszFileName, GENERIC_WRITE, 0, 0,
      CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0);
   if(hFile != INVALID_HANDLE_VALUE)
   {
      DWORD dwTextLength;
      dwTextLength = GetWindowTextLength(hEdit);
      if(dwTextLength > 0)// No need to bother if there's no text.
      {
         LPSTR pszText;
         pszText = (LPSTR)GlobalAlloc(GPTR, dwTextLength + 1);
         if(pszText != NULL)
         {
            if(GetWindowText(hEdit, pszText, dwTextLength + 1))
            {
               DWORD dwWritten;
               if(WriteFile(hFile, pszText, dwTextLength, &dwWritten, NULL))
                  bSuccess = TRUE;
            }
            GlobalFree(pszText);
         }
      }
      CloseHandle(hFile);
   }
   return bSuccess;

} /* end SaveFile */


BOOL DoFileOpenSave(HWND hwnd, BOOL bSave)
{
   OPENFILENAME ofn;
   char szFileName[MAX_PATH];

   ZeroMemory(&ofn, sizeof(ofn));
   szFileName[0] = 0;

   ofn.lStructSize = sizeof(ofn);
   ofn.hwndOwner = hwnd;
   ofn.lpstrFilter = "Text Files (*.txt)\0*.txt\0C Files (*.c)\0*.txt\0Asm Files (*.asm)\0*.txt\0All Files (*.*)\0*.*\0\0";
   ofn.lpstrFile = szFileName;
   ofn.nMaxFile = MAX_PATH;
   ofn.lpstrDefExt = "txt","c","asm";

   if(bSave)
   {
      ofn.Flags = OFN_EXPLORER | OFN_PATHMUSTEXIST | OFN_HIDEREADONLY |
         OFN_OVERWRITEPROMPT;
         
      if(GetSaveFileName(&ofn))
      {
         if(!SaveFile(GetDlgItem(hwnd, IDC_MAIN_TEXT), szFileName))
         {
            MessageBox(hwnd, "Save file failed.", "Error",
               MB_OK | MB_ICONEXCLAMATION);
            return FALSE;
         }
      }
   }
   else
   {
      ofn.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;
      if(GetOpenFileName(&ofn))
      {
         if(!LoadFile(GetDlgItem(hwnd, IDC_MAIN_TEXT), szFileName))
         {
            MessageBox(hwnd, "Load of file failed.", "Error",
               MB_OK | MB_ICONEXCLAMATION);
            return FALSE;
         }
      }
   }
   return TRUE;
   
} /* end DoFileOpenSave */


LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam)
{
   switch(Message)
   {
      case WM_CREATE:
         CreateWindow("EDIT", "",
            WS_CHILD | WS_VISIBLE | WS_HSCROLL | WS_VSCROLL | ES_MULTILINE |
               ES_WANTRETURN,
            CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
            hwnd, (HMENU)IDC_MAIN_TEXT, g_hInst, NULL);

         SendDlgItemMessage(hwnd, IDC_MAIN_TEXT, WM_SETFONT,
            (WPARAM)GetStockObject(DEFAULT_GUI_FONT), MAKELPARAM(TRUE, 0));
      break;
      
      case WM_SIZE:
         if(wParam != SIZE_MINIMIZED)
            MoveWindow(GetDlgItem(hwnd, IDC_MAIN_TEXT), 0, 0, LOWORD(lParam),
               HIWORD(lParam), TRUE);
      break;
      
      case WM_SETFOCUS:
         SetFocus(GetDlgItem(hwnd, IDC_MAIN_TEXT));
      break;
      
      case WM_COMMAND:
         switch(LOWORD(wParam))
         {
            case CM_FILE_OPEN:
               DoFileOpenSave(hwnd, FALSE);
            break;
            case CM_FILE_SAVEAS:
               DoFileOpenSave(hwnd, TRUE);
            break;
            case CM_FILE_EXIT:
               PostMessage(hwnd, WM_CLOSE, 0, 0);
            break;
            case CM_ABOUT:
               MessageBox (NULL, "WR Text Editor v.1.0.0\n Edit text and other files." , "Software version:", 0);
         }
      break;
      
      case WM_CLOSE:
         DestroyWindow(hwnd);
      break;
      
      case WM_DESTROY:
         PostQuitMessage(0);
      break;
      default:
         return DefWindowProc(hwnd, Message, wParam, lParam);
   }
   return 0;

} /* end WndProc */


/* ============================================================================  
                                                              
                                       _                      
                                      / \                     
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_______________________________
                                                              
                                                              
============================================================================ */
/* --- Final do Programa --- */

