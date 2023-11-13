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


/* Função Principal */
int main(int argc, char *argv[])
{
    int altura = 5;  // Altura da caixa
    int largura = 10,i,j; // Largura da caixa

    for (i = 0; i < altura; i++) {
        for (j = 0; j < largura; j++) {
            // Condição para verificar se estamos na borda da caixa
            if (i == 0 || i == altura - 1 || j == 0 || j == largura - 1) {
                printf("*");
            } else {
                
                    printf(" ");
               
            }
        }
        printf("\n");  // Nova linha após cada linha da caixa
    }									

	
    
       
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
