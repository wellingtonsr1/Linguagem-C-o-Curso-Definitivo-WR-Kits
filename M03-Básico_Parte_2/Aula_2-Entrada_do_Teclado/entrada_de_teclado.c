/* =================================================================================================
	M�dulo 3, Parte 2
	Aula 2
	Descri��o: entrada de teclado
	Autor: Wellington
	Data: 08/11/2023
	Atualiza��o: --
================================================================================================== */

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[]) {
	
	/*
		char caracter;
		
		printf("Digite um caracter: ");
		scanf("%c", &caracter);
		
		printf("O caracter digitado foi: %c\n", caracter);
	*/
	
	/*
		char caracter1, caracter2;
			
		printf("Digite um caracter: ");
		scanf("%c", &caracter1);
			
		printf("Digite outro caracter: ");
		scanf(" %c", &caracter2); 															/* Foi colocado um espa�o antes do '%c' para solucionar o problema do buffer 
			
		printf("Os caracteres digitados foram: %c e %c\n", caracter1, caracter2);
	*/
	
	/*
		int num1=0,
			num2=0, 
			soma=0;
				
		printf("Digite o primeiro numero: ");
		scanf("%d", &num1);
			
		printf("Digite o segundo numero: ");
		scanf(" %d", &num2); 														
		
		soma = num1 + num2;
		
		printf("A soma entre %d e %d eh: %d\n", num1, num2, soma);
	*/
	
	/*
		int num1=0,
			num2=0, 
			soma=0;
				
		printf("Digite dois numeros inteiros: ");
		scanf("%d%d", &num1, &num2);
																	
		
		soma = num1 + num2;
		
		printf("A soma entre %d e %d eh: %d\n", num1, num2, soma);
	*/
	
	
	/* -------- Exerc�cios propostos --------*/
	
	/* calculadora */
	
	/*
		float num1=0,
			  num2=0;
					
		printf("Digite o primeiro numero: ");
		scanf("%f", &num1);
																	
		printf("Digite o segundo numero: ");
		scanf("%f", &num2);
		
		
		printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2); 							 soma 
		printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);							 subtra��o 
		printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);							 multipica��o 
		printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);							 divis�o 
	*/
	
	/* conversor de temperatura */
	float tf,
		  tc;
	
	printf("Digite a temperatura em celsius: ");
	scanf("%f", &tc);
	
	tf = (1.8 * tc) + 32;
	
	printf("%.2f C = %.2f F\n", tc, tf);


	system("PAUSE");																	/* Faz uma parada na execu��o do programa */
		
	return 0;																			/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */



