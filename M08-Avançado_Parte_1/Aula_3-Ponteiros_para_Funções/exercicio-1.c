/* =================================================================================================
	Módulo 8
	Aula 3
	Descrição: Exercício 1
	Autor: Wellington
	Data: 05/12/2023
	Atualização: --
================================================================================================== */

/*

Exercício proposto: escreva um programa que você digite ohm seguido dos parâmetros
de tensão e corrente, e seja calculado o valor da resistência, lembrando que
R = V / I

Exemplo: você digita ohm 12 1 15 2 5 0.001
E o resultado será impresso no seguinte formato
Resistores: 12.0 | 7.5 | 5000.0 | Ohms.
Dica: utilize a função atof() para converter string para double.

*/


/* ================================================================================================= */
/* ----- Bibliotecas ----- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* ================================================================================================= */
/* ----- Protótipo das funções ----- */

/* ================================================================================================= */
/* ----- Função Principal ----- */
int main(int argc, char *argv[])
{
    setlocale(LC_CTYPE, "Portuguese");

    register int i, j;
	
    printf("----------------------------------------------\n");	                        /* Cabeçaalho */
    printf("%25s\n", "Exercicio 1");   
    printf("----------------------------------------------\n");	
    
    printf(" Resistores: ");
    for(i=2; i < argc; i+=2)
    {
        printf("%.2f", atof(argv[i]) / atof(argv[i+1]));
        if(i >= 2 && i < argc - 2) printf(" | ");

    } /* end for */

    printf(" Ohms\n");

    printf("----------------------------------------------\n");         	        /* Rodapé */
    
    system("PAUSE");

    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/* ================================================================================================= */
/* ----- Desenvolvimento das funções ----- */


/* ================================================================================================= */
/* ----- Fim do programa ----- */



