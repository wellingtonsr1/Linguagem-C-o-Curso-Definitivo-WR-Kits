/* ============================================================================

    Linguagem C, o curso definitivo
    M�dulo 6 Aula 5
    Macros vs. Fun��es  
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Macros --- */
#define   ohm(V,A)   V/A
#define   imprimir()  printf("Hello!!! \n"); \
                      printf("2\n");         \
                      printf("3\n")


/* ========================================================================= */
/* --- Prot�tipo das Fun��es --- */
/*void imprimir();*/
float ohm2(float V, float A);    


/* ========================================================================= */
/* --- Fun��o Principal --- */
main()
{
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir(); imprimir();
  
  
  system("PAUSE");	                             /* pausa execu��o (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* ========================================================================= */
/* --- Desenvolvimento das Fun��es --- */
/*void imprimir()
{
  printf("Hello!!! \n");  
  printf("2\n");
  printf("3\n");   
     
}/*



float ohm2(float V, float A)
{
  return V/A;    
      
      
} /* end ohm*/

 

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
