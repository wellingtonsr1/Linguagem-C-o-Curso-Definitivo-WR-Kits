/* Inicializa os elementos do array com os inteiros pares de 2 a 20 */

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

    int n[TAMANHO];
    register int i;

    for(i=0; i < 9; i++)
        n[i] = i * 2 + 2; 
    
    putchar('\n');

    printf("%s%13s\n", "Elemento", "Valor");
    for(i=0; i < 9; i++)
        printf("%5d%14d\n", i, n[i]);

    return 0;

} /* end main */


/*=================================================================*/
/* ----- Desenvolvimento das funções ----- */


/*=================================================================*/
/* ----- Fim do programa ----- */
