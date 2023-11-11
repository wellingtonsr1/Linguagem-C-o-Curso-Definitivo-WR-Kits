/* =================================================================================================
	M�dulo 4, Parte 3
	Aula 4
	Descri��o: 
	Autor: Wellington
	Data: 10/11/2023
	Atualiza��o: --
================================================================================================== */

/*
	\x82 = �
	\xE3 = �
	\x87 = �
	\x88 = �
	\xA0 = �
	
	ou usar:
	#include <locale.h> 
	setlocale(LC_CTYPE, "Portuguese"); 
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */

    int inicial=0, antecessor=1, atual=0, final=0;                              /* Declara��o de vari�veis */
 	    
    printf("----------------------------------------------\n");	                /* Cabe�alho */
    printf("         Sequencia de Fibonacci               \n");   
    printf("----------------------------------------------\n");    

    printf("Informe ate onde deseja gerar a sequencia: ");                      /* Entrada de dados */
    scanf("%d", &final);

    while(atual <= final)                                                       /* Loop onde faz os c�lculos e exibe a sa�da */
    {
         
        printf("%d ", atual);
        
        inicial = antecessor;
        antecessor = atual;
        atual = antecessor + inicial;

    } /* end while */
    
    
    printf("\n----------------------------------------------\n");	        /* Rodap� */
    
    
/*	system("PAUSE"); 	*/			        		/* Faz uma parada na execu��o do programa */
		
	return 0;							        /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
