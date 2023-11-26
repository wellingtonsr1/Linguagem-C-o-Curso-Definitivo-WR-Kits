#include <stdio.h>
#include <stdlib.h>

#define num 10

void inic(int vet[], int N);

int main()
{

    int vet[num];
    register int i;

    inic(vet, num);    

    for(i=0; i < num; i++)
        printf("%d ", vet[i]);


    return 0;

} /* end main */

void inic(int v[], int N)
{
    register int i;
    for(i=0; i < N; i++)
        v[i] = 2 * i;

} /* end inic */
