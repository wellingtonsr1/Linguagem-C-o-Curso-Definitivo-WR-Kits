/* =================================================================================================
	Módulo 7
	Aula 1
	Descrição: Exercício 1
	Autor: Wellington
	Data: 19/11/2023
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

#define HEIGHT 4
#define WIDTH 6

/* ---------- Protótipo das funções ---------- */
void draw_grid(unsigned int mat[HEIGHT][WIDTH], int height, int width);


/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 
    
    unsigned int grid[HEIGHT][WIDTH] = {{0, 0, 0, 0, 0, 0},                                              /* Declaração das variáveis */
                                       {0, 0, 0, 0, 0, 0},
                                       {0, 0, 0, 0, 0, 0},
                                       {0, 0, 0, 0, 0, 0}}, number;
    unsigned char line, column;
    

    draw_grid(grid, HEIGHT, WIDTH);                                                                      /* Primeira chamada da função para desenhar a tabela */
    while(1)                                                                                            /* Entrada de dados */
    {    
        putchar('\n');                                                                                  /* Linha em branco extra */

        printf(">>> Linha : ");
        scanf("%hhd", &line);
    
        printf(">>> Coluna: ");
        scanf("%hhd", &column);
        
        printf(">>> Valor : ");
        scanf("%d", &number);

        if(number < 0 || number > 999)                                                                  /* Verifica se o valor informado está fora da faixa */
        { 
           puts("\n - Valor fora da faixa!");
 
        } /* end if */
        else                                                                                            /* Verifica se linha e coluna estão na faixa */
        {
            if((line > 0 && line <= HEIGHT) && (column > 0 && column <= WIDTH))
                grid[line - 1][column - 1] = number;                                                     /* Tudo certo, o valor é inserido na matriz */

            draw_grid(grid, HEIGHT, WIDTH);                                                              /* Chama da função que desenha a tabela */

        } /* end else */

    } /* end while */
              
    /* system("PAUSE");               							                /* Faz uma parada na execução do programa */
		
    return 0;		        							                /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/* ---------- Desenvolvimento das funções ---------- */
void draw_grid(unsigned int grid[HEIGHT][WIDTH], int heigth, int width)
{
    register int i, line, column;                                                                       /* Declaração das variáveis */ 
    
    system("clear");                                                                                    /* Limpa a tela */

    puts("---------------------------------------------------------------");                            /* Cabeçalho */
    printf("*                     TABELA  %d x %d                           *\n", HEIGHT, WIDTH);
    puts("---------------------------------------------------------------");
    
    for(i=0; i < width; i++)                                                                            /* Exibe a numeração das colunas. Ex. C1, C2, CN */
        if(line == 0) printf("       C%d", i + 1);
    putchar('\n');                                                                                  
    
    for(line=0; line < heigth; line++)                                                                  /* Desenha a tabela */
    {
        puts("    -------------------------------------------------------");            
        printf(" L%d", line + 1);
        for(column=0; column < width; column++){
            if(column < width) printf(" |");
            printf("   %3d ", grid[line][column]);

        } /* end for internal */
        puts(" |");

    } /* end for external */

    puts("    -------------------------------------------------------");            

    puts("---------------------------------------------------------------");                            /* Rodapé */
    puts("Informe valores na faixa de 0 a 999");

} /* end draw_grade */


