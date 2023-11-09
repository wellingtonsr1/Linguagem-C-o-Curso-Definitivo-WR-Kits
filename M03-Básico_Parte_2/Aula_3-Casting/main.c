/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo N Aula N
    Título da Aula
    
    Autor: 
    Data: 

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  int val_ADC;
  float volts;
  
  printf("Inserir um valor de ADC entre 0 e 1023: ");
  scanf("%d",&val_ADC);
  
  volts = (float)(val_ADC*5.0/1023.0);
  printf("A tensao lida foi: %.2fV\n", volts);  


  
  
  system("PAUSE");	                             /* pausa excução (Pressione qualquer tecla para continuar . . .) */
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
   
  ========================================= 
  char ch = 10;
  int i = 2;
  float f = 1.5;
  double d = 4.88, res;
  
  res = (ch/i) + (f*d) - (f+i);
  printf("res = %.2f\n", res);   
   



  ========================================= 
  int val_ADC;
  float volts;
  
  printf("Inserir um valor de ADC entre 0 e 1023: ");
  scanf("%d",&val_ADC);
  
  volts = (float)(val_ADC*5.0/1023.0);
  printf("A tensao lida foi: %.2fV\n", volts);
















*/

