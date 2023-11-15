/* =================================================================================================
	M�dulo 6 
	Aula 4
	Descri��o: Exerc�cio 1
	Autor: Wellington
	Data: 14/11/2023
	Atualiza��o: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* ----- Macros ----- */
#define calcula_media(nota_1, nota_2, nota_3, peso_1, peso_2, peso_3)              \
          ((((nota_1) * (peso_1)) + ((nota_2) * (peso_2)) + ((nota_3) * (peso_3))) \
                                               / ((peso_1) + (peso_2) + (peso_3)))


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, peso_1, peso_2, peso_3;                                                     /* Declara��o de vari�veis */
    float nota_1, nota_2, nota_3, media;
	
    printf("----------------------------------------------\n");	                                            /* Cabe�aalho */
    printf("                M�dia ponderada             \n");   
    printf("----------------------------------------------\n");	
    
    printf("Entre com 1� nota : ");                                                                         /* Entrada de dados */
    scanf("%f", &nota_1);
    
    printf("Entre com o peso 1: ");
    scanf("%d", &peso_1);
	
    printf("\nEntre com 2� nota : ");
    scanf("%f", &nota_2);
    
    printf("Entre com o peso 2: ");
    scanf("%d", &peso_2);
	
    printf("\nEntre com 3� nota : ");
    scanf("%f", &nota_3);	
	    	
    printf("Entre com o peso 3: ");
    scanf("%d", &peso_3);
	
    media = calcula_media(nota_1, nota_2, nota_3, peso_1, peso_2, peso_3);                                 /* Calcula a m�dia */
    printf("\n - A m�dia � %.2f \n", media);                                                                /* Exibe o resultado */
    
    
    printf("----------------------------------------------\n");         	                            /* Rodap� */
    
    
    system("PAUSE");               							            /* Faz uma parada na execu��o do programa */
		
    return 0;		        							                    /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */

