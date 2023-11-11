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
    O primeiro número somado a 1;
    - O segundo número subtraído em 1;
    - O terceiro número igual ao valor original do primeiro;
    - O quarto número igual à soma do valor original do terceiro com o segundo número atualizado;
    - A soma de todos os números envolvidos no processo.

    num2--
    num4=num3+num2
    num3=num1
    num1++
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[])
{
									
    unsigned primeiro_numero=0, segundo_numero=0, terceiro_numero=0, quarto_numero=0,                                                /* Decalarção de variáveis */
        soma_originais=0, soma_geral;

    printf("----------------------------------------------\n");	                                                                /* Cabeçaalho */
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
 
    printf("\n- Numeros do usuario: %d %d %d %d\n", primeiro_numero, segundo_numero, terceiro_numero, quarto_numero);           /* Exibe os números do usuário */

    soma_originais = primeiro_numero + segundo_numero + terceiro_numero + quarto_numero;                                         /* Soma os números do usuário */

    segundo_numero--;                                                                                                           /* Faz o processamento com os números */
    quarto_numero   = terceiro_numero + segundo_numero;
    terceiro_numero = primeiro_numero;
    primeiro_numero++;
    
    printf("\n- Numeros do sistema: %d %d %d %d\n", primeiro_numero, segundo_numero, terceiro_numero, quarto_numero);           /* Exibe os números do sistema */
    
    soma_geral = primeira_soma + primeiro_numero + segundo_numero + terceiro_numero + quarto_numero;                            /* Soma os números do siatema */
    
    printf("\n- A soma final dos numeros eh: %d\n", soma_final);                                                                /* Exibe a soma final */
    
    
    printf("----------------------------------------------\n");	                                                                /* Rodapé */
    
    
    /*     system("PAUSE"); 		*/		        							        /* Faz uma parada na execução do programa */
		
	return 0;														/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
