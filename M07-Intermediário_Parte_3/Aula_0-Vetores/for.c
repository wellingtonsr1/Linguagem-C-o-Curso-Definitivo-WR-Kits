/* =================================================================================================
	M�dulo 
	Aula 
	Descri��o: 
	Autor: Wellington
	Data: 
	Atualiza��o: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


#define num 10


int func1(int vet[], int N, int index);


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 

    int vet[num] = {0};

     int i;

    for(i=0; i < num; i++)
    {   
        vet[i] = 4 * i;
        puts("---");
    }

    
    
    
    
   /* system("PAUSE");               							/* Faz uma parada na execu��o do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */





