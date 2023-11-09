/* =================================================================================================
	Módulo 3, Parte 2
	Aula 2
	Descrição: Exercício 1 (calculadora) - entrada de teclado
	Autor: Wellington
	Data: 08/11/2023
	Atualização: --
================================================================================================== */

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[]) {


    float num1=0,
	num2=0;
					
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
																
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	
	printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2); 		/* soma */
	printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);		/* subtração */
	printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);		/* multipicação */
	printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);		/* divisão */ 


    system("PAUSE");								/* Faz uma parada na execução do programa */
		
    return 0;                                                                   /* Retorna '0' se tudo ocorrer bem na execução */
}
