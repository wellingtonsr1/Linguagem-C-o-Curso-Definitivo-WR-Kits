#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char s[3][20] = {"Teste 1", "Teste 2", "Teste 3"}, c;
    char (*ptr) [20] = s;
    
    char *p;

    while(ptr - s < 3)
    {
        p = *ptr;
        while(*p)
            putchar(*p++);
        putchar('\n');
        ptr++;
    }

    return 0;
}

