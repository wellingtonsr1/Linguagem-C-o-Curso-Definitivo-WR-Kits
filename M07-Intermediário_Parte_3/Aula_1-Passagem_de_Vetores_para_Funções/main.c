/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 6 Aula 1
    Passagem de Vetores para Funções
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* ========================================================================= */
/* --- Constantes --- */
#define  num   100


/* ========================================================================= */
/* --- Protótipo das Funções  --- */
float true_rms(float volts[], int N);
int func1(int vet[], int N, int index, int interval);


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  float v[5] = { 12.5, 27.8, 4.9, 0.7, 2.1 };
  
  printf("Vrms= %.4fV\n", true_rms(v, 5));
  
  
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* ========================================================================= */
/* --- Desenvolvimento das Funções --- */
float true_rms(float volts[], int N)
{
  register int i;
  float rms = 0.0;
  
  for(i=0;i<N;i++)
    volts[i] *= volts[i];   
  
  for(i=0;i<N;i++) 
    rms += volts[i]; 
    
  rms /= N;
  
  return sqrt(rms);  
      
} /* end true_rms */




int func1(int vet[], int N, int index, int interval)
{
     
  int i;
  
  for(i=0;i<N;i++)
   vet[i] = interval*i;     
  
  return vet[index];   
     
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
