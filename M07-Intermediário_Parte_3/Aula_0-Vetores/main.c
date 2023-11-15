/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 7 Aula 0
    Vetores
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Constantes --- */
#define  N  6
 

/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  float media[N];
  float med = 0.0;
  int i;

  for(i=0;i<N;i++)
  {
    printf("Valor %d = ",i);
    scanf("%f",&media[i]);

  }
  
  for(i=0;i<N;i++)
    med += media[i]; /* med = med + media[i]*/

  med /= N; /* med = med / N */

  printf("M\x82 \bdia= %.2f\n",med);

  
  
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
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
  float media[4];
  float med;
  int i;

  for(i=0;i<4;i++)
  {
    printf("Valor %d = ",i);
    scanf("%f",&media[i]);

  }

  med = (media[0]+media[1]+media[2]+media[3])/4.0;

  printf("M\x82 \bdia= %.2f\n",med);


  ==========================
  float media[N];
  float med = 0.0;
  int i;

  for(i=0;i<N;i++)
  {
    printf("Valor %d = ",i);
    scanf("%f",&media[i]);

  }  

  for(i=0;i<N;i++)
    med += media[i];

  med/=N;

  printf("M\x82 \bdia= %.2f\n",med);


*/
