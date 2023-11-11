/* =================================================================================================
	Módulo 4, Parte 3
	Aula 0
	Descrição: operadores relacionais (programa salário)
	Autor: Wellington
	Data: 09/11/2023
	Atualização: --
================================================================================================== */


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[]) 
{

    printf("----------------------------------------------\n");	        /* Cabeçalho */
    printf("		Programa salario         			  \n");
    printf("----------------------------------------------\n");	
    
    float salario, vendas, sal_10;
    	  
    printf("Informe o salario R$: ");
    scanf("%f", &salario);
    
	printf("Informe o valor em vendas R$: ");
    scanf("%f", &vendas);
    
    sal_10 = (salario / 100.0*10.0);
    
    if(vendas > 10000.0)
    	salario = salario + sal_10;
    
    if(vendas > 20000.0)
    	salario = salario + sal_10;
    	
    printf("O salario foi de R$: %.2f\n", salario);
    
    
    printf("----------------------------------------------\n");	        /* Rodapé */
    
	system("PAUSE"); 				        							/* Faz uma parada na execução do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
