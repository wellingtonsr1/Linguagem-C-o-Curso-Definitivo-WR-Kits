/* =================================================================================================
	M�dulo 
	Aula 
	Descri��o: 
	Autor: Wellington
	Data: 
	Atualiza��o: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 

	
    printf("----------------------------------------------\n");	                        /* Cabe�aalho */
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

    printf("----------------------------------------------\n");         	        /* Rodap� */
    
    
/*    system("PAUSE");    */           							/* Faz uma parada na execu��o do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
