/* =================================================================================================
	M�dulo 8
	Aula 3
	Descri��o: Exerc�cio 1
	Autor: Wellington
	Data: 05/12/2023
	Atualiza��o: --
================================================================================================== */

/*

Exerc�cio proposto: escreva um programa que voc� digite ohm seguido dos par�metros
de tens�o e corrente, e seja calculado o valor da resist�ncia, lembrando que
R = V / I

Exemplo: voc� digita ohm 12 1 15 2 5 0.001
E o resultado ser� impresso no seguinte formato
Resistores: 12.0 | 7.5 | 5000.0 | Ohms.
Dica: utilize a fun��o atof() para converter string para double.

*/


/* ================================================================================================= */
/* ----- Bibliotecas ----- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* ================================================================================================= */
/* ----- Prot�tipo das fun��es ----- */

/* ================================================================================================= */
/* ----- Fun��o Principal ----- */
int main(int argc, char *argv[])
{
    setlocale(LC_CTYPE, "Portuguese");

    register int i, j;
	
    printf("----------------------------------------------\n");	                        /* Cabe�aalho */
    printf("%25s\n", "Exercicio 1");   
    printf("----------------------------------------------\n");	
    
    printf(" Resistores: ");
    for(i=2; i < argc; i+=2)
    {
        printf("%.2f", atof(argv[i]) / atof(argv[i+1]));
        if(i >= 2 && i < argc - 2) printf(" | ");

    } /* end for */

    printf(" Ohms\n");

    printf("----------------------------------------------\n");         	        /* Rodap� */
    
    system("PAUSE");

    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


/* ================================================================================================= */
/* ----- Desenvolvimento das fun��es ----- */


/* ================================================================================================= */
/* ----- Fim do programa ----- */



