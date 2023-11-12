/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 6 Aula 2
    Funções que retornam valores
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Maio de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Protótipo das Funções --- */
float poten(float val, int n);
char high_or_low(int value);
float freq_555(float Ra, float Rb, float C);
int soma(int a, int b); 

/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  float val = 5.0;
  int     n = 4;
    
  printf("%.2f elevado na %d = %.2f\n", val, n, poten(val,n));
    
  
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* ========================================================================= */
/* --- Desenvolvimento das Funções --- */
float poten(float val, int n)
{
  float pot;
  int     i;
  
   for(i=1, pot=1.0; i<=n; i++)  
    pot *= val; 
    
   return pot;  
     
}



char high_or_low(int value)
{
  if(value > 500) return 'H';
  else            return 'L';

}  


float freq_555(float Ra, float Rb, float C)
{
  float freq;
  
  freq = 1.44/((Ra+2*Rb)*C);    
  
  return freq;
     
}  


int soma(int a, int b)
{
  return a+b;
       
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


/*

  EXEMPLOS DA AULA
  =======================
  
float freq_555(float Ra, float Rb, float C)
{
  float freq;
  
  freq = 1.44/((Ra+2*Rb)*C);    
  
  return freq;
     
}  



char high_or_low(int value)
{
  if(value > 500) return 'H';
  else            return 'L';

}  












*/
