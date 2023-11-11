/* =================================================================================================
	Módulo 4, Parte 3
	Aula 0
	Descrição: operadores relacionais
	Autor: Wellington
	Data: 09/11/2023
	Atualização: --
================================================================================================== */


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[]) 
{

    printf("----------------------------------------------\n");	        /* Cabeçaalho */
    printf("		Testes relacionais         			  \n");
    printf("----------------------------------------------\n");	
    
    int opA = 1,
    	opB = 5;
    
    printf("	0 = falso; 1 = verdadeiro\n\n");
    printf("%d == %d = %d\n", opA, opB, opA == opB);
    printf("%d >  %d = %d\n", opA, opB, opA > opB);
    printf("%d >= %d = %d\n", opA, opB, opA >= opB);
    printf("%d <  %d = %d\n", opA, opB, opA < opB);
    printf("%d <= %d = %d\n", opA, opB, opA <= opB);
    printf("%d != %d = %d\n", opA, opB, opA != opB);
    
    
    printf("----------------------------------------------\n");	        /* Rodapé */
    
	system("PAUSE"); 				        							/* Faz uma parada na execução do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
