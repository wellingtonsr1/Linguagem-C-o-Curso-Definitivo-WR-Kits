/* =================================================================================================
	M�dulo 4, Parte 3
	Aula 4
	Descri��o: 
	Autor: Wellington
	Data: 10/11/2023
	Atualiza��o: --
================================================================================================== */

/*
	https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm
	
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


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									

	int idade=0;
	char estado_civil;
	
    printf("----------------------------------------------\n");	        /* Cabe�aalho */
    printf("               Estado civil                   \n");   
    printf("----------------------------------------------\n");	
    
    printf("Informe sua idade: ");
    
    
    
    printf("----------------------------------------------\n");	        /* Rodap� */
    
    
	system("PAUSE"); 				        							/* Faz uma parada na execu��o do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
