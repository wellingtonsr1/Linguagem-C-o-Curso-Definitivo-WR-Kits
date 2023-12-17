#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, offset, b[] = {10, 20, 30, 40};
    int *b_ptr = b;

    puts("----------------------------------------------------------------------");
    
    putchar('\n');
    
    printf("\nArray b impresso com notação de subscrito de array\n");
    puts("--------------------------------------------------");
    for(i=0; i <= 3; i++)
        printf(" b[%d] = %d\n", i, b[i]);

    printf("\nNotação ponteiros/offset em que o ponteiro é o nome de array\n");
    puts("------------------------------------------------------------");
    for(offset=0; offset <= 3; offset++)
        printf(" *(b + %d) = %d\n", offset, *(b + offset));

    printf("\nNotação de subscrito de ponteiro\n");
    puts("--------------------------------");
    for(i=0; i <= 3; i++)
        printf(" b_ptr[%d] = %d\n", i, b_ptr[i]);

    printf("\nNotação ponteiro/offset\n");
    puts("-----------------------");
    for(offset=0; offset <= 3; offset++)
        printf(" *(b_ptr + %d) = %d\n", offset, *(b_ptr + offset));
    
    putchar('\n');

    puts("----------------------------------------------------------------------");
    return 0;
}

