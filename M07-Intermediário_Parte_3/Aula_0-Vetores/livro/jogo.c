#include <stdio.h>
#include <stdlib.h>

#define num 3

void inic(char v[num][num], int N);

int main()
{
    register int i, j;
    char velha[num][num] = {{'0', 'x', '0'}, {'x', '0', '0'}, {'0', '0', 'x'}};

    /* inic(velha, num); */
    
    putchar('\n');
    
    for(i=0; i < num; i++)
    {
        for(j=0; j < num; j++)
        {
            printf(" %c", velha[i][j]);
            if(j < num - 1) printf(" |");
            if(i < num - 1 && j == num - 1) printf("\n ---------");
        }
        putchar('\n');
    }

    return 0;

} /* end main */

void inic(char v[num][num], int N)
{
    register int i, j;

    for(i=0; i < N; i++)
        for(j=0; j < N; j++)
            v[i][j] = 'x';
        putchar('\n');

} /* end inic */












