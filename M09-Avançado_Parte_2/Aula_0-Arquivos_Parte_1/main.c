/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 9 Aula 0
    Arquivos (Parte 1)
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
 FILE *arq;
 char s[50];
 int ch;
 
 printf("Digite o nome do arquivo: ");
 gets(s);
 arq = fopen(s,"a");
 
 if(arq==NULL)
 {
 printf("ERRO\n");
 exit(1);
 }
 
  fputs("Nova string inserida",arq);
  
 
 fclose(arq);

  
  
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
