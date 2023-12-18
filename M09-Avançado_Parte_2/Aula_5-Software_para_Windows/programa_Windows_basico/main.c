/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 9 Aula 5
    Software para Windows
    
    Um Programa Windows Básico
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <windows.h>                             /* bibiloteca do Windows */


/* ========================================================================= */
/* --- Protótipo das Funções --- */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);


/* ========================================================================= */
/* --- Nome da Classe de Janela --- */
char szClassName[ ] = "Hello Windows!";


/* ========================================================================= */
/* --- Função Windows Principal --- */
int WINAPI WinMain (HINSTANCE hThisInstance,     /* instância atual do programa, devido à multitarefa */
                    HINSTANCE hPrevInstance,     /* sempre NULL */
                    LPSTR lpszArgument,          /* ponteiro para uma string que contém argumentos de linha de comando */
                    int nFunsterStil)            /* define como a janela será exibida ao começar a execução */
{
    /* -- Variáveis Locais -- */                
    HWND hwnd;                                   /* handle utilizado na janela windows */
    MSG messages;                                /* armazenará as mensagens do programa */
    WNDCLASSEX wincl;                            /* estrutura de dados para a classe de janela */
     
    /* -- Define uma classe de janela -- */
    wincl.hInstance = hThisInstance;             /* handle desta instância */
    wincl.lpszClassName = szClassName;           /* nome da classe de janela */
    wincl.lpfnWndProc = WindowProcedure;         /* função de janela chamada pelo Windows */
    wincl.style = CS_DBLCLKS;                    /* estilo aplicado */
    wincl.cbSize = sizeof (WNDCLASSEX);          /* compatibiliza para o tamanho WNDCLASSEX */

    /* -- Define a seta do mouse e o ícone do programa -- */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);        /* estilo de ícone padrão (barra de tarefas) */
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);      /* estilo de ícone padrão (canto superior esquerdo da janela) */
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);          /* estilo da seta do mouse padrão */
    wincl.lpszMenuName = NULL;                             /* não apresentará um menu */
    wincl.cbClsExtra = 0;                                  /* sem bytes adicionais */
    wincl.cbWndExtra = 0;                                  /*                      */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;       /* cor de fundo padrão */

    
    if(!RegisterClassEx (&wincl))                /* se registro da classe de janela falhar... */
      return 0;                                  /* encerra o programa retornando 0 */

    /* -- Cria a Janela -- */
    hwnd = CreateWindowEx (
           0,                                    /* possibilidades de variação extendidas */
           szClassName,                          /* nome da classe janela */
           "Hello Windows!",                     /* Texto Título */
           WS_OVERLAPPEDWINDOW,                  /* Estilo de janela: normal */
           CW_USEDEFAULT,                        /* Windows decide a coordenada X */
           CW_USEDEFAULT,                        /* Windows decide a coordenada Y */
           600,                                  /* Largura inicial da janela: 650 pixels */
           400,                                  /* Altura inicial da janela: 400 pixels */
           HWND_DESKTOP,                         /* sem janelas-pai */
           NULL,                                 /* sem menu */
           hThisInstance,                        /* handle da instância do programa */
           NULL                                  /* nenhum argumento adicional */
           );
     
    ShowWindow(hwnd, nFunsterStil);              /* exibe a janela do programa */

    /* -- Loop para repetição de mensagens, até GetMessage retornar 0 -- */
    while(GetMessage(&messages, NULL, 0, 0))
    {
      TranslateMessage(&messages);               /* autoriza o uso do teclado */
      DispatchMessage(&messages);                /* retorna o controle ao Windows */
    
    } /* end while */

    /*   */
    return messages.wParam;

} /* end WinMain */



/* ========================================================================= */
/* --- Desenvolvimento da Função WindowProcedure --- */
/* Ela é chamada por DispatchMessage, recebe mensagem da fila de mensagens */
LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
  switch(message)                                /* verifica a mensagem */
  {
    case WM_DESTROY:                         
      PostQuitMessage(0);                        /* encerra o programa */
      break;
    
    default:                                     /* permite ao Windows processar quaisquer mensagens não
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
