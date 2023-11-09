/* =================================================================================================
	Módulo 4, Parte 3
	Aula 0
	Descrição: sensor distância
	Autor: Wellington
	Data: 09/11/2023
	Atualização: --
================================================================================================== */


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[]) {

	int distancia,														/* Declaração de variáveis */
		temp=0;
		
    printf("----------------------------------------------\n");	        /* Cabeçaalho */
    printf("	Sensor de distancia					      \n");
    printf("----------------------------------------------\n");	
    
    printf("Entre com a temperatura em cm: ");							/* Entrada de dados */
    scanf("%d", &distancia);
    
    if(distancia <= 25) {												/* Faz verificações */
    	printf("Robo desvia de obstaculo.\n");
    	temp = distancia;
	}
	
	if(temp != 0)														/* Faz verificações */
		printf("O robo detectou na distancia de = %d cm\n", temp);
	else
		printf("O robo nao detectou obstaculos.\n");
		
	
    printf("----------------------------------------------\n");	        /* Rodapé */
    
	system("PAUSE"); 				        							/* Faz uma parada na execução do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
