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
									
    #if _WIN32 
		setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif	

	
    printf("----------------------------------------------\n");	                        /* Cabeçaalho */
    printf("                             \n");   
    printf("----------------------------------------------\n");	
    
    
    
    
    
    printf("----------------------------------------------\n");         	        /* Rodapé */
    
    
   	#if _WIN32
    	system("PAUSE"); 
    #endif
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
