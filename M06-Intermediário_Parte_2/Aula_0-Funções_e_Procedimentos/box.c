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


/* Fun��o Principal */
int main(int argc, char *argv[])
{
    int altura = 5;  // Altura da caixa
    int largura = 10,i,j; // Largura da caixa

    for (i = 0; i < altura; i++) {
        for (j = 0; j < largura; j++) {
            // Condi��o para verificar se estamos na borda da caixa
            if (i == 0 || i == altura - 1 || j == 0 || j == largura - 1) {
                printf("*");
            } else {
                
                    printf(" ");
               
            }
        }
        printf("\n");  // Nova linha ap�s cada linha da caixa
    }									

	
    
       
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
