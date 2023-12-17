#include <stdlib.h>
#include <stdio.h>

int main() {
    char *naipe[4] = {"copas", "ouros", "paus", "espadas"};
int i = 0;
    while(*naipe)
    {
        printf("%s\n", *(naipe + i++));
    }

    return 0;
}

