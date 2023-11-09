/* =================================================================================================
	Módulo 4, Parte 3
	Aula 0
	Descrição: Exercício 3 (salário)
	Autor: Wellington
	Data: 09/11/2023
	Atualização: --
================================================================================================== */

/*
	Desenvolva um programa em C que adicione o bonus de 10% ao salario de um vendedor, caso suas vendas ultrapassem R$10000,00 no mes.
	Se as vendas ultrapassarem R$20000,00, adicione 15% ao salario. Se o vendedor vender para R$30000,00 ou mais, adicione 25% ao salario.
	Exemplo: Salario R$4000,00
	Vendas igual ou abaixo de 10MIL: Salario de R$4000,00
	Vendas acima de 10MIL: Salario R$4400,00
	Vendas acima de 20MIL: Salario R$4600,00
	Vendas igual ou acima de 30MIL: Salario de 5000,00
*/



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[]) {

	float salario=0.0,
		  vendas=0.0;
		  
    printf("----------------------------------------------\n");	        /* Cabeçaalho */
    printf("         Calcula bonus salario                \n");
    printf("----------------------------------------------\n");	
    
    printf("Informe o salario R$: ");
    scanf("%f", &salario);
    
	printf("Informe o valor em vendas R$: ");
    scanf("%f", &vendas);
    
    if(vendas > 10000.00) 
    	salario = salario*1.10;
	else if(vendas > 20000.00) 
		salario = salario*1.15;
	else if(vendas > 30000.00) 
		salario = salario*1.25;
	
	printf("Salario: %.2f\n", salario);
	
	
    printf("----------------------------------------------\n");	        /* Rodapé */
    
	system("PAUSE"); 				        							/* Faz uma parada na execução do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
