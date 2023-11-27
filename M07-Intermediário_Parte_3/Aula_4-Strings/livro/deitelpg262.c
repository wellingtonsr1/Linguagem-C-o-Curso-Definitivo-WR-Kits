/* Tratando arrays de caracteres como strings */

/*=================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*=================================================================*/
/* ----- Constantes ----- */

#define TAMANHO 7

/*=================================================================*/
/* ----- Protótipo das funções ----- */


/*=================================================================*/
/* ----- Função principal ----- */

int main()
{
    char string1[20], string2[] = "string literal";
    register int i;

    printf("Entre com uma string: ");
    scanf("%s", string1);

    printf("String1 eh %s\nString2 eh %s\n" "String1 com espacos entre caracteres eh:\n", string1, string2);

    for(i = 0; i < string1[i] != '\0'; i++)
        printf("%c", string1[i]);

    putchar('\n');


    return 0;

} /* end main */


/*=================================================================*/
/* ----- Desenvolvimento das funções ----- */


/*=================================================================*/
/* ----- Fim do programa ----- */
