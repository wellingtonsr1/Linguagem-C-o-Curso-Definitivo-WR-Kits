/* =================================================================================================
	M�dulo 2, Aula 4
	----------------
	
	Descri��o: Vari�veis
	Autor: Wellington
	Data: 07/11/2023
	Atualiza��o: --
	
================================================================================================== */


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[]) {
	
	int var1 = 11, 								/* Declara��o das vari�veis */
		var2 = 15, 
		var3 = 5, 
		teste_2 = 9,
		a = 2,
		b = 3,
		c;											
	
	c = a + b;								/* Soma os valores das vari�veis 'a' e 'b' e armazena o resultado na vari�vel 'c' */
	
	printf("var1= %d\n", var1);						/* Exibe o valor da vari�vel 'var1' */
	printf("var2= %d\n", var2);						/* Exibe o valor da vari�vel 'var2' */
	printf("var3= %d\n", var3);						/* Exibe o valor da vari�vel 'var3' */
	
	printf("%d\n", teste_2);						/* Exibe o valor da vari�vel 'teste_2' */
	
	printf("%d\n", c);							/* Exibe o valor da vari�vel 'c' */
	system("PAUSE");							/* Faz uma pausa na execu��o do programa */
		
	return 0;								/* Retorna '0' se tudo  ocorrer bem na execu��o */
	
}  /* end main */

