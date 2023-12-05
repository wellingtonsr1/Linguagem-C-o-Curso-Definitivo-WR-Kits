/* =================================================================================================
	M�dulo 
	Aula 
	Descri��o: 
	Autor: Wellington
	Data: 
	Atualiza��o: --
================================================================================================== */


/* ================================================================================================== */
/* ----- Bibliotecas ----- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

/* ================================================================================================== */
/* ----- Prot�tipo das fun��es ----- */


/* ================================================================================================== */
/* ----- Fun��o Principal ----- */
int main(int argc, char *argv[])
{
									
    #if _WIN32 
		setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif	

	short *ptr_var = NULL, var = 0;
	
	var = 5;
	ptr_var = &var;
	
    printf("----------------------------------------------------------\n");	                    /* Cabe�aalho */
    printf("%32s\n", "Ponteiros");   
    printf("----------------------------------------------------------\n");	
    
    printf("Endere�o de var usando o &var           : %p\n", &var);
    printf("Endere�o de var usando o ptr_var        : %p\n", ptr_var);
    printf("Endere�o de ptr_var usando o &ptr_var   : %p\n", &ptr_var);
    printf("Cont�do de var                          : %hd\n", var);
    printf("Cont�do de var usando o *ptr_var        : %hd\n", *ptr_var);
    
    putchar('\n');
    
	printf("Alterando valo de var:\n");
    *ptr_var = 342;
    
    printf("Novo valor de var                       : %hd\n", var);
    
    printf("----------------------------------------------------------\n");	         	        /* Rodap� */
    
    
   	#if _WIN32
    	system("PAUSE"); 
    #endif
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


/* ================================================================================================== */
/* ----- Desenvolvimento da fun��es ----- */



/* ================================================================================================== */
/* ----- Fim do programa ----- */
