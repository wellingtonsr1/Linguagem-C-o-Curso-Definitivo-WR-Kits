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
	int perc=0;
		  
    printf("----------------------------------------------\n");	        				/* Cabeçaalho */
    printf("         Calcula bonus salario                \n");
    printf("----------------------------------------------\n");	
    
    printf("Informe o salario R$: ");													/* Entrada de dados */
    scanf("%f", &salario);
    
	printf("Informe o valor em vendas R$: ");											/* Entrada de dados */
    scanf("%f", &vendas);
    
	if(vendas > 10000.00) {
		salario = salario*1.10;
		perc = 10;
		
		if(vendas > 20000.00) {
			salario = salario*1.15;
			perc = 15;
			
			if(vendas > 30000.00) {																/* Faz verificações */
    			salario = salario*1.25;
    			perc = 25;
    		}
		}
	}
	
	if(perc != 0)
		printf("O salario com acrescimo de %d % : %.2f\n", perc, salario);				/* Exibe o resultado */
	else
		printf("O salario sem acrescimo: %.2f\n", salario);
		
		
	
    printf("----------------------------------------------\n");	        				/* Rodapé */
    
	system("PAUSE"); 				        											/* Faz uma parada na execução do programa */
		
	return 0;																			/* Retorna '0' se tudo ocorrer bem na execução */

	
}  /* end main */
