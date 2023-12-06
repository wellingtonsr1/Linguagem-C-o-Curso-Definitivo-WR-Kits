/* =================================================================================================
	M�dulo 8
	Aula 3
	Descri��o: Exerc�cio 1
	Autor: Wellington
	Data: 05/12/2023
	Atualiza��o: --
================================================================================================== */

/* ================================================================================================= */
/* ----- Bibliotecas ----- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

/* ================================================================================================= */
/* ----- Fun��o Principal ----- */
int main(int argc, char *argv[])
{									
    setlocale(LC_ALL, "Portuguese_Brazil");

    register int i, j;
	
    printf("----------------------------------------------\n");	                        /* Cabe�aalho */
    printf("%25s\n", "Exercicio 1");   
    printf("----------------------------------------------\n");	
    
    printf(" Resistores: ");
    for(i=2; i < argc; i+=2)
    {  
        printf("%.2f", atof(argv[i]) / atof(argv[i+1]));
        if(i >= 2 && i < argc - 2) printf(" | ");
    }
    printf(" Ohms\n");

    printf("----------------------------------------------\n");         	              /* Rodap� */
    
    system("PAUSE");

    return 0;		        							                              /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
