/* =================================================================================================
	M�dulo 4, Parte 3
	Aula 0
	Descri��o: operadores relacionais (programa sal�rio)
	Autor: Wellington
	Data: 09/11/2023
	Atualiza��o: --
================================================================================================== */


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[]) 
{

    printf("----------------------------------------------\n");	        /* Cabe�alho */
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
    
    
    printf("----------------------------------------------\n");	        /* Rodap� */
    
	system("PAUSE"); 				        							/* Faz uma parada na execu��o do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
