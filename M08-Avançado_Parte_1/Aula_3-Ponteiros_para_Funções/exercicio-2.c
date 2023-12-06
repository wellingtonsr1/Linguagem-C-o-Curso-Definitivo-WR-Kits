/* =================================================================================================
	M�dulo 8
	Aula 3
	Descri��o: Exerc�cio 2
	Autor: Wellington
	Data: 06/12/2023
	Atualiza��o: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int disp_numbers(int n);

/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_ALL, "Portuguese_Brazil");  

    int val = 5;
	
    printf("----------------------------------------------\n");	                     
    printf("%25s\n", "Exercicio 2");   
    printf("----------------------------------------------\n");	
    
    disp_numbers(val);
    
    putchar('\n');
    printf("----------------------------------------------\n");  
	

    system("PAUSE");               							         /* Faz uma parada na execu��o do programa */ 
		
    return 0;		        							             /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */



int disp_numbers(int n)
{	
	static int cnt=1;
	if(n == 0) 
		return 0;
	else
	{
		printf("%d ", cnt);
		cnt++;
		disp_numbers(n - 1);

	} /* end else */
	return 0;

} /* end disp_numbers */

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




