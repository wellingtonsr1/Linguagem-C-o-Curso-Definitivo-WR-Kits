/* =================================================================================================
	Módulo 4, Parte 3
	Aula 4
	Descrição: 
	Autor: Wellington
	Data: 10/11/2023
	Atualização: --
================================================================================================== */

/*
	https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm
	
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


/* Função Principal */
int main(int argc, char *argv[])
{
									

	int idade=0;
	char estado_civil;
	
    printf("----------------------------------------------\n");	        /* Cabeçaalho */
    printf("               Estado civil                   \n");   
    printf("----------------------------------------------\n");	
    
    printf("Informe sua idade: ");
    
    
    
    printf("----------------------------------------------\n");	        /* Rodapé */
    
    
	system("PAUSE"); 				        							/* Faz uma parada na execução do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
