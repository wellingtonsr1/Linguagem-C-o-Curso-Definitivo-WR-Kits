/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 8 Aula 2
    Título da Aula
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Constantes --- */
#define LEVELS 8


/* ========================================================================= */
/* --- Protótipo das Funções --- */
void disp_stk();
void push(int i);
int pop();


/* ========================================================================= */
/* --- Variáveis Globais --- */
int *ptr1, *ptr2, stk[LEVELS], cnt;


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
      
  int data_stk, opt;
  
  ptr1 = stk;   
  ptr2 = stk;    
  
  for( ; ; )
  {
    printf("1- mostrar pilha\n");
    printf("2- inserir um dado\n");
    printf("3- remover dado atual\n");
    printf("4- sair\n");   
    printf(">>> ");
    scanf("%d", &opt);
    
    switch(opt)
    {
      case 1:
        disp_stk();
        break;         
      case 2:
        printf("Digite um dado: ");
        scanf("%d",&data_stk);
        push(data_stk);         
        break;       
      case 3:
        pop();
        break;
      
      case 4:
        system("pause");
        exit(0);           
    }
   
   
   system("cls");
       
  } 
 
  
  
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* ========================================================================= */
/* --- Função para mostrar todo conteúdo da pilha --- */
void disp_stk()
{
  register int i;
  
  for(i=0;i<=cnt;i++)
    printf("Stack level %2d: %d\n",i,stk[i]);     
     
  system("pause");   
     
} /* end disp_stk */


/* ========================================================================= */
/* --- Função para inserir dados na pilha --- */
void push(int value)
{
  register long t;                               /* variável para delay */
  
  ptr1++;                                        /* a cada entrada incrementa o endereço
                                                    apontado por ptr1 */
  cnt++;                                         /* incrementa contador de dados */
  
  if(ptr1 == (ptr2+LEVELS))                      /* atingiu o limite da pilha? */
  {                                              /* sim */
    printf("STACK OVERFLOW\n");                  /* indica estouro da pilha */
    system("pause");                             /* pause execução */
    exit(0);                                     /* encerra o programa */
    
  } /* end if */
  
  else                                           /* senão, imprime mensagem */ 
    printf("Added\n");                           /* Adicionado */
    
  for(t=0;t<1E7;t++);                            /* delay */
  
  *ptr1 = value;                                 /* guarda valor no endereço atual de stack */
     
} /* end push */


/* ========================================================================= */
/* --- Função para remover dados da pilha --- */
int pop()
{
  register long t;                               /* variável para delay */  
    
  if(ptr1==ptr2)                                 /* quando os endereços forem iguais? */
  {                                              /* sim */
    printf("STACK EMPTY\n");                     /* pilha vazia */
    system("pause");
            
  } /* end if */
  
  else
    printf("Removed\n");                         /* informa sucesso da remoção */
    
  for(t=0;t<1E7;t++);                            /* delay */
  
  ptr1--;                                        /* retrocede um endereço */
  
  cnt--;                                         /* decrementa contador de dados */
  
  return *(ptr1+1);                              /* retorna o conteúdo do endereço atual */
                
} /* end pop */


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

/*

  EXEMPLOS DA AULA
  ======================
  short var = 10;           
  short *ptr;               

  ptr = &var;               

  printf("%X\n", &var);    
  printf("%X\n",  ptr);   

  ptr++;                  

  printf("%X\n",  ptr);     
                            

  ptr--;                  

  printf("%X\n",  ptr);   
  
  ptr--;                  
  
  printf("%X\n",  ptr);    
                              
  
  
  ======================
  short vec1[3] = {12,15,17};
  long  vec2[3] = {22,17,33};
  short *p1 = NULL;
  long  *p2 = NULL;
  register int i;

  p1 = vec1;
  p2 = vec2;

  *p1 = 2;

  for(i=0;i<3;i++)
  {
     *(p1+i) = 2*i;
     *(p2+i) = 3*i;
  }

  printf("Vec1 Vec2\n");

  for(i=0;i<3;i++)
    printf("%2d  %2d\n",vec1[i],vec2[i]);


  ======================
  int *p1, *p2;
  int  a2,  a1;
  
  a1 = 10;
  a2 = 30;
  
  p1 = &a1;
  p2 = &a2;
  
  printf("a1 addr: %p\n",&a1);
  printf("a2 addr: %p\n",&a2);
  
  if(p1>p2) printf("O endereco de a1 \x82 o maior\n");
  else      printf("o endereco de a2 \x82 o maior\n");










*/

