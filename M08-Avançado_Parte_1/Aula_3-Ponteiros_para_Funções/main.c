/* ============================================================================

    Linguagem C, o curso definitivo
<<<<<<< HEAD
    Módulo 8 Aula 5
    Passagem de Parâmetros e Recursividade
=======
    Módulo 8 Aula 3
    Ponteiros para Funções
>>>>>>> 099852941e2bcf04d93fed0209fd2af4ba64fc33
    
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


<<<<<<< HEAD
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
=======
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
     
>>>>>>> 099852941e2bcf04d93fed0209fd2af4ba64fc33
     
}


<<<<<<< HEAD
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



=======
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




>>>>>>> 099852941e2bcf04d93fed0209fd2af4ba64fc33
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
