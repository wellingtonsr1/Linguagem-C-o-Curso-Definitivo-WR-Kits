/* =================================================================================================
	Módulo 6 
	Aula 4
	Descrição: Exercício 1
	Autor: Wellington
	Data: 14/11/2023
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* ----- Macros ----- */
#define calcula_media(nota_1, nota_2, nota_3, peso_1, peso_2, peso_3)              \
          ((((nota_1) * (peso_1)) + ((nota_2) * (peso_2)) + ((nota_3) * (peso_3))) \
                                               / ((peso_1) + (peso_2) + (peso_3)))


/* Função Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, peso_1, peso_2, peso_3;                                                     /* Declaração de variáveis */
    float nota_1, nota_2, nota_3, media;
	
    printf("----------------------------------------------\n");	                                            /* Cabeçaalho */
    printf("                Média ponderada             \n");   
    printf("----------------------------------------------\n");	
    
    printf("Entre com 1ª nota : ");                                                                         /* Entrada de dados */
    scanf("%f", &nota_1);
    
    printf("Entre com o peso 1: ");
    scanf("%d", &peso_1);
	
    printf("\nEntre com 2ª nota : ");
    scanf("%f", &nota_2);
    
    printf("Entre com o peso 2: ");
    scanf("%d", &peso_2);
	
    printf("\nEntre com 3ª nota : ");
    scanf("%f", &nota_3);	
	    	
    printf("Entre com o peso 3: ");
    scanf("%d", &peso_3);
	
    media = calcula_media(nota_1, nota_2, nota_3, peso_1, peso_2, peso_3);                                 /* Calcula a média */
    printf("\n - A média é %.2f \n", media);                                                                /* Exibe o resultado */
    
    
    printf("----------------------------------------------\n");         	                            /* Rodapé */
    
    
    system("PAUSE");               							            /* Faz uma parada na execução do programa */
		
    return 0;		        							                    /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */

