/* Programa para imprimir histograma */

/*=================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <string.h>

/*=================================================================*/
/* ----- Constantes ----- */

#define TAMANHO 10

/*=================================================================*/
/* ----- Protótipo das funções ----- */


/*=================================================================*/
/* ----- Função principal ----- */

int main()
{

    int n[TAMANHO] = {9, 8, 7, 10, 5, 1, 3, 4, 8, 5} ;
    register int i, j;

    putchar('\n');

    printf("%s%13s%17s\n", "Elemento", "Valor", "Histograma");
    for(i=0; i <= TAMANHO - 1; i++)
    {
        printf("%8d%13d       ", i, n[i]);
    
        for(j=0; j < n[i]; j++)
            printf("%c", '*');
        putchar('\n');
    } /* end for external */


    return 0;

} /* end main */


/*=================================================================*/
/* ----- Desenvolvimento das funções ----- */


/*=================================================================*/
/* ----- Fim do programa ----- */
