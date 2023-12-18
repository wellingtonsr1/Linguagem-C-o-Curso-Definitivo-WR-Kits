/* ============================================================================

    Linguagem C, o curso definitivo
    M�dulo 9 Aula 5
    Software para Windows
    
    Um Programa Windows B�sico
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <windows.h>                             /* bibiloteca do Windows */


/* ========================================================================= */
/* --- Prot�tipo das Fun��es --- */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);


/* ========================================================================= */
/* --- Nome da Classe de Janela --- */
char szClassName[ ] = "Hello Windows!";


/* ========================================================================= */
/* --- Fun��o Windows Principal --- */
int WINAPI WinMain (HINSTANCE hThisInstance,     /* inst�ncia atual do programa, devido � multitarefa */
                    HINSTANCE hPrevInstance,     /* sempre NULL */
                    LPSTR lpszArgument,          /* ponteiro para uma string que cont�m argumentos de linha de comando */
                    int nFunsterStil)            /* define como a janela ser� exibida ao come�ar a execu��o */
{
    /* -- Vari�veis Locais -- */                
    HWND hwnd;                                   /* handle utilizado na janela windows */
    MSG messages;                                /* armazenar� as mensagens do programa */
    WNDCLASSEX wincl;                            /* estrutura de dados para a classe de janela */
     
    /* -- Define uma classe de janela -- */
    wincl.hInstance = hThisInstance;             /* handle desta inst�ncia */
    wincl.lpszClassName = szClassName;           /* nome da classe de janela */
    wincl.lpfnWndProc = WindowProcedure;         /* fun��o de janela chamada pelo Windows */
    wincl.style = CS_DBLCLKS;                    /* estilo aplicado */
    wincl.cbSize = sizeof (WNDCLASSEX);          /* compatibiliza para o tamanho WNDCLASSEX */

    /* -- Define a seta do mouse e o �cone do programa -- */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);        /* estilo de �cone padr�o (barra de tarefas) */
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);      /* estilo de �cone padr�o (canto superior esquerdo da janela) */
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);          /* estilo da seta do mouse padr�o */
    wincl.lpszMenuName = NULL;                             /* n�o apresentar� um menu */
    wincl.cbClsExtra = 0;                                  /* sem bytes adicionais */
    wincl.cbWndExtra = 0;                                  /*                      */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;       /* cor de fundo padr�o */

    
    if(!RegisterClassEx (&wincl))                /* se registro da classe de janela falhar... */
      return 0;                                  /* encerra o programa retornando 0 */

    /* -- Cria a Janela -- */
    hwnd = CreateWindowEx (
           0,                                    /* possibilidades de varia��o extendidas */
           szClassName,                          /* nome da classe janela */
           "Hello Windows!",                     /* Texto T�tulo */
           WS_OVERLAPPEDWINDOW,                  /* Estilo de janela: normal */
           CW_USEDEFAULT,                        /* Windows decide a coordenada X */
           CW_USEDEFAULT,                        /* Windows decide a coordenada Y */
           600,                                  /* Largura inicial da janela: 650 pixels */
           400,                                  /* Altura inicial da janela: 400 pixels */
           HWND_DESKTOP,                         /* sem janelas-pai */
           NULL,                                 /* sem menu */
           hThisInstance,                        /* handle da inst�ncia do programa */
           NULL                                  /* nenhum argumento adicional */
           );
     
    ShowWindow(hwnd, nFunsterStil);              /* exibe a janela do programa */

    /* -- Loop para repeti��o de mensagens, at� GetMessage retornar 0 -- */
    while(GetMessage(&messages, NULL, 0, 0))
    {
      TranslateMessage(&messages);               /* autoriza o uso do teclado */
      DispatchMessage(&messages);                /* retorna o controle ao Windows */
    
    } /* end while */

    /*   */
    return messages.wParam;

} /* end WinMain */



/* ========================================================================= */
/* --- Desenvolvimento da Fun��o WindowProcedure --- */
/* Ela � chamada por DispatchMessage, recebe mensagem da fila de mensagens */
LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
  switch(message)                                /* verifica a mensagem */
  {
    case WM_DESTROY:                         
      PostQuitMessage(0);                        /* encerra o programa */
      break;
    
    default:                                     /* permite ao Windows processar quaisquer mensagens n�o
                                                    especificadas no comando switch */
      return DefWindowProc(hwnd, message, wParam, lParam);
  }

  return 0;                                      /* retorna 0 */
    
} /* end WindowProcedure */




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
