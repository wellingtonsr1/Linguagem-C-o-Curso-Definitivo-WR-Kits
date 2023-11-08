/* =================================================================================================
	Módulo 2, Aula 5
	----------------
	
	Descrição: Tipos de dados da Linguagem C
	Autor: Wellington
	Data: 07/11/2023
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>




/* Função Principal */
int main(int argc, char *argv[]) {
	
        /* No linux, dá uma lerta para usar o '%ld' no luga de '%d' */	
	printf("int ocupa %d byte (s)\n", sizeof(int));				/* Exibe quanto o int ocupa em bytes */
	printf("short int ocupa %d byte (s)\n", sizeof(short));			/* Exibe quanto o short ocupa em bytes */
	printf("long int ocupa %d byte (s)\n", sizeof(long));			/* Exibe quanto o long ocupa em bytes */
	printf("char ocupa %d byte (s)\n", sizeof(char));			/* Exibe quanto o char ocupa em bytes */
	printf("float ocupa %d byte (s)\n", sizeof(float));			/* Exibe quanto o float ocupa em bytes */
	printf("float ocupa %d byte (s)\n", sizeof(double));			/* Exibe quanto o double ocupa em bytes */
	
	/* system("PAUSE"); */							/* Faz uma pausa na execução do programa */
		
	return 0;								/* Retorna '0' se tudo  ocorrer bem na execução */
	
}  /* end main */

