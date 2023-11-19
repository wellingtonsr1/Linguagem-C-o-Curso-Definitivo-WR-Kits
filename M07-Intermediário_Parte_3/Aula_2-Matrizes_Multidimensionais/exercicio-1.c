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

#define LINHA 4
#define COLUNA 6

/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 

    int mat[3][4] = { { 15, 22,  9,  1},
                      { 65, 42,  0, 71},
                      {  7, 29, 33, 62} };;

    register int i,j,col=0;
    
    printf("-----------------------\n");            
    for(i=0;i<3;i++)
    {
        printf("|");
        for(j=0;j<4;j++){
            printf(" %3d ", mat[i][j]);
            printf("|");
        }
        printf(" |");
        putchar('\n');
        printf("-----------------------\n");            
    }
    putchar('\n'); 
     
    
    
    
    
    /* system("PAUSE");               							/* Faz uma parada na execução do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
