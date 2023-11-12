/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 6 Aula 5
    Macros vs. Funções  
    
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
/* --- Protótipo das Funções --- */
/*void imprimir();*/
float ohm2(float V, float A);    


/* ========================================================================= */
/* --- Função Principal --- */
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
  
  
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* ========================================================================= */
/* --- Desenvolvimento das Funções --- */
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
