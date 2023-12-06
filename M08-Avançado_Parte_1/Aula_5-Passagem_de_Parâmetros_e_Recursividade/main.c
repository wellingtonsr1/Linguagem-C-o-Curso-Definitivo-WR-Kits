/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 8 Aula 5
    Passagem de Parâmetros e Recursividade
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
int strhowbig(const char *s);
int mult_dobro(int a, int b);
void quad_cube(int *a, int *b);
void downto0(int n);
 
/* ========================================================================= */
/* --- Função Principal --- */
main(int argc, char *argv[])
{
  char s[40] = "1234"; 
  printf("String tamanho: %d\n", strhowbig(s));
  
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */

int mult_dobro(int a, int b)
{
  a*=2;
  b*=2;

  return a*b;

}

void quad_cube(int *a, int *b)
{
  int temp_a = *a,
      temp_b = *b; 
     
  *a = temp_a*temp_a;  
  *b = temp_b*temp_b*temp_b;
   
}


/*
  int i,num, quad;             
  
  printf("num quad\n");         
  
  for(i=1; i<argc; i++)        
  {
    num = atoi(argv[i]);       
    quad = num*num;
    
    printf("%2d %3d\n", num, quad); 
*/

void downto0(int n)
{
  if(n<0) return;
  
  printf("%d\n",n);
  downto0(n-1);     
     
}


int strhowbig(const char *s)
{
  if(*s=='\0')
    return 0;
  else
  {
    printf(s);
    putchar('\n');
    return 1 + strhowbig(s+1);
  }
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
