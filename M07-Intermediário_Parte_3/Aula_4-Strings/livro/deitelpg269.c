/* Demonstrando o qualificador do tipo const */

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

void tenta_modificar_const(const int []);



/*=================================================================*/
/* ----- Função principal ----- */

int main()
{
    int a[10] = {10, 20, 30};

    tenta_modificar_const(a);
    printf("%d %d %d\n", a[0], a[1], a[2]);
    
    return 0;

} /* end main */


/*=================================================================*/
/* ----- Desenvolvimento das funções ----- */

void tenta_modificar_array(const int b[])
{
    b[0] /= 2; /* erro */ 
    b[1] /= 2; /* erro */
    b[2] /= 2; /* erro */

} /* end tenta_modificar_array */


/*=================================================================*/
/* ----- Fim do programa ----- */















