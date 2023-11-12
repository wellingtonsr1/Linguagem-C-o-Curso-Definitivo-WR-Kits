/* =================================================================================================
	Módulo 5 
	Aula 1
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

    int inicial=0, final=0;
	
    printf("----------------------------------------------\n");	                        /* Cabeçaalho */
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


    printf("----------------------------------------------\n");         	        /* Rodapé */
    
    
/*    system("PAUSE"); */               							/* Faz uma parada na execução do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
