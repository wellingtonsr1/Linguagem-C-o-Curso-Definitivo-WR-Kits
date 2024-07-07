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
									
    #if _WIN32 
        setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif 

	
    printf("----------------------------------------------\n");	                        /* Cabe�aalho */
    printf("                             \n");   
    printf("----------------------------------------------\n");	
    
    
  
    
    
    printf("----------------------------------------------\n");         	        /* Rodap� */
    
    
    #if _WIN32
        system("PAUSE"); 
    #endif             							/* Faz uma parada na execu��o do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
