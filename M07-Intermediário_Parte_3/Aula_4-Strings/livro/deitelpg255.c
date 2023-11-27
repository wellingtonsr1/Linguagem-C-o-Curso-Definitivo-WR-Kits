/* Calcula a soma dos elementos de um array */

/*=================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <string.h>

/*=================================================================*/
/* ----- Constantes ----- */
#define TAMANHO 12

/*=================================================================*/
/* ----- Protótipo das funções ----- */


/*=================================================================*/
/* ----- Função principal ----- */

int main()
{

    int total=0, n[TAMANHO] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37, 9, 12};
    register int i;

    for(i=0; i < TAMANHO; i++)
        total += n[i]; 
    
    putchar('\n');

    printf("A soma dos elementos do array eh %3d\n", total);

    return 0;

} /* end main */


/*=================================================================*/
/* ----- Desenvolvimento das funções ----- */


/*=================================================================*/
/* ----- Fim do programa ----- */
