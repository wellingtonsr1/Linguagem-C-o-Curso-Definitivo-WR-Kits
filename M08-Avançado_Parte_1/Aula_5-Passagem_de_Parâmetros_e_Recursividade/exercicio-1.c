/* =================================================================================================
	Módulo 8
	Aula 5
	Descrição: Exercício 1
	Autor: Wellington
	Data: 05/12/2023
	Atualização: --
================================================================================================== */

/* ================================================================================================= */
/* ----- Bibliotecas ----- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <locale.h> 


/* ================================================================================================= */
/* ----- Função Principal ----- */
int main(int argc, char *argv[])
{									
    setlocale(LC_ALL, "Portuguese_Brazil");

    register int i, j;
	
    printf("----------------------------------------------\n");	                        /* Cabeçaalho */
    printf("%25s\n", "Exercicio 1");   
    printf("----------------------------------------------\n");	
    putchar('\n');
     
    if(argc == 1)
    	printf("Uso: programa.exe ohm valor_1 valor2 valor_3 valor_4...valor_x valor_y\n", argv[0]);
    else
    {
    	printf(" Resistores: ");
    	for(i=2; i < argc; i+=2)
   		{  
        	printf("%.2f", atof(argv[i]) / atof(argv[i+1]));
        	if(i >= 2 && i < argc - 2) printf(" | ");
    	}
    	printf(" Ohms\n");
    	
	} /* end esle */
	
	putchar('\n');
	printf("----------------------------------------------\n");         	              /* Rodapé */
    putchar('\n');
    
	system("PAUSE");
    return 0;		        							                              /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
