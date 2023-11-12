/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 6 Aula 3
    Variáveis Locais vs Globais
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Maio de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Protótipo das Funções --- */ 
extern void resultado();
int func();
void func2();


/* ========================================================================= */
/* --- Variáveis Globais --- */

int   valor   = 5,
      numero  = 11,
      teste   = 15;


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
 
   int mult;
   
   mult = valor*numero*teste;
   
   resultado();
   
   printf("Mult= %d\n",mult);
   
   func2();
   
 
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


int func()
{
  int var = 5;     
   
  var++;
  
  return var;  
     
}

void func2()
{
  auto int i;
  for(i=0; i<8; i++)
   printf("Hello\n");       
     
}

 


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
