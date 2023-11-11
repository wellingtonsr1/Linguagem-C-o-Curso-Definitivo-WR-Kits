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
    O primeiro n�mero somado a 1;
    - O segundo n�mero subtra�do em 1;
    - O terceiro n�mero igual ao valor original do primeiro;
    - O quarto n�mero igual � soma do valor original do terceiro com o segundo n�mero atualizado;
    - A soma de todos os n�meros envolvidos no processo.

    num2--
    num4=num3+num2
    num3=num1
    num1++
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    unsigned primeiro_numero=0, segundo_numero=0, terceiro_numero=0, quarto_numero=0,                                                /* Decalar��o de vari�veis */
        soma_originais=0, soma_geral;

    printf("----------------------------------------------\n");	                                                                /* Cabe�aalho */
    printf("            Pratica inc e dec                 \n");   
    printf("----------------------------------------------\n");	
    
    printf("Informe o primeiro numero: ");                                                                                      /* Entrada de dados */
    scanf("%d", &primeiro_numero);
    
    printf("Informe o segundo numero : "); 
    scanf("%d", &segundo_numero);
    
    printf("Informe o terceiro numero: "); 
    scanf("%d", &terceiro_numero);
    
    printf("Informe o quarto numero  : "); 
    scanf("%d", &quarto_numero);
 
    printf("\n- Numeros do usuario: %d %d %d %d\n", primeiro_numero, segundo_numero, terceiro_numero, quarto_numero);           /* Exibe os n�meros do usu�rio */

    soma_originais = primeiro_numero + segundo_numero + terceiro_numero + quarto_numero;                                         /* Soma os n�meros do usu�rio */

    segundo_numero--;                                                                                                           /* Faz o processamento com os n�meros */
    quarto_numero   = terceiro_numero + segundo_numero;
    terceiro_numero = primeiro_numero;
    primeiro_numero++;
    
    printf("\n- Numeros do sistema: %d %d %d %d\n", primeiro_numero, segundo_numero, terceiro_numero, quarto_numero);           /* Exibe os n�meros do sistema */
    
    soma_geral = primeira_soma + primeiro_numero + segundo_numero + terceiro_numero + quarto_numero;                            /* Soma os n�meros do siatema */
    
    printf("\n- A soma final dos numeros eh: %d\n", soma_final);                                                                /* Exibe a soma final */
    
    
    printf("----------------------------------------------\n");	                                                                /* Rodap� */
    
    
    /*     system("PAUSE"); 		*/		        							        /* Faz uma parada na execu��o do programa */
		
	return 0;														/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
