/* =================================================================================================
	M�dulo 4, Parte 3
	Aula 0
	Descri��o: verifica a temperatura
	Autor: Wellington
	Data: 09/11/2023
	Atualiza��o: --
================================================================================================== */


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[]) {

	float temperatura;
	
    printf("----------------------------------------------\n");	        /* Cabe�aalho */
    printf("		Verifica a temperatura				  \n");
    printf("----------------------------------------------\n");	
    
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);
    
    if(temperatura >= 50)
    	printf("Alerta, temperatura elevada.\n");
    else
    	printf("Temperatura normal.\n");
    	
    	
    printf("----------------------------------------------\n");	        /* Rodap� */
    
	system("PAUSE"); 				        							/* Faz uma parada na execu��o do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
