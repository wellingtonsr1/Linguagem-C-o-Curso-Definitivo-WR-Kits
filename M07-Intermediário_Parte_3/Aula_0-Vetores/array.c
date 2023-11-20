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

int teste();

/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 
    
    int arr_1=0, i;
	
    printf("----------------------------------------------\n");	                        /* Cabeçaalho */
    printf("                             \n");   
    printf("----------------------------------------------\n");	
    
    teste(); 
    
    arr_1 = teste();
    
    printf("%d\n", arr_1);
    
    
    
    
    printf("----------------------------------------------\n");         	        /* Rodapé */
    
    
    /*system("PAUSE");               							/* Faz uma parada na execução do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */

int teste()
{

    int arr_2[2][2];
    int arr_3[2] = {7, 8};
    int arr_4[2] = {9, 5};
    
    
    puts("Funcao teste");    
      for (int i = 0; i < 2; i++) {
        arr_2[0][i] = arr_3[i];
        arr_2[1][i] = arr_4[i];
    }

    return arr_2[2][2];

}
