/* =================================================================================================
	Módulo 8
	Aula 5
	Descrição: Exercício 2
	Autor: Wellington
	Data: 06/12/2023
	Atualização: --
================================================================================================== */

/*

Exercício proposto: projete uma pilha de memória em C que contenha 16 níveis, onde cada nível irá armazenar um byte. 
Para mostrar a pilha, os endereços e dados devem ser apresentados no formato hexadecimal.

*/


/* ================================================================================================== */
/* ----- Bibliotecas ----- */
#include <stdio.h>
#include <stdlib.h>


/* ================================================================================================== */
/* ----- Protótipo das funções ----- */
void add();
int pop();
void push();
void display_stack();


/* ================================================================================================== */
/* ----- Constantes ----- */
#define LVLS 5

/* ================================================================================================== */
/* ----- Variáveis Globais ----- */



/* ================================================================================================== */
/* ----- Função Principal ----- */
int main(int argc, char *argv[])
{
									
   
									
    #if _WIN32 
		setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif		

	int i, j, lvls=0, lvl=0;
	unsigned char values[16];
	
    printf("----------------------------------------------\n");	                     
    printf("%25s\n", "Exercicio 1");   
    printf("----------------------------------------------\n");	
    
    //for(i=0; i < LVLS; i++)
    //{
    	
	//} /* end for */
    	
    for(;;)
    {
    	printf("Entre com o valor: ");
    	scanf(" %c", &values[lvls]);
    	
    	lvls += 1;
    	
	    for(i=lvls - 1; i >= 0; i--)
	    {
	    	printf("\n          ----------------\n");
	    	printf("Level: %2d |      %c       | addr: %X", i + 1, values[i], &values[i]);
	    	
		} /* end for */
		
	    printf("\n          ----------------\n");
	    
	    //printf("Level: ");
	    //scanf("%d", &lvl);
	    
	    lvls -= lvl;
	    
	    putchar('\n');
	    
	    printf("----------------------------------------------\n");  
	    
	} /* end loop for */
	
	
    #if _WIN32
    	system("PAUSE"); 
    #endif              							                                                       /* Faz uma parada na execução do programa */ 
		
    return 0;		        							                                                   /* Retorna '0' se tudo ocorrer bem na execução */

	
}  /* end main */


/* ================================================================================================== */
/* -----Desenvolvimento das funções ----- */
void add()
{
	
} /* end add */

int pop()
{
	return 0;	
} /* end pop */

void push()
{
	
} /* end push */

void display_stack()
{
	
} /* end dispplaay_stack */

/* ================================================================================================== */
/* ----- Fim do programa ----- */
