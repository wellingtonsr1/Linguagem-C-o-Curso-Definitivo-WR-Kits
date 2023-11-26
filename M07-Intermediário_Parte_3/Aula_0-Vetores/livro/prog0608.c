#include <stdio.h>

const int n=10;

int main()
{

    float vet[n];
    register int i;

    for(i=0; i < n; i++)
        vet[i] = i * (n - i);

    for(i=0; i < n; i++)
        printf("%.2f\n", vet[i]);

 
    return 0;
}
