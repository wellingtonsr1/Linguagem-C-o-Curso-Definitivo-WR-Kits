/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 6 Aula 4
    Macros
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Macros --- */
#define   multip(a,b)  ((a)*(b))
#define   div(a,b)     a/b
#define   maior(a,b)   (((a)>(b)) ? (a) : (b))

#define   hello        printf("Hello ");   \
                       printf("World! ");  \
                       printf("Yes!!! \n")

#define   disp(text)   printf(#text)

#define   numbers(index)  id##index

#define   sorteia10    register int i;            \
                       for(i=0;i<10;i++)          \
                        printf("%d\n",rand()/128)
                      

/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  int   result_i;
  float result_f;
  int   mult_res;
  int   id1 = 51, 
        id2 = 19, 
        id3 =  8, 
        id4 = 33;
  
  mult_res = multip(1+4,4+6);
   
  result_i = div(10,5);
  result_f = div(123.47, 27.8);
  
  printf("%d\n", mult_res);
  printf("%d\n", result_i);
  printf("%f\n", result_f);
  printf("%.2f\n", maior(15.27,9.54));
  
  hello;
  
  disp(Aqui sem "aspas"!!!\n);
  
  printf("%d\n", numbers(1));
  printf("%d\n", numbers(2));
  printf("%d\n", numbers(3));
  printf("%d\n", numbers(4));
  
  
  sorteia10;
  
 
  
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
  ========================
  int   result_i;
  float result_f;

  result_i = div(10,2);         
  result_f = div(33.5, 7.8);   

  printf("result_i= %d\n",result_i);
  printf("result_f= %f\n",result_f);














*/
