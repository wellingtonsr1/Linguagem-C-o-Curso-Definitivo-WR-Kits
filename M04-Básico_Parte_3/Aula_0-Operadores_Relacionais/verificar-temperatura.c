/* =================================================================================================
	Módulo 4, Parte 3
	Aula 0
	Descrição: verifica a temperatura
	Autor: Wellington
	Data: 09/11/2023
	Atualização: --
================================================================================================== */


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[]) {

	float temperatura;
	
    printf("----------------------------------------------\n");	        /* Cabeçaalho */
    printf("		Verifica a temperatura				  \n");
    printf("----------------------------------------------\n");	
    
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);
    
    if(temperatura >= 50)
    	printf("Alerta, temperatura elevada.\n");
    else
    	printf("Temperatura normal.\n");
    	
    	
    printf("----------------------------------------------\n");	        /* Rodapé */
    
	system("PAUSE"); 				        							/* Faz uma parada na execução do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
