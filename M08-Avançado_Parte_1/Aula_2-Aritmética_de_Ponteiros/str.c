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

    char str[] = "Este é um exemplo Erro", *str_ptr = NULL, *sub_str_ptr = NULL;
    char sub_str[] = "é";
    int i, j;
    
    str_ptr = str;
    //sub_str_ptr = sub_str;

    printf("----------------------------------------------------------\n");	                    /* Cabeçaalho */
    printf("%38s\n", "Substring em uma string");   
    printf("----------------------------------------------------------\n");	

    //printf("%d", strlen(sub_str));

    while(*str_ptr) 
    {
        sub_str_ptr = sub_str;
        while(*sub_str_ptr != '\0' && *sub_str_ptr == *str_ptr)
           sub_str_ptr++; 
        
        if(*sub_str_ptr)
            printf("A string encontrada na posição %c\n", *str_ptr);
        
        //printf("%c", *str_ptr);
        str_ptr++;
    }   


    //printf("Não encontrada\n");

    // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19i
    // E s t e   é   u m    E  x  e  m  p  l  o E  r  r


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
