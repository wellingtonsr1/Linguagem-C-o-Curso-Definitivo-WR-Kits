/*==========================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>


/*==========================================================*/
/* ----- Constantes ----- */

#define num 5


/*==========================================================*/
/* ----- Protótipo das funções -----*/

float max(float *v, int n);


/*==========================================================*/
/* ----- Função principal ----- */

int main()
{
    float vet[num] = {93.0, 8.9, 100.9, 0.6, 98.7};
    
    printf("O maior eh: %.2f\n", max(vet, num));
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





