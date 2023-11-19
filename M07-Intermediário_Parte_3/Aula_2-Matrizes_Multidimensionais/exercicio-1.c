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

#define HEIGHT 4
#define WIDTH 6


void draw_grid(unsigned int mat[HEIGHT][WIDTH], int height, int width);


/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 
    
    unsigned int mat[HEIGHT][WIDTH] = {{0, 0, 0, 0, 0, 0},
                                       {0, 0, 0, 0, 0, 0},
                                       {0, 0, 0, 0, 0, 0},
                                       {0, 0, 0, 0, 0, 0}}, number;
    unsigned char line, column;
    

    draw_grid(mat, HEIGHT, WIDTH);  
    while(1) 
    {    
        putchar('\n');

        printf(">>> Linha : ");
        scanf("%hhd", &line);
    
        printf(">>> Coluna: ");
        scanf("%hhd", &column);
        
        printf(">>> Valor : ");
        scanf("%d", &number);

        if(number < 0 || number > 999)
        { 
           puts("\n - Valor fora da faixa!");
 
        } /* end if */
        else
        {
            if(!(line > HEIGHT || column > WIDTH))
                mat[line - 1][column - 1] = number;

            draw_grid(mat, HEIGHT, WIDTH);

        } /* end else */

    } /* end while */
              
    /* system("PAUSE");               							/* Faz uma parada na execução do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


void draw_grid(unsigned int mat[HEIGHT][WIDTH], int heigth, int width)
{
    register int i, line, column;
    
    system("clear");

    puts("---------------------------------------------------------------");
    printf("*                     TABELA  %d x %d                           *\n", HEIGHT, WIDTH);
    puts("---------------------------------------------------------------");
    
    for(i=0; i < width; i++)
        if(line == 0) printf("       C%d", i + 1);
    putchar('\n');
    
    for(line=0; line < heigth; line++)
    {
        puts("    -------------------------------------------------------");            
        printf(" L%d", line + 1);
        for(column=0; column < width; column++){
            if(column < width) printf(" |");
            printf("   %3d ", mat[line][column]);

        } /* end for internal */
        puts(" |");

    } /* end for external */

    puts("    -------------------------------------------------------");            

    puts("---------------------------------------------------------------");
    puts("Informe valores na faixa de 0 a 999 (00 para sair)");

} /* end draw_grade */


