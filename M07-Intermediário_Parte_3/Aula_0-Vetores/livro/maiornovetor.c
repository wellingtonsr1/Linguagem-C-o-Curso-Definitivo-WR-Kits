/*==========================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>


/*==========================================================*/
/* ----- Constantes ----- */

#define num 4


/*==========================================================*/
/* ----- Protótipo das funções -----*/

float max(float *v, int n);


/*==========================================================*/
/* ----- Função principal ----- */

int main()
{
    float vet[] = {93.0, 8.9, 10.9, 100.6, 98.7};
    
    printf("O maior entre os %d valores eh: %.2f\n", num, max(vet, num));
    return 0;

} /* end main */


/*==========================================================*/
/* ----- Desenvolvimento das funções ----- */

float max(float *v, int n)
{
    float maior=0.0;
    register int i;

    for(i=0; i < n; i++)
        maior = (v[i] > maior) ? v[i] : maior;
         
    return maior;

} /* end max */



/*==========================================================*/
/* ----- Fim do programa ----- */





