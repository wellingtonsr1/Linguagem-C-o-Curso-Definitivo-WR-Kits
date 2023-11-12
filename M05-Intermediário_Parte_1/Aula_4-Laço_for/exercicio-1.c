/* =================================================================================================
	M�dulo 5 
	Aula 
	Descri��o: Exerc�cio 1 
	Autor: Wellington
	Data: 11/09/2023
	Atualiza��o: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_ALL, "Portuguese_Brazil"); */ 

    int degraus, linha, coluna;                                                         /* Declara��o de vari�veis */

    printf("----------------------------------------------\n");	                        /* Cabe�alho */
    printf("                 Escada                       \n");   
    printf("----------------------------------------------\n");	
    
    printf("Informe o total de degraus: ");                                             /* Entrada de dados */
    scanf("%d", &degraus);
    
    printf("\n");                                                                       /* Linha em branco extra */

    for(linha=1; linha <= degraus; linha++)                                             /* Cria��o da 'escada' */
    {
        for(coluna=1; coluna <= linha ; coluna++)
        {
            printf("||");

        } /* Fim do for interno */
        printf("__");
        
        printf("\n");

    } /* Fim do for externo */


    printf("----------------------------------------------\n");         	        /* Rodap� */
    
    
    /* system("PAUSE");               	*/						/* Faz uma parada na execu��o do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* Fim da fun��o main */
