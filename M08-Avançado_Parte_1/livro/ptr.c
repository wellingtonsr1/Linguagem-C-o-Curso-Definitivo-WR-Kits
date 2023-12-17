#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str(char *); 

int main()
{
    char a[10] = "Teste", *ptr_a = a;

    //printf("ptr_a %ld\n", ptr_a);
    //printf("ptr_b %ld\n", ptr_b);

    
    printf("%d\n", str(a));

    return 0;
}
int str(char *a)
{
    char *ptr_a = a;

    while(*a)
        a++;

    
    return (int) (a - ptr_a);   
}






