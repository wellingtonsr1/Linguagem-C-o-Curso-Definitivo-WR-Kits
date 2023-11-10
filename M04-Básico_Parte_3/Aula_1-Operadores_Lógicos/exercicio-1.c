/* =================================================================================================
	Módulo 4, Parte 3
	Aula 1
	Descrição: Exercício 1
	Autor: Wellington
	Data: 09/11/2023
	Atualização: --
================================================================================================== */


/*
        Escreva um programa em C que solicite a idade do indivíduo e se ele tem
        carro (s ou S) ou não tem (n ou N).

        Os indivíduos sem carro e com idade entre 18 e 50 anos receberão 500 Reais de auxílio transporte. Nos demais casos, o auxílio será de 200 Reais.
   
        Indivíduo entre 18 e 50 anos sem carro recebe 500 Reais.

        Indivíduo com qualquer idade com carro recebe 200 Reais.
        Indivíduo com menos de 18 e mais de 50 anos recebem 200 Reais.
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[]) {
    int idade=0;										/* Declaração de variáveis */
    char tem_carro;

    printf("----------------------------------------------\n");	       			 /* Cabeçaalho */
    printf("        Tem carro (sim ou nao)?               \n");
    printf("----------------------------------------------\n");	
    
    printf("Digite sua idade: ");                                                       /* Entrada de dados */
    scanf("%d", &idade);

    printf("Voce possui carro? ");
    scanf(" %c", &tem_carro);

 
    if((idade >= 18 && idade <= 50) && (tem_carro == 'n' || tem_carro == 'N'))		/* Faz as verificações */
        printf("Voce recebeu R$500.00 de auxilio.\n");
    else if((idade < 18 || idade > 50) && (tem_carro == 's' || tem_carro == 'S'))
        printf("Voce recebeu R$ 200.00 de auxilio.\n");
    

    
    printf("----------------------------------------------\n");	        		/* Rodapé */
    
/*	system("PAUSE"); */				        			/* Faz uma parada na execução do programa */
		
	return 0;									/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
