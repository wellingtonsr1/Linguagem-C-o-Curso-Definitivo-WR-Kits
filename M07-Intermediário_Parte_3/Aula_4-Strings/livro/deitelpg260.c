/* Rolar um dado de seis faces 6000 vezes */

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
    int face, jogada, frequencia[TAMANHO] = {0};

    srand(time(NULL));

    for(jogada = 1; jogada <= 6000; jogada++)
    {
        face = rand() % 6 + 1;
        ++frequencia[face];
    }

    printf("%s%18s\n", "Face", "Frequencia");

    for(face = 1; face <= TAMANHO - 1; face++)
        printf("%4d%18d\n", face, frequencia[face]);


    return 0;

} /* end main */


/*=================================================================*/
/* ----- Desenvolvimento das funções ----- */


/*=================================================================*/
/* ----- Fim do programa ----- */
