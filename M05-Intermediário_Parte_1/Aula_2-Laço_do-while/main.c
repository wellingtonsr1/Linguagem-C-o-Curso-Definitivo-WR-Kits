/* ============================================================================

    Linguagem C, o curso definitivo
    M�dulo N Aula N
    T�tulo da Aula
    
    Autor: 
    Data: 

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>                              /* para trabalhar com acentua��o */

/* ========================================================================= */
/* --- Fun��o Principal --- */
main()
{
  
  setlocale(LC_ALL,"Portuguese_Brazil");         /* configura��o para aceitar caracteres do portugu�s brasileiro */  
    
  int numero;
    
  do
  {
    printf("Digite o n�mero: ");
    scanf("%d",&numero);
                                                                                     
  } while(numero>=10);
   
  
  system("PAUSE");	                             /* pausa excu��o (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


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
  ==========================
  
  char opt;

  do
  {
    printf("(a) Menus.\n");
    printf("(q) Quit.\n");
    printf("Op��o: ");
    scanf(" %c",&opt);

    switch(opt)
    {
      case 'a':  printf("Menus\n"); break;
      case 'q':  printf("Saiu\n");  break;
      default:   printf("Inv�lido\n");
   
    } 


  }while(opt!='q');
  

  ========================== 
  char opt;

  do
  {
    printf("(a) Menus.\n");
    printf("(b) Menu 2.\n");
    printf("(q) Quit.\n");
    printf("Op��o: ");
    scanf(" %c",&opt);
    
    system("CLS");

    switch(opt)
    {
      case 'a':  
      case 'A':  printf("Menus\n"); break;
      case 'b':
      case 'B':  printf("Menu2\n"); break;
      case 'q':  
      case 'Q':  printf("Saiu\n");  break;
      default:   printf("Inv�lido\n");
   
    } 


  }while(opt!='q' && opt!='Q');  




*/
