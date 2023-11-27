/* Passando arrays e elementos isolados de arrays para funções */

/*=================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*=================================================================*/
/* ----- Constantes ----- */

#define TAMANHO 5

/*=================================================================*/
/* ----- Protótipo das funções ----- */

void modifica_array(int [], int);
void modifica_elemento(int);


/*=================================================================*/
/* ----- Função principal ----- */

int main()
{
    int a[TAMANHO] = {0, 1, 2, 3, 4};
    register int i;
    
    putchar('\n');
    
    puts("----------------------------------------------------------------------");
    puts("Efeito de passar o array inteiro por meio de chamada por referencia");
    puts("Os valores do array original sao: ");
    for(i=0; i < TAMANHO; i++)
        printf("%3d", a[i]);        
    
    putchar('\n');

    modifica_array(a, TAMANHO);

    puts("Os valores do array modificados sao: ");
    for(i=0; i < TAMANHO; i++)
        printf("%3d", a[i]);

    putchar('\n');

    puts("----------------------------------------------------------------------");
    puts("Efeitos de passar elementos do array por meio de uma chamada por valor");
    printf("O valor de a[3] eh %d\n", a[3]);


    modifica_elemento(a[3]);
    printf("O valor de a[3] eh %d\n", a[3]);


    return 0;

} /* end main */


/*=================================================================*/
/* ----- Desenvolvimento das funções ----- */

void modifica_array(int b[], int tamanho)
{
    int j;
    for(j=0; j < tamanho; j++)
        b[j] *= 2; 

} /* end modifica_array */

void modifica_elemento(int e)
{
    printf("O valor em modifica_elemento eh %d\n", e *= 2);

} /* end modifica_elemento */


/*=================================================================*/
/* ----- Fim do programa ----- */















