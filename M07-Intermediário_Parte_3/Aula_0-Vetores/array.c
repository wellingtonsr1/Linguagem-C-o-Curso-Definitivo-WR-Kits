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

int teste();

/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 
    
    int arr_1=0, i;
	
    printf("----------------------------------------------\n");	                        /* Cabe�aalho */
    printf("                             \n");   
    printf("----------------------------------------------\n");	
    
    teste(); 
    
    arr_1 = teste();
    
    printf("%d\n", arr_1);
    
    
    
    
    printf("----------------------------------------------\n");         	        /* Rodap� */
    
    
    /*system("PAUSE");               							/* Faz uma parada na execu��o do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
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
