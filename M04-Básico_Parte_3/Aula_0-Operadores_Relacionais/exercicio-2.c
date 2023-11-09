/* =================================================================================================
	Módulo 4, Parte 
	Aula 0
	Descrição: 
	Autor: Wellington
	Data: 
	Atualização: --
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


/* Função Principal */
int main(int argc, char *argv[]) {

	int num_1,															/* Declaração de variáveis */
		num_2,
		aux;
		
    printf("----------------------------------------------\n");	        /* Cabeçaalho */
    printf("             Ordem inversa					  \n");
    printf("----------------------------------------------\n");	
    
    printf("Informe dois numero inteiros: ");							/* Entrada de dados */
    scanf("%d%d", &num_1, &num_2);
    
    if(num_1 < num_2) {													/* Faz verificações */
    	aux = num_2;
    	num_2 = num_1;
    	num_1 = aux;
	} 
	
	printf("Ordem inversa: %d %d\n", num_1, num_2);						/* Exibe o resultado */
	
	
    printf("----------------------------------------------\n");	        /* Rodapé */
    
	system("PAUSE"); 				        							/* Faz uma parada na execução do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
