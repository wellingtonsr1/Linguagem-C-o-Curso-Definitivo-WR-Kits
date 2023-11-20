/* =================================================================================================
	M�dulo 7
	Aula 1
	Descri��o: Exerc�cio 1
	Autor: Wellington
	Data: 19/11/2023
	Atualiza��o: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

#define HEIGHT 4
#define WIDTH 6

/* ---------- Prot�tipo das fun��es ---------- */
void draw_grid(unsigned int mat[HEIGHT][WIDTH], int height, int width);


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 
    
    unsigned int grid[HEIGHT][WIDTH] = {{0, 0, 0, 0, 0, 0},                                              /* Declara��o das vari�veis */
                                       {0, 0, 0, 0, 0, 0},
                                       {0, 0, 0, 0, 0, 0},
                                       {0, 0, 0, 0, 0, 0}}, number;
    unsigned char line, column;
    

    draw_grid(grid, HEIGHT, WIDTH);                                                                      /* Primeira chamada da fun��o para desenhar a tabela */
    while(1)                                                                                            /* Entrada de dados */
    {    
        putchar('\n');                                                                                  /* Linha em branco extra */

        printf(">>> Linha : ");
        scanf("%hhd", &line);
    
        printf(">>> Coluna: ");
        scanf("%hhd", &column);
        
        printf(">>> Valor : ");
        scanf("%d", &number);

        if(number < 0 || number > 999)                                                                  /* Verifica se o valor informado est� fora da faixa */
        { 
           puts("\n - Valor fora da faixa!");
 
        } /* end if */
        else                                                                                            /* Verifica se linha e coluna est�o na faixa */
        {
            if((line > 0 && line <= HEIGHT) && (column > 0 && column <= WIDTH))
                grid[line - 1][column - 1] = number;                                                     /* Tudo certo, o valor � inserido na matriz */

            draw_grid(grid, HEIGHT, WIDTH);                                                              /* Chama da fun��o que desenha a tabela */

        } /* end else */

    } /* end while */
              
    /* system("PAUSE");               							                /* Faz uma parada na execu��o do programa */
		
    return 0;		        							                /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


/* ---------- Desenvolvimento das fun��es ---------- */
void draw_grid(unsigned int grid[HEIGHT][WIDTH], int heigth, int width)
{
    register int i, line, column;                                                                       /* Declara��o das vari�veis */ 
    
    system("clear");                                                                                    /* Limpa a tela */

    puts("---------------------------------------------------------------");                            /* Cabe�alho */
    printf("*                     TABELA  %d x %d                           *\n", HEIGHT, WIDTH);
    puts("---------------------------------------------------------------");
    
    for(i=0; i < width; i++)                                                                            /* Exibe a numera��o das colunas. Ex. C1, C2, CN */
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

    puts("---------------------------------------------------------------");                            /* Rodap� */
    puts("Informe valores na faixa de 0 a 999");

} /* end draw_grade */


