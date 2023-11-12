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
    int largura = 10; // Largura da caixa

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            // Condição para verificar se estamos na borda da caixa
            if (i == 0 || i == altura - 1 || j == 0 || j == largura - 1) {
                printf("*");
            } else {
                if(i >= 2 && i <= 10)
                    printf(" ");
                else
                    printf("|");
            }
        }
        printf("\n");  // Nova linha após cada linha da caixa
    }									

	
    
       
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
