/* =================================================================================================
	Módulo 3, Parte 2
	Aula 2
	Descrição: Exercício (conersor de temperatura) - entrada de teclado
	Autor: Wellington
	Data: 08/11/2023
	Atualização: --
================================================================================================== */

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[]) {


    float tf,
	  tc;
	
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &tc);
	
    tf = (1.8 * tc) + 32;
	
    printf("%.2f C = %.2f F\n", tc, tf);



    system("PAUSE");							/* Faz uma parada na execução do programa */
		
    return 0;								/* Retorna '0' se tudo ocorrer bem na execução */

}
