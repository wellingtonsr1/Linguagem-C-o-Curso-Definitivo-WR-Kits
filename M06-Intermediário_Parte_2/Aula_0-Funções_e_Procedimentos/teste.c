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

    int a=3;
	
    printf("----------------------------------------------\n");	                        /* Cabe�aalho */
    printf("                  Teste                      \n");   
    printf("----------------------------------------------\n");	
    
     
    int val, pot=1, i, exp;

    printf("Infome o numero: ");
    scanf("%d", &val);
    
    printf("Informe o expoente: ");
    scanf("%d", &exp);
    /*
    while(cont != exp)
    {
        pot = pot * val;
        cont++;
    }
    */

    for(i=0, pot=1; i < exp; i++)
    {
        pot *= val;
    }

    printf("Pot = %d\n", pot);
    
    printf("----------------------------------------------\n");         	        /* Rodap� */
    
    
/*    system("PAUSE"); */              							/* Faz uma parada na execu��o do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
