/* ============================================================================

    Linguagem C, o curso definitivo
    M�dulo 7 Aula 3
    Passagem de Matrizes para Fun��es
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>                                /* para utilizar a fun��o time */

/* ========================================================================= */
/* --- Prot�tipo das Fun��es --- */
void naval(char b[][10]);                        /* fun��o para desenhar a matriz da batalha */
void new_seed();                                 /* fun��o para gerar n�meros aleat�rios */
unsigned map_col(char col);                      /* converte coluna letra em coluna n�mero */


/* ========================================================================= */
/* --- Fun��o Principal --- */
main()
{
  char  boats[8][10] = {0},                      /* guarda as posi��es dos inimigos */
        opt  = 'j',                              /* op��o do usu�rio iniciada em 'j' */
        sort =  1,                               /* flag para novos sorteios */
        col  =  0;                               /* caracteres das colunas */
  
  unsigned num,                                  /* armazena n�meros aleat�rios */
           row     = 0,                          /* n�mero das linhas */
           acertos = 0,                          /* n�mero de alvos atingidos */
           erros   = 0;                          /* n�mero de erros cometidos */
  
  register int i,j;                              /* vari�veis para itera��o */
 
   
  do                                             /* loop para sorteio */
  { 
    if(sort)                                     /* flag sort setada? */
    {                                            /* sim */
      system("cls");                             /* limpa a tela */
      new_seed();                                /* aplica uma semente rand�mica para o sorteio */
  
      for(i=0;i<8;i++)                           /* varre as 8 linhas */
      {
        for(j=0;j<10;j++)                        /* varre as 10 colunas */
        {
          num = rand()%100+1;                    /* num recebe um n�mero aleat�rio de 1 a 100 */
          
          if(num%2) boats[i][j] = '@';           /* se o n�mero for �mpar, insere um "inimigo" */
          else      boats[i][j] = 0x20;          /* se o n�mero for par, insere um espa�o em branco */  
      
        } /* end for anin. */  
      
      } /* end for */
  
      naval(boats);                              /* atualiza matriz da batalha */
  
    } /* end if sort */
    
    else                                         /* se a flag sort for falsa... */
    {
      printf("Opcao invalida\n");                /* informa op��o inv�lida */
      sort = 1;                                  /* seta flag para novo sorteio */
    }
    
    printf("(s) sortear novamente\n");           /* s para sortear novamente */
    printf("(j) jogar!\n>>> ");                  /* j para jogar */
    scanf(" %c", &opt);                          /* l� a op��o */
    
    if(opt!='s' && opt!='S') sort=0;             /* se for um caractere diferente de s, limpa flag de sorteio */
  
  }while(opt!='j' && opt!='J');                  /* encerra o loop quando digitado j para jogar */
  
  system("cls");                                 /* limpa a tela */
  naval(boats);                                  /* atualiza matriz da batalha */
  printf("ALVOS ATINGIDOS: %3d | ERROS: %3d\n",acertos, erros);  /* imprime acertos e erros */
  
  while(1)                                       /* loop infinito */
  {
    
    printf("Digite a posicao para o disparo: "); /* solicita a posi��o para disparo */
    scanf(" %c%d",&col,&row);                    /* l� a coluna e a linha */
  
    system("cls");                               /* limpa a tela */
    
    if(boats[row-1][map_col(col)] == '@')        /* se a posi��o indicada coincidir com um alvo... */
    {
      
      boats[row-1][map_col(col)] = '*';          /* atualiza posi��o com * para indicar o alvo abatido */
      acertos++;                                 /* incrementa acertos */
      putchar('\a');                             /* sinal sonoro */
      
    
    } /* end if boats */
    
    else                                         /* se n�o houve um alvo na posi��o... */
    {
      erros++;                                   /* incrementa os erros */
      putchar('\a');                             /* sinal sonoro */
      putchar('\a');                             /* sinal sonoro */
      putchar('\a');                             /* sinal sonoro */
      
      if(erros>5)                                /* se errar mais de 5 vezes... */
      {
        printf("FOMOS DERROTADOS!\n");           /* o jogador perde */
        for(i=0;i<5;i++)                         /* repete 5 alertas sonoros */
          putchar('\a');                         /* sinal sonoro */
        system("PAUSE");                         /* pausa */
        exit(0);                                 /* interrompe programa */
                  
      } /* end if erros */
    
    } /* end else */
    
    naval(boats);                                /* atualiza matriz de batalha */
    printf("ALVOS ATINGIDOS: %3d | ERROS: %3d\n",acertos, erros);  /* imprime acertos e erros */
  
  } /* end while */
  
  system("PAUSE");	                             /* pausa execu��o (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* ========================================================================= */
/* --- Desenvolvimento das Fun��es --- */


/* ========================================================================= */
/* --- Desenha a matriz de batalha --- */
void naval(char b[][10])
{
  putchar('\n');   
  printf("       A   B   C   D   E   F   G   H   I   J  \n");
  printf("     -----------------------------------------\n");   
  printf("  1  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[0][0], b[0][1], b[0][2], b[0][3], b[0][4], b[0][5], b[0][6], b[0][7], b[0][8], b[0][9]);
  printf("     -----------------------------------------\n");
  printf("  2  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[1][0], b[1][1], b[1][2], b[1][3], b[1][4], b[1][5], b[1][6], b[1][7], b[1][8], b[1][9]);
  printf("     -----------------------------------------\n");
  printf("  3  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[2][0], b[2][1], b[2][2], b[2][3], b[2][4], b[2][5], b[2][6], b[2][7], b[2][8], b[2][9]);
  printf("     -----------------------------------------\n");
  printf("  4  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[3][0], b[3][1], b[3][2], b[3][3], b[3][4], b[3][5], b[3][6], b[3][7], b[3][8], b[3][9]);
  printf("     -----------------------------------------\n");
  printf("  5  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[4][0], b[4][1], b[4][2], b[4][3], b[4][4], b[4][5], b[4][6], b[4][7], b[4][8], b[4][9]);
  printf("     -----------------------------------------\n");
  printf("  6  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[5][0], b[5][1], b[5][2], b[5][3], b[5][4], b[5][5], b[5][6], b[5][7], b[5][8], b[5][9]);
  printf("     -----------------------------------------\n");
  printf("  7  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[6][0], b[6][1], b[6][2], b[6][3], b[6][4], b[6][5], b[6][6], b[6][7], b[6][8], b[6][9]);
  printf("     -----------------------------------------\n");
  printf("  8  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[7][0], b[7][1], b[7][2], b[7][3], b[7][4], b[7][5], b[7][6], b[7][7], b[7][8], b[7][9]);
  printf("     -----------------------------------------\n");
  putchar('\n');   
     
  
} /* end naval */


/* ========================================================================= */
/* --- Gera n�meros aleat�rios --- */
void new_seed()
{
  unsigned long capture; 
  time(&capture);
  srand((unsigned)capture);
   
} /* end new_seed */


/* ========================================================================= */
/* --- Converte o caractere da coluna no inteiro para o �ndice da matriz --- */
unsigned map_col(char col)
{
  switch(col)
  {
    case 'a':
    case 'A': return 0; break;  
    case 'b':
    case 'B': return 1; break;     
    case 'c':
    case 'C': return 2; break; 
    case 'd':
    case 'D': return 3; break; 
    case 'e':
    case 'E': return 4; break; 
    case 'f':
    case 'F': return 5; break;  
    case 'g':
    case 'G': return 6; break; 
    case 'h':
    case 'H': return 7; break; 
    case 'i':
    case 'I': return 8; break; 
    case 'j':
    case 'J': return 9; break;     
             
  } /* end switch */    
     
} /* end map_col*/


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
