/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 8 Aula 3
    Ponteiros para Funções
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Protótipo das Funções --- */
int letters(const char *str);
int strsize(const char *str);
void func(int *v, int n);

void trata_str(char *s, int (*func) (const char *));


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  char s1[41] = "WR Kits";
  
  trata_str(s1, strsize);
  
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* ========================================================================= */
/* --- Desenvolvimento das Funções --- */
void trata_str(char *s, int (*func) (const char *))
{
  printf("O tamanho da string \x82: ");
  printf("%d\n", (*func)(s));   
     
     
}


int letters(const char *str)
{
  register int i=0, letter=0;
  
  while(str[i]!='\0')
  {
    if(isalpha(str[i])) 
      letter++; 
      
    i++;                               
  }    
  
  return letter;
  
}


int strsize(const char *str)
{
  register int i=0;
  
  while(str[i]!='\0')
   i++;
   
  return i;     
    
}







void func(int *v, int n)
{
  register int i;
  
  for(i=0;i<n;i++)
    printf("v[%d]= %d\n",i,v[i]);   
     
     
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
