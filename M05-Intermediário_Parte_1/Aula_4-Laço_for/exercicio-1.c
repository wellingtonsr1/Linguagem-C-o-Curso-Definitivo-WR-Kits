/* =================================================================================================
	Módulo 5 
	Aula 
	Descrição: Exercício 1 
	Autor: Wellington
	Data: 11/09/2023
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_ALL, "Portuguese_Brazil"); */ 

    int degraus, linha, coluna;                                                         /* Declaração de variáveis */

    printf("----------------------------------------------\n");	                        /* Cabeçalho */
    printf("                 Escada                       \n");   
    printf("----------------------------------------------\n");	
    
    printf("Informe o total de degraus: ");                                             /* Entrada de dados */
    scanf("%d", &degraus);
    
    printf("\n");                                                                       /* Linha em branco extra */

    for(linha=1; linha <= degraus; linha++)                                             /* Criação da 'escada' */
    {
        for(coluna=1; coluna <= linha ; coluna++)
        {
            printf("||");

        } /* Fim do for interno */
        printf("__");
        
        printf("\n");

    } /* Fim do for externo */


    printf("----------------------------------------------\n");         	        /* Rodapé */
    
    
    /* system("PAUSE");               	*/						/* Faz uma parada na execução do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* Fim da função main */
