/* Os arrays static sao inicializados com zeros */

/*=================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*=================================================================*/
/* ----- Constantes ----- */


/*=================================================================*/
/* ----- Protótipo das funções ----- */

void static_array_init();
void automatic_array_init();

/*=================================================================*/
/* ----- Função principal ----- */

int main()
{
    puts("-----------------------------------------------");
    puts("Primeira chamada de cada funcao: ");
    static_array_init();
    automatic_array_init();

    putchar('\n');

    puts("-----------------------------------------------");
    puts("Segunda chamada de cada funcao: ");
    static_array_init();
    automatic_array_init();
    

    return 0;

} /* end main */


/*=================================================================*/
/* ----- Desenvolvimento das funções ----- */

void static_array_init()
{
    static int a[3];
    register int i;

    putchar('\n');

    puts("Valores de static_array_init ao entrar: ");
    for(i = 0; i < 3; i++)
        printf("array1[%d] = %d ", i, a[i]);

    putchar('\n');

    puts("Valores de static_array_init ao sair");
    for(i = 0; i < 3; i++)
        printf("array1[%d] = %d ", i, a[i] += 5);

    putchar('\n');

} /* end static_array_init */

void automatic_array_init()
{
    int a[3] = {1, 2, 3};
    register int i;

    putchar('\n');

    puts("Valores de automatic_array_init ao entrar: ");
    for(i = 0; i < 3; i++)
        printf("array1[%d] = %d ", i, a[i]);
    
    putchar('\n');

    puts("Valores de automatic_array_init ao sair");
    for(i = 0; i < 3; i++)
        printf("array1[%d] = %d ", i, a[i] += 5);


    putchar('\n');

} /* end automatic_array_init */



/*=================================================================*/
/* ----- Fim do programa ----- */















