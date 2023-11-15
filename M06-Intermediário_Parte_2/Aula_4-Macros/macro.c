/* =================================================================================================
	Módulo 
	Aula 
	Descrição: 
	Autor: Wellington
	Data: 
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


#define show(x) printf(#x)
#define VAR(i) n##i

/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 
    int i, n1=100, n2=200, n3=300;
	
    printf("----------------------------------------------\n");	                        /* Cabeçaalho */
    printf("                             \n");   
    printf("----------------------------------------------\n");	
    
    for(i=0; i < 3; i++)
    {
        printf("Entre com a nota %d", i);
        scanf("%f", &nota%d);
    } 
         
    
    printf("----------------------------------------------\n");         	        /* Rodapé */
    
    
    /* system("PAUSE"); */              							/* Faz uma parada na execução do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
