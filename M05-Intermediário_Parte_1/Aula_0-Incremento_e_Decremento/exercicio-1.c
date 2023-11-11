/* =================================================================================================
	Módulo 4, Parte 3
	Aula 4
	Descrição: 
	Autor: Wellington
	Data: 10/11/2023
	Atualização: --
================================================================================================== */

/*
	\x82 = é
	\xE3 = ã
	\x87 = ç
	\x88 = ê
	\xA0 = á
	
	ou usar:
	#include <locale.h> 
	setlocale(LC_CTYPE, "Portuguese"); 
*/

/*
    Exercício Proposto: projete um código em C para receber a entrada de um número inteiro
    positivo de 16 bits (deverá ser compatível entre máquinas diferentes) e o sistema calcule:
    
    - O valor do número somado a 1;
    - O valor do número subtraído em 1;
    - A soma de todos os valores envolvidos;
    - O quadrado da soma de todos os valores envolvidos.
    
    O sistema deve apresentar o limite de valor igual a 85. Caso o usuário digite um valor maior que
    85, deverá gerar mensagem de erro.
    
    Exemplo:
    O usuário entra com 12;
    O sistema mostra os resultados 13, 11 e 36 e 1296.
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[])
{
									
    unsigned short numero=0, n=0, ni=0, nd=0, soma=0, quadrado_soma=0;                              /* Declaração de variáveis */

    printf("----------------------------------------------\n");	                                    /* Cabeçaalho */
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
        printf("\nErro: valor fora da faixa permitida.\n");                                         /* Exibe mensagem de erro se o número não estiver */

    } /* end else */
    

    printf("----------------------------------------------\n");	                                    /* Rodapé */
    
    
    /*     system("PAUSE"); 		*/		        				    /* Faz uma parada na execução do programa */
		
	return 0;										    /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
