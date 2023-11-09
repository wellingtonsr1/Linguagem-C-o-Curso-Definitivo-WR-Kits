
/* =================================================================================================
	Módulo 3, Parte 2 
	Aula 5 
	Descrição: Exercício if-else
	Autor: Wellington
	Data: 08/11/2023
	Atualização: --
================================================================================================== */


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Função Principal */
int main(int argc, char *argv[]) {
    
    int numero_1=0,
        numero_2=0;
    char resultado[15];

    printf("----------------------------------------------\n");	                /* Cabeçalho */
    printf("             Testa valores                    \n");
    printf("----------------------------------------------\n");	
    
    printf("Informe um numero inteiro: ");                                      /* Recebe o primeiro valor */
    scanf("%d", &numero_1);

    printf("Informe outro numero inteiro: ");                                   /* Recebe o segundo valor */
    scanf("%d", &numero_2);


    if(numero_1 == numero_2)                                                    /* Realiza os testes */
        strcpy(resultado, "iguais");

    else
        strcpy(resultado, "diferentes");


    printf("Os numeros %d e %d sao %s\n", numero_1, numero_2, resultado);       /* Exibe o resultado do teste */

    printf("----------------------------------------------\n");	                /* Rodapé */
    
	/* system("PAUSE"); */					                /* Faz uma parada na execução do programa */
		
	return 0;							        /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


