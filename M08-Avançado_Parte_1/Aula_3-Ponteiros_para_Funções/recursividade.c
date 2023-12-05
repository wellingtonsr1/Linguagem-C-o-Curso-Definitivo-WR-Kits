/* =================================================================================================
	M�dulo 
	Aula 
	Descri��o: 
	Autor: Wellington
	Data: 
	Atualiza��o: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int rec(int n);

/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_ALL, "Portuguese");  

	int val = 4;
	
    printf("----------------------------------------------\n");	                     
    printf("%35s\n", "fatorial (Recursividade)");   
    printf("----------------------------------------------\n");	
    
    printf("O fatorial de %d �: %d\n", val, fatorial(val));  
    
    printf("----------------------------------------------\n");  
	

    system("PAUSE");               							         /* Faz uma parada na execu��o do programa */
		
    return 0;		        							             /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */



int fatorial(int n)
{	
	return (n <= 1) ? 1 : n * fatorial(n - 1);
	
} /* end fatorial */

/*

n = 5


n <= 1 ? se sim, return 1, sen�o...n * fatorial(n - 1);

Passo 1
5 <= 1 ? se sim, return 1, sen�o...
5 * fatorial(5 - 1)

Passo 2
4 <= 1 ? se sim, return 1, sen�o...
4 * fatorial(4 - 1)

Passo 3
3 <= 1 ? se sim, return 1, sen�o...
3 * fatorial(3 - 1)

Passo 4
2 <= 1 ? se sim, return 1, sen�o...
2 * fatorial(2 - 1)

Passo 5
1 <= 1 ? se sim, return 1, sen�o...
1 


retornando...

n * fatorial(n - 1);

Passo 5
2 * 1 = 2

Passo 4
3 * 2 = 6

Passo 3
4 * 6 = 24

Passo 2
5 * 24 = 120

Passo 1

retorna 120 pra quem chamou fatorial.


*/




