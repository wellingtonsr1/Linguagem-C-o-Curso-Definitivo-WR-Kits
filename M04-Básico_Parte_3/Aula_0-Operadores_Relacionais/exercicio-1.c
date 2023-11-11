/* =================================================================================================
	M�dulo 4, Parte 3
	Aula 0
	Descri��o: operadores relacionais
	Autor: Wellington
	Data: 09/11/2023
	Atualiza��o: --
================================================================================================== */


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[]) 
{

    printf("----------------------------------------------\n");	        /* Cabe�aalho */
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
    
    
    printf("----------------------------------------------\n");	        /* Rodap� */
    
	system("PAUSE"); 				        							/* Faz uma parada na execu��o do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
