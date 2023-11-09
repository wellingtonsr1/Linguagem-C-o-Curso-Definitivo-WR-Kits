#include <stdio.h>

int main () {

    int soma, num ;
    float media ;

    soma = 100 ;
    num  = 40 ;

    media = soma / num ;            // errado, perda de precisão
    printf("%.2f\n", media);
    
    media = 1.0 * soma / num ;      // soma é "promovida" a float
    printf("%.2f\n", media);
    
    media = (float) soma / num ;    // soma é avaliada como float (casting)
    printf("%.2f\n", media);
    
    media = soma / (float) num ;    // num é avaliado como float (casting)
    printf("%.2f\n", media);

    return 0;
}
