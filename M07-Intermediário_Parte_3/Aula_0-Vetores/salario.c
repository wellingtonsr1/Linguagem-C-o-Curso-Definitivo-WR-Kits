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
									
            /* setlocale(LC_CTYPE, "Portuguese"); */ 
    float salario[12] = {0}, total=0.0;
    register int i; 
	
    puts("----------------------------------------------");	                        /* Cabeçaalho */
    puts("            Programa salario                  ");   
    puts("----------------------------------------------");	
    
    
    for(i=0; i < 12; i++)
    {
        printf(" - Entre com o salario do mes %d: ", i + 1);
        scanf("%f", &salario[i]);
    }
    
    puts("  Mes            Valor ");
    puts("------------------------");
    for(i=0; i < 12; i++)
    {
        printf(" %3d         %9.2f\n", i + 1, salario[i]);
        total += salario[i];
    }
    printf("Total Anual: %9.2f\n", total);
    
    puts("----------------------------------------------");         	        /* Rodapé */
    
    
    /* system("PAUSE");               							/* Faz uma parada na execução do programa */
		
    return 0;	
    	        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
