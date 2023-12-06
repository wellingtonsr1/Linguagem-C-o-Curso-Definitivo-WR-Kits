/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 8 Aula 4
    Ponteiros de Ponteiros
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

void dispmat(char **m, int n);
/* ========================================================================= */
/* --- Função Principal --- */
main()
{
       
   float   a = 33.8,  b = 123.4;
   float *pta, *ptb;  
   float  **geral;
   
   pta = &a;
   ptb = &b;
   
   geral = &pta;
   
   printf("%.1f\n", **geral);  
   
   geral --;
   
   printf("%.1f\n", **geral);
       
       
       
       
       
       
       
       
       
 /*      
  char *matrix[] = { "WR Kits",                
                     "Linguagem C",
                     "O curso definitivo" };
                     
  dispmat(matrix,3);  
    
      */
    
      
/*      
  int *ptr2, **ptr1, ***ptr0, var = 741;
  
  ptr2 = &var;
  ptr1 = &ptr2;
  ptr0 = &ptr1;
  
  printf("%d\n",    var);
  printf("%d\n",  *ptr2);
  printf("%d\n", **ptr1);
  printf("%d\n",***ptr0);
  
  ***ptr0 = 555;
  
  printf("%d\n",    var);
  printf("%d\n",  *ptr2);
  printf("%d\n", **ptr1);
  printf("%d\n",***ptr0);
*/
    
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


void dispmat(char **m, int n)
{
 register int i;

 for(i=0;i<n;i++)
 printf("%s\n", m[i]);
 
} /* end dispmat */


 



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
