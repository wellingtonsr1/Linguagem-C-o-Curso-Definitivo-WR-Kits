/* =================================================================================================
	Módulo 6
	Aula 2
	Descrição: 
	Autor: Wellington
	Data: 14/11/2023
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* ----- Protótipo das funções ----- */
unsigned conversor_ad(int valor);


/* Função Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_ALL, "Portuguese_Brazil"); 

	unsigned int valor;                                                                 /* Declaração de variáveis */
	
	while(1)
	{
	
    	printf("----------------------------------------------\n");	                    /* Cabeçaalho */
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
    		printf("\n - O valor %d convertido é %d\n", valor, conversor_ad(valor));       /* Exibe o restultado */
    		
		} /* end else */
		
    	printf("----------------------------------------------\n");         	         /* Rodapé */
    
	} /* end while */
	
    system("PAUSE");               							                             /* Faz uma parada na execução do programa */
		
    return 0;		        							                                 /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/* ----- Desenvolvimneto das funções ----- */

unsigned conversor_ad(int valor)
{
	int resultado;
	resultado = (valor * 256) / 1024;
	
	return resultado;
	
} /* end conversor_ad */
