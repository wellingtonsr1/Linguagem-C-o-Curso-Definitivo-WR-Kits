/* =================================================================================================
	Módulo 4, Parte 3
	Aula 4
	Descrição: 
	Autor: Wellington
	Data: 10/11/2023
	Atualização: --
================================================================================================== */

/*
	\x82 = é
	\xE3 = ã
	\x87 = ç
	\x88 = ê
	\xA0 = á
	
	ou usar:
	#include <locale.h> 
	setlocale(LC_CTYPE, "Portuguese"); 
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */

    int inicial=0, antecessor=1, atual=0, final=0;                              /* Declaração de variáveis */
 	    
    printf("----------------------------------------------\n");	                /* Cabeçalho */
    printf("         Sequencia de Fibonacci               \n");   
    printf("----------------------------------------------\n");    

    printf("Informe ate onde deseja gerar a sequencia: ");                      /* Entrada de dados */
    scanf("%d", &final);

    while(atual <= final)                                                       /* Loop onde faz os cálculos e exibe a saída */
    {
         
        printf("%d ", atual);
        
        inicial = antecessor;
        antecessor = atual;
        atual = antecessor + inicial;

    } /* end while */
    
    
    printf("\n----------------------------------------------\n");	        /* Rodapé */
    
    
/*	system("PAUSE"); 	*/			        		/* Faz uma parada na execução do programa */
		
	return 0;							        /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
