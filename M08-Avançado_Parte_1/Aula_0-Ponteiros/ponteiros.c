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

	int vec[10] = {5, 8, 9}, *ptr_vec = NULL;
	char str[10] ="teste";
	
    printf("----------------------------------------------------------\n");	                    /* Cabe�aalho */
    printf("%38s\n", "Ponteiros e Vetores");   
    printf("----------------------------------------------------------\n");	
    
    ptr_vec = vec;
  
	//printf("Vec: %X\n", vec);
	printf("Vec: %d\n", *ptr_vec);
	
	int idx = 2;
	printf("Vec[%d]: %d\n", idx, vec[idx]);
	
	*(ptr_vec + 2) = 15;
	//printf("Vec: %d\n", *ptr_vec);

	
	printf("Vec[%d]: %d\n", idx, vec[idx]);
	
    //printf("Vec: %s\n", str);
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
