/* =================================================================================================
	M�dulo 4, Parte 3
	Aula 4
	Descri��o: 
	Autor: Wellington
	Data: 10/11/2023
	Atualiza��o: --
================================================================================================== */

/*
	\x82 = �
	\xE3 = �
	\x87 = �
	\x88 = �
	\xA0 = �
	
	ou usar:
	#include <locale.h> 
	setlocale(LC_CTYPE, "Portuguese"); 
*/

/*
    Exerc�cio Proposto: projete um c�digo em C para receber a entrada de um n�mero inteiro
    positivo de 16 bits (dever� ser compat�vel entre m�quinas diferentes) e o sistema calcule:
    
    - O valor do n�mero somado a 1;
    - O valor do n�mero subtra�do em 1;
    - A soma de todos os valores envolvidos;
    - O quadrado da soma de todos os valores envolvidos.
    
    O sistema deve apresentar o limite de valor igual a 85. Caso o usu�rio digite um valor maior que
    85, dever� gerar mensagem de erro.
    
    Exemplo:
    O usu�rio entra com 12;
    O sistema mostra os resultados 13, 11 e 36 e 1296.
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    unsigned short numero=0, n=0, ni=0, nd=0, soma=0, quadrado_soma=0;                              /* Declara��o de vari�veis */

    printf("----------------------------------------------\n");	                                    /* Cabe�aalho */
    printf("            Exercicio inc e dec               \n");   
    printf("----------------------------------------------\n");	
    
    printf("Informe o numero inteiro positivo ate 85: ");                                           /* Entrada de dados */
    scanf("%hu", &numero);
    
    if(numero > 0 && numero <= 85)                                                                  /* Faz o processamento se o valor informado for o correto */
    { 
        n = numero;
        ni = ++numero;
        nd = --n;
        soma = ++n + ni + nd; 
        quadrado_soma = soma * soma;

        printf("\n- O resultado eh %hu %hu %hu %hu\n", ni, nd, soma, quadrado_soma);                /* Exibe os valores e a soma final */

    } /* end if */
    else
    {
        printf("\nErro: valor fora da faixa permitida.\n");                                         /* Exibe mensagem de erro se o n�mero n�o estiver */

    } /* end else */
    

    printf("----------------------------------------------\n");	                                    /* Rodap� */
    
    
    /*     system("PAUSE"); 		*/		        				    /* Faz uma parada na execu��o do programa */
		
	return 0;										    /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
