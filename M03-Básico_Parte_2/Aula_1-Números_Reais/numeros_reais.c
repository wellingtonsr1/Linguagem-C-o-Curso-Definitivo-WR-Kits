/* =================================================================================================
	M�dulo 3, Parte 2
	Aula 1
	Descri��o: N�meros reais
	Autor: Wellington
	Data: 08/11/2023
	Atualiza��o: --
================================================================================================== */

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[]) {
	
	float pi=3.14592,
		  raio=0.0,
		  altura=0.0,
		  volume=0.0;
			
	printf("Digite o raio do cilindro em metros: ");
	scanf("%f", &raio);
																
	printf("Digite a altura do cilindro em metros: ");
	scanf("%f", &altura);
	
	volume = pi * (raio * raio) * altura;
	
	printf("O volume do cilindro eh %.2f\n", volume);	
	
	
	system("PAUSE");					/* Faz uma parada na execu��o do programa */
		
	return 0;							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */



