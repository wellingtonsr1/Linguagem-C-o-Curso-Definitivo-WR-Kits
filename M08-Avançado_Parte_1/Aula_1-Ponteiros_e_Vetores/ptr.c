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


/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 

	
    printf("----------------------------------------------\n");	                        /* Cabeçaalho */
    printf("                             \n");   
    printf("----------------------------------------------\n");	
    
    int vec[3] = {9, 8, 7}, i; 
    for(i=0; i < 3; i++)
    {
        printf("Infoem o valor %d: ", i);
        scanf("%d", vec[i]);
    }
    
    for(i=0; i < 3; i++){
        printf("%d -", vec[i]);
    } 
    putchar('\n');

    printf("----------------------------------------------\n");         	        /* Rodapé */
    
    
/*    system("PAUSE");    */           							/* Faz uma parada na execução do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
