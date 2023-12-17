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
#include <string.h>

/* ================================================================================================== */
/* ----- Protótipo das funções ----- */


/* ================================================================================================== */
/* ----- Função Principal ----- */
int main(int argc, char *argv[])
{
									
    #if _WIN32 
		setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif	
    
    char s[100];
    char *ptr = s;    
	
    printf("----------------------------------------------------------\n");	                    /* Cabeçaalho */
    printf("%38s\n", "Ponteiros");   
    printf("----------------------------------------------------------\n");	
    
    printf("Entre com a string: ");
    fgets(s, sizeof(s), stdin);
    
    if(*ptr == '\0') return;

    while(*ptr != '\0')                     /* imprime de forma normal */
        putchar(*ptr++);

    ptr--;                                  /* por causa do '\0' */
    
    while(ptr >= s)                         /* imprime de forma invertida */
        putchar(*ptr--);


    printf("\n----------------------------------------------------------\n");	         	        /* Rodapé */
    

    
   	#if _WIN32
    	system("PAUSE"); 
    #endif
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/* ================================================================================================== */
/* ----- Desenvolvimento da funções ----- */



/* ================================================================================================== */
/* ----- Fim do programa ----- */
