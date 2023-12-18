/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 9 Aula 4
    Alocação Dinâmica de Memória
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


long *vec_long(unsigned qtd);

/* ========================================================================= */
/* --- Função Principal --- */
main()
{

  char *palloc;
  
  palloc = malloc(8);
  
  if(!palloc)
  {
    puts("Fatal error");
    system("pause");
    exit(1);      
  }
  
  strcpy(palloc,"WR KITS");
  
  palloc = realloc(palloc,19);
  
  if(!palloc)
  {
    puts("Fatal error");
    system("pause");
    exit(1);      
  }
  
  strcat(palloc," Engenharia");
  
  printf(palloc);
  free(palloc);

      
  putchar('\n');
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


long *vec_long(unsigned qtd)
{
  long *palloc;
  
  palloc = calloc(qtd, sizeof(long));
  
  if(!palloc)
  {
    printf("Fatal error\n");
    exit(1);           
  }     
  
  return palloc;   
     
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

  =====================================
  
  char s[100],
       *palloc;

  printf("Entre com a string: ");
  gets(s);
  
  palloc = (char *)malloc(strlen(s)+1);
  
  if(palloc==NULL)
    puts("Memoria insuficiente\n");
  
  else
  {
    strcpy(palloc,s);
    
    putchar(0x0A);
    printf(s);
    putchar(0x0A);
    printf(palloc);
    putchar(0x0A);   
      
    free(palloc);  
       
  }


  =====================================

  FILE *arq;
  unsigned char *palloc;
  unsigned long int num_bytes=0,i=0;
  int chr;
  
  arq = fopen("code.txt","r");
  
  if(arq == NULL)
  {
    printf("Falha ao abrir o arquivo.\n");
    system("pause");
    exit(0);            
  }
  
  printf("Arquivo aberto com sucesso!\n");
  
  while((chr = fgetc(arq))!=EOF)
    num_bytes++;
 
  printf("Tamanho do arquivo: %lu bytes\n",num_bytes);
  rewind(arq);
  
  palloc = (unsigned char *) malloc(num_bytes*sizeof(char));
  
  if(palloc == NULL)
  {
    printf("Memoria insuficiente.\n");
    system("pause");
    exit(0);                
  }
  
  while((chr = fgetc(arq))!=EOF)
  {
    if(i<=num_bytes) palloc[i] = (unsigned char) chr;     
    i++;          
  }
  
  for(i=0;i<num_bytes;i++)
    printf("%c",palloc[i]);
  
  fclose(arq);
  free(palloc);


  =====================================
  
  long *ptr;
  register int i;
  
  ptr = vec_long(20);
  
  for(i=0;i<20;i++)
    ptr[i] = i+1;
  
  for(i=0;i<20;i++)
    printf("ptr[%2d] = %2d\n", i, ptr[i]);
  
  free(ptr);

  =====================================
  
  
  char *palloc;
  
  palloc = malloc(8);
  
  if(!palloc)
  {
    puts("Fatal error");
    system("pause");
    exit(1);      
  }
  
  strcpy(palloc,"WR KITS");
  
  palloc = realloc(palloc,19);
  
  if(!palloc)
  {
    puts("Fatal error");
    system("pause");
    exit(1);      
  }
  
  strcat(palloc," Engenharia");
  
  printf(palloc);
  free(palloc);











*/
