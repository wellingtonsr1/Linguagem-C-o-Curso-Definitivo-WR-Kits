#include <stdio.h>

#define num 49

int main()
{

    int vet[num] = {0};
    register int i, count=0;

    for(i=0; i < num; i++)
    {
        printf("%d", vet[i]);
        if((i+1) % 7 == 0) putchar('\n');
    }

    return 0;
}
