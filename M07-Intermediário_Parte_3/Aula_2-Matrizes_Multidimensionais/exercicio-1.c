/* ======================================================================================
	M�dulo 7
	Aula 1
	Descri��o: Exerc�cio 1
	Autor: Wellington
	Data: 19/11/2023
	Atualiza��o: --
========================================================================================= */



/* ====================================================================================== */
/* ---------- Bibliotecas ---------- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

#define HEIGHT 4
#define WIDTH 6


/* ====================================================================================== */
/* ---------- Prot�tipo das fun��es ---------- */

void draw_grid(unsigned int mat[HEIGHT][WIDTH], int height, int width);



/* ====================================================================================== */

/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_CTYPE, "Portuguese"); 																 /* Configura a exibi��o de caracteres acentuados */
    
    unsigned int grid[HEIGHT][WIDTH] = {{0, 0, 0, 0, 0, 0},                                          /* Declara��o das vari�veis */
                                        {0, 0, 0, 0, 0, 0},
                                        {0, 0, 0, 0, 0, 0},
                                        {0, 0, 0, 0, 0, 0}}, 
										number, line, column;
    

    draw_grid(grid, HEIGHT, WIDTH);                                                                  /* Primeira chamada da fun��o para desenhar a tabela zerada */
    while(1)                                                                                         /* Entrada de dados */
    {    
        putchar('\n');                                                                               /* Linha em branco extra */

        printf(">>> Linha : ");																		 /* Recebe o n�mero da linha*/
        scanf("%d", &line);
    	
        printf(">>> Coluna: ");																		 /* Recebe o n�mero da coluna*/
        scanf("%d", &column);
       
        printf(">>> Valor : ");																	     /* Recebe o valor que ser� armazendo na mamtriz */
        scanf("%d", &number);

        if(number < 0 || number > 999)                                                               /* Se valor informado estiver fora da faixa, ser� mostrada uma mensagem */
        { 
           puts("\n - Valor fora da faixa!");													     /* Mensagem que ser� exibida se valor estiver fora da faixa */
 
        } /* end if */
        else                                                                                         
        {
            if((line > 0 && line <= HEIGHT) && (column > 0 && column <= WIDTH))						 /* Verifica se linha e coluna est�o na faixa */
            	grid[line- 1][column - 1] = number;                                                  /* Se estiver tudo certo, o valor � inserido na matriz */

            draw_grid(grid, HEIGHT, WIDTH);                                                          /* Chama da fun��o que desenha a tabela para mostrar o novo valor,
																										ou apenass mostra os valores atuais */
        } /* end else */

    } /* end while */
              
    system("PAUSE");               							                                         /* Faz uma parada na execu��o do programa */
		
    return 0;		        							                                             /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */



/* ====================================================================================== */
/* ---------- Desenvolvimento das fun��es ---------- */


/* Desenha a tabela */
void draw_grid(unsigned int grid[HEIGHT][WIDTH], int heigth, int width)
{
    register int i, line, column;                                                                    /* Declara��o das vari�veis */ 
    
    system("CLS");                                                                                   /* Limpa a tela no windows (Linux usa o 'clear')*/

    puts("---------------------------------------------------------------");                         /* Cabe�alho */
    printf("*                     TABELA  %d x %d                           *\n", HEIGHT, WIDTH);	 /* Mosta a quantidade de linhas e colunas */
    puts("---------------------------------------------------------------");
    
    for(i=0; i < width; i++)                                                                         /* Exibe a numera��o das colunas. Ex. C1, C2, CN */
        if(i + 1 <= width) printf("       C%d", i + 1);												 /* Se o valor de linha for menor ou igual ao valor m�ximo da coluna, � impresso C1, C2, etc*/
    putchar('\n');                                                                                  
    
    for(line=0; line < heigth; line++)                                                               /* Desenha a tabela */
    {
        puts("    -------------------------------------------------------");       					 /* No in�cio, � impressa uma linha pontilhada.*/     
        printf(" L%d", line + 1);																	 /* Imprime L1, L2, L3, LN a cada linha */
        for(column=0; column < width; column++){													 
            if(column < width) printf(" |");														 /* Se coluna for menor que o tamanho m�ximo da coluna, imprime o "|" */
            printf("   %3d ", grid[line][column]);													 /* Imprime os valores da coluna */

        } /* end for internal */
        puts(" |");																					 /* No fina de cada valor da coluna � impressa uma "|" */

    } /* end for external */

    puts("    -------------------------------------------------------");  							 /* Imprime uma linha pontilhada depois de cada impress�o de linha da matriz */          

    puts("---------------------------------------------------------------");                         /* Rodap� */
    puts("Informe valores na faixa de 0 a 999");

} /* end draw_grade */


/* ====================================================================================== */
/* ---------- Fim do programa ---------- */

