/* =================================================================================================
	M�dulo 5 
	Aula 1
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

    int inicial=0, final=0;
	
    printf("----------------------------------------------\n");	                        /* Cabe�aalho */
    printf("            Frequencia em Hz                  \n");   
    printf("----------------------------------------------\n");	
    
    printf("Informe a frequencia inicial: ");
    scanf("%d", &inicial);

    printf("Informe a frequencia final  : ");
    scanf("%d", &final);
    
    printf("\n");

    while(inicial <= final)
    {   
        printf(" %dHz\n", inicial);

        inicial++;

    } /* end while */


    printf("----------------------------------------------\n");         	        /* Rodap� */
    
    
/*    system("PAUSE"); */               							/* Faz uma parada na execu��o do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
