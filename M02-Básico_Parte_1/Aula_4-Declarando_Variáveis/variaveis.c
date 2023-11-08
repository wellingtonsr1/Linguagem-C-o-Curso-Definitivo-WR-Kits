/* =================================================================================================
	Módulo 2, Aula 4
	----------------
	
	Descrição: Variáveis
	Autor: Wellington
	Data: 07/11/2023
	Atualização: --
	
================================================================================================== */


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[]) {
	
	int var1 = 11, 								/* Declaração das variáveis */
		var2 = 15, 
		var3 = 5, 
		teste_2 = 9,
		a = 2,
		b = 3,
		c;											
	
	c = a + b;								/* Soma os valores das variáveis 'a' e 'b' e armazena o resultado na variável 'c' */
	
	printf("var1= %d\n", var1);						/* Exibe o valor da variável 'var1' */
	printf("var2= %d\n", var2);						/* Exibe o valor da variável 'var2' */
	printf("var3= %d\n", var3);						/* Exibe o valor da variável 'var3' */
	
	printf("%d\n", teste_2);						/* Exibe o valor da variável 'teste_2' */
	
	printf("%d\n", c);							/* Exibe o valor da variável 'c' */
	system("PAUSE");							/* Faz uma pausa na execução do programa */
		
	return 0;								/* Retorna '0' se tudo  ocorrer bem na execução */
	
}  /* end main */

