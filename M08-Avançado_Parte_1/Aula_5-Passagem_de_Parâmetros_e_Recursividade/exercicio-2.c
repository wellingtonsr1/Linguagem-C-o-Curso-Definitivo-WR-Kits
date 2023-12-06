/* =================================================================================================
	M�dulo 8
	Aula 5
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
    #if _WIN32 
		setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif		

    int val = 5;
	
    printf("----------------------------------------------\n");	                     
    printf("%25s\n", "Exercicio 2");   
    printf("----------------------------------------------\n");	
    
    disp_numbers(val);
    
    putchar('\n');
    printf("----------------------------------------------\n");  
	
    #if _WIN32
    	system("PAUSE"); 
    #endif              							         /* Faz uma parada na execu��o do programa */ 
		
    return 0;		        							                 /* Retorna '0' se tudo ocorrer bem na execu��o */
	
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
