/* =================================================================================================
	Módulo 
	Aula 
	Descrição: 
	Autor: Wellington
	Data: 
	Atualização: --
================================================================================================== */


/* ================================================================================================== */
/* ----- Bibliotecas ----- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

/* ================================================================================================== */
/* ----- Protótipo das funções ----- */


/* ================================================================================================== */
/* ----- Função Principal ----- */
int main(int argc, char *argv[])
{
									
    #if _WIN32 
		setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif	

	short *ptr_var = NULL, var = 0;
	
	var = 5;
	ptr_var = &var;
	
    printf("----------------------------------------------------------\n");	                    /* Cabeçaalho */
    printf("%32s\n", "Ponteiros");   
    printf("----------------------------------------------------------\n");	
    
    printf("Endereço de var usando o &var           : %p\n", &var);
    printf("Endereço de var usando o ptr_var        : %p\n", ptr_var);
    printf("Endereço de ptr_var usando o &ptr_var   : %p\n", &ptr_var);
    printf("Contúdo de var                          : %hd\n", var);
    printf("Contúdo de var usando o *ptr_var        : %hd\n", *ptr_var);
    
    putchar('\n');
    
	printf("Alterando valo de var:\n");
    *ptr_var = 342;
    
    printf("Novo valor de var                       : %hd\n", var);
    
    printf("----------------------------------------------------------\n");	         	        /* Rodapé */
    
    
   	#if _WIN32
    	system("PAUSE"); 
    #endif
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/* ================================================================================================== */
/* ----- Desenvolvimento da funções ----- */



/* ================================================================================================== */
/* ----- Fim do programa ----- */
