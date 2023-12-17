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
#include <string.h>

/* ================================================================================================== */
/* ----- Prot�tipo das fun��es ----- */

int my_strlen(char *);

/* ================================================================================================== */
/* ----- Fun��o Principal ----- */
int main(int argc, char *argv[])
{
									
    #if _WIN32 
		setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif	
    
    char s[100];
    char *ptr = s;    
	
    printf("----------------------------------------------------------\n");	                    /* Cabe�aalho */
    printf("%38s\n", "Ponteiros");   
    printf("----------------------------------------------------------\n");	
    
    printf("Entre com a string: ");
    fgets(s, sizeof(s), stdin);
    if(s[strlen(s) - 1] == '\n') 
        s[strlen(s) - 1] = '\0';
    
    printf("%d\n", my_strlen(s));

    printf("\n----------------------------------------------------------\n");	         	        /* Rodap� */
    

    
   	#if _WIN32
    	system("PAUSE"); 
    #endif
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


/* ================================================================================================== */
/* ----- Desenvolvimento da fun��es ----- */

int my_strlen(char *str)
{
    char *ptr = str;

    while(*str != '\0')
        printf("%X\n", str++);

    return (int) (str - ptr);
}

/* ================================================================================================== */
/* ----- Fim do programa ----- */
