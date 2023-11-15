/* =================================================================================================
	Módulo 
	Aula 
	Descrição: 
	Autor: Wellington
	Data: 
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* ----- Macros ----- */
#define calc(op) ((num1) op (num2))
void printBinary(int short number);

/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 

    short int number;

    printf("Entre com o numero: ");
    scanf("%hd", &number);

    
    printBinary(number);

// 00000000000000000000000010000001 =  129
// 11111111111111111111111110000001 = -127

// unsigned => 00000000000000000000000010000001

/*
    float num1, num2;                                                                       
    printf("----------------------------------------------\n");	                            
    printf("           Calculadora com macros             \n");   
    printf("----------------------------------------------\n");	
    
    printf("Digite dois numeros para somar: ");                                             
    scanf("%f %f", &num1, &num2);
    printf("\n - A soma de %.2f e %.2f          = %.2f\n", num1, num2, calc(+)); 
    
    printf("\nDigite dois numeros para subtrair: ");
    scanf("%f %f", &num1, &num2);
    printf("\n - A subtracao de %.2f e %.2f     = %.2f\n", num1, num2, calc(-)); 
    
    printf("\nDigite dois numeros para multiplicar: ");
    scanf("%f %f", &num1, &num2);
    printf("\n - A multiplicacao de %.2f e %.2f = %.2f\n", num1, num2, calc(*)); 
    
    printf("\nDigite dois numeros para dividir: ");
    scanf("%f %f", &num1, &num2);
    if(num2)
        printf("\n - A divisao de %.2f e %.2f       = %.2f\n", num1, num2, calc(/)); 
    else
        printf("\n - Erro: Nao e possivel divisao por zero!\n"); 
            
    
    printf("----------------------------------------------\n");         	            
*/  
    
    /* system("PAUSE"); */              						    /* Faz uma parada na execução do programa */
		
    return 0;		        							    /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */

void printBinary(short int number) {
    printf("O número %hd em binário é: ", number);

    // Loop para percorrer cada bit do número
    for (int i = sizeof(short int) * 8 - 1; i >= 0; i--) {
        // Use máscara para verificar se o bit é 1 ou 0
        int bit = (number >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");
}

/*

https://www.ime.usp.br/~leo/mac2166/2017-1/introducao_inteiros.html

 1 1 1 1 1 +      1 1 1 1 1
16 8 4 2 1(31) + 16 8 4 2 1(31) => 62


    ---------------    
int |1|     15    |
    ---------------
    +/-
 (0 ou 1)

  0      1     1    1     1    1    1    1   1   1   1   1   1   1   1   1
 2^15   2^14  2^13 2^12  2^11 2^10 2^9  2^8 2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0
32.768 16.384 8192 4096  2048 1024 512  256 128  64  32  16  8   4   2   1


  1      1     1    1     1    1    1    1   1   1   1   1   1   1   1   1
 2^15   2^14  2^13 2^12  2^11 2^10 2^9  2^8 2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0
32.768 16.384 8192 4096  2048 1024 512  256 128  64  32  16  8   4   2   1



 0  1   1   1

(+) 4 + 2 + 1 = 7







*/
