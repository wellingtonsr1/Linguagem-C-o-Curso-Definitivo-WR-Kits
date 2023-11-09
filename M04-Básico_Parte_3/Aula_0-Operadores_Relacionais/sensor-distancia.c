/* =================================================================================================
	M�dulo 4, Parte 3
	Aula 0
	Descri��o: sensor dist�ncia
	Autor: Wellington
	Data: 09/11/2023
	Atualiza��o: --
================================================================================================== */


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[]) {

	int distancia,														/* Declara��o de vari�veis */
		temp=0;
		
    printf("----------------------------------------------\n");	        /* Cabe�aalho */
    printf("	Sensor de distancia					      \n");
    printf("----------------------------------------------\n");	
    
    printf("Entre com a temperatura em cm: ");							/* Entrada de dados */
    scanf("%d", &distancia);
    
    if(distancia <= 25) {												/* Faz verifica��es */
    	printf("Robo desvia de obstaculo.\n");
    	temp = distancia;
	}
	
	if(temp != 0)														/* Faz verifica��es */
		printf("O robo detectou na distancia de = %d cm\n", temp);
	else
		printf("O robo nao detectou obstaculos.\n");
		
	
    printf("----------------------------------------------\n");	        /* Rodap� */
    
	system("PAUSE"); 				        							/* Faz uma parada na execu��o do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
