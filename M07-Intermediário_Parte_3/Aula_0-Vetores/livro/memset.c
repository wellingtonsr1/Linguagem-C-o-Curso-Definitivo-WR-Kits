#include <stdio.h>
#include <string.h>

#define num 5

char * mymemset(char v[], char ch, int N);

int main()
{
    register int i;
    char v[num];

    //mymemset(v, 'A', num);

    for(i=0; i < num; i++)
        printf("%c", mymemset(v, 'p', num)[i]);


    return 0;
}

char * mymemset(char v[], char ch, int N)
{
    int i;
    for(i=0; i < N; i++)
        v[i] = ch;

       
    return v;
}










