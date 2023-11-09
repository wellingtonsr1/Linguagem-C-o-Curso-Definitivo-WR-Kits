/* =================================================================================================
	M�dulo 4, Parte 
	Aula 0
	Descri��o: 
	Autor: Wellington
	Data: 
	Atualiza��o: --
================================================================================================== */

/*
	Implemente umprograma em C que leia dois numeros inteiros e os apresente na tela em ordem decrescente.
	Exemplo: o usuario entra com 11 e 15. O sistema imprime 15 11.
	Exemplo: o usuario entra com 12 e 6. O sistema imprime 12 6.
	Exemplo: o usuario entrA com 14 e 14. O sistema imprime 14 14.
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[]) {

	int num_1,															/* Declara��o de vari�veis */
		num_2,
		aux;
		
    printf("----------------------------------------------\n");	        /* Cabe�aalho */
    printf("             Ordem inversa					  \n");
    printf("----------------------------------------------\n");	
    
    printf("Informe dois numero inteiros: ");							/* Entrada de dados */
    scanf("%d%d", &num_1, &num_2);
    
    if(num_1 < num_2) {													/* Faz verifica��es */
    	aux = num_2;
    	num_2 = num_1;
    	num_1 = aux;
	} 
	
	printf("Ordem inversa: %d %d\n", num_1, num_2);						/* Exibe o resultado */
	
	
    printf("----------------------------------------------\n");	        /* Rodap� */
    
	system("PAUSE"); 				        							/* Faz uma parada na execu��o do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
