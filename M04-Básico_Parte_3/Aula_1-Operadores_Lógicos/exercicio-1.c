/* =================================================================================================
	M�dulo 4, Parte 3
	Aula 1
	Descri��o: Exerc�cio 1
	Autor: Wellington
	Data: 09/11/2023
	Atualiza��o: --
================================================================================================== */


/*
        Escreva um programa em C que solicite a idade do indiv�duo e se ele tem
        carro (s ou S) ou n�o tem (n ou N).

        Os indiv�duos sem carro e com idade entre 18 e 50 anos receber�o 500 Reais de aux�lio transporte. Nos demais casos, o aux�lio ser� de 200 Reais.
   
        Indiv�duo entre 18 e 50 anos sem carro recebe 500 Reais.

        Indiv�duo com qualquer idade com carro recebe 200 Reais.
        Indiv�duo com menos de 18 e mais de 50 anos recebem 200 Reais.
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[]) {
    int idade=0;										/* Declara��o de vari�veis */
    char tem_carro;

    printf("----------------------------------------------\n");	       			 /* Cabe�aalho */
    printf("        Tem carro (sim ou nao)?               \n");
    printf("----------------------------------------------\n");	
    
    printf("Digite sua idade: ");                                                       /* Entrada de dados */
    scanf("%d", &idade);

    printf("Voce possui carro? ");
    scanf(" %c", &tem_carro);

 
    if((idade >= 18 && idade <= 50) && (tem_carro == 'n' || tem_carro == 'N'))		/* Faz as verifica��es */
        printf("Voce recebeu R$500.00 de auxilio.\n");
    else if((idade < 18 || idade > 50) && (tem_carro == 's' || tem_carro == 'S'))
        printf("Voce recebeu R$ 200.00 de auxilio.\n");
    

    
    printf("----------------------------------------------\n");	        		/* Rodap� */
    
/*	system("PAUSE"); */				        			/* Faz uma parada na execu��o do programa */
		
	return 0;									/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
