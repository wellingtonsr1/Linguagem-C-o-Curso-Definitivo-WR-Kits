#include <stdio.h>
#include <stdlib.h>


int main()
{
    char b[5] = {'a', 'b', 'c', 'd', 'e'};
    char *b_ptr = b;

    printf("%c", *(b_ptr + 3));
    putchar('\n');
    while(*b_ptr)
    {
        printf("addr: %d ch: %c \n", b_ptr, *b_ptr); 
        b_ptr++;
    }
    return 0;
}

