/* =================================================================================================
	M�dulo 6
	Aula 2
	Descri��o: 
	Autor: Wellington
	Data: 14/11/2023
	Atualiza��o: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* ----- Prot�tipo das fun��es ----- */
unsigned conversor_ad(int valor);


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_ALL, "Portuguese_Brazil"); 

	unsigned int valor;                                                                 /* Declara��o de vari�veis */
	
	while(1)
	{
	
    	printf("----------------------------------------------\n");	                    /* Cabe�aalho */
    	printf("             Conversor AD                     \n");   
    	printf("----------------------------------------------\n");	
    
    	printf("Entre com um valor de 0 a 1023: ");                                     /* Entrada de dados */
    	scanf("%d", &valor);
    	
    	if(valor < 0 || valor > 1023)
    	{
    		printf("\n - Valor fora da faxia de 0 a 1023.\n");                          /* Mensagem caso seja informado um valor fora da faixa */                    
    		
    	} /* end if */
    	else
    	{
    		printf("\n - O valor %d convertido � %d\n", valor, conversor_ad(valor));       /* Exibe o restultado */
    		
		} /* end else */
		
    	printf("----------------------------------------------\n");         	         /* Rodap� */
    
	} /* end while */
	
    system("PAUSE");               							                             /* Faz uma parada na execu��o do programa */
		
    return 0;		        							                                 /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


/* ----- Desenvolvimneto das fun��es ----- */

unsigned conversor_ad(int valor)
{
	int resultado;
	resultado = (valor * 256) / 1024;
	
	return resultado;
	
} /* end conversor_ad */
