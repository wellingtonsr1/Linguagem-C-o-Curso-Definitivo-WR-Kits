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
#include <string.h>

/* ================================================================================================== */
/* ----- Protótipo das funções ----- */
void add();
int pop();
void push(int data);
void display_stack();
void exit_();
void clear_display();
void pause();

/* ================================================================================================== */
/* ----- Constantes ----- */
#define LVL 16

/* ================================================================================================== */
/* ----- Variáveis Globais ----- */
int stack[LVL];
int *ptr_stack = NULL;
int cnt = 0;

/* ================================================================================================== */
/* ----- Função Principal ----- */
int main(int argc, char *argv[])
{
			    									
    #if _WIN32 
        setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif		

    int opcao;
    ptr_stack = stack;
    int data;
    for(;;)
    {   
        clear_display();
	
        printf("----------------------------------------------\n");	                     
        printf("%25s\n", "Stack");   
        printf("----------------------------------------------\n");	
        printf(" 1 - Adicionar na pilha.\n");
        printf(" 2 - Remover da pilha.\n");
        printf(" 3 - Exibir a pilha.\n");
        printf(" 0 - Sair.\n");
    	printf(" >>> ");
    	scanf("%d", &opcao);
        
        switch(opcao)
        {
            case 1:
                add();
                /*printf("Dado: ");
                scanf("%d", &data);
                push(data);*/
                break;    
            case 2:
                pop();
                break;
            case 3:
                display_stack();
                break;
            case 0:
                exit_();
                break;
            default:
                printf("\nOpcao invalida!\n");
                pause();
        }	
        printf("\n----------------------------------------------\n");  
	    
    } /* end loop for */
		
    pause();                                                          /* Faz uma parada na execução do programa */ 
    
    return 0;                                                   /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/* ================================================================================================== */
/* -----Desenvolvimento das funções ----- */


/* ================================================================================================== */
/* ----- Recebe os valores ----- */
void add()
{
    int data;
    //static int idx=0;
    
    do
    {
        clear_display();
        puts("----------------------------------------------");	                     
        printf("%25s", "Adicionar\n");
        puts("----------------------------------------------");	                     
        printf("Entre com o valor (0 para voltar.): ");
        scanf("%d", &data);
        
        if(!data) break; 
        
        push(data);
        printf("\nAdicionado.\n");	
        pause();
        
    }while(1);	

} /* end add */


/* ================================================================================================== */
/* ----- Remove da pilha ----- */
int pop()
{
    clear_display();
    puts("----------------------------------------------");	                     
    printf("%25s", "Remover\n");
    puts("----------------------------------------------");	                     
	
    return 0;	

} /* end pop */


/* ================================================================================================== */
/* ----- Adicona na pilha ----- */
void push(int data)
{
    //clear_display();
    
    cnt++;    
    *ptr_stack = data;
    //display_stack(cnt);       

    ptr_stack++;
} /* end push */


/* ================================================================================================== */
/* ----- Exibe a pilha ----- */
void display_stack()
{
    clear_display();
    puts("----------------------------------------------");	                     
    printf("%25s", "Exibir\n");
    puts("----------------------------------------------");	                     
    
    register int i;    
     	
    for(i=cnt - 1; i >= 0; i--)
    {
        printf("\n          ----------------\n");
	printf("Level: %2d |      %2d      | addr: %X", i + 1, stack[i], &stack[i]);
    
    } /* end for */
    printf("\n          ----------------\n");
    
    pause();

} /* end display_stack */


/* ================================================================================================== */
/* ----- Encerra o programa ----- */
void exit_()
{
    printf("\nEncerrando o programa...\n");	                     
    exit(0);                   
	
} /* end _exit */


/* ================================================================================================== */
/* ----- Limpa a tela ----- */
void clear_display()
{
    #if __linux__
        system("clear");
    #elif _WIN32 
        system("cls");
    #endif	

} /* end clear_display */


/* ================================================================================================== */
/* ----- Pausa a tela ----- */
void pause()
{
    #if __linux__
        printf("\nPressione <ENTER> para continuar. ");
        getchar();
        getchar();
    #elif _WIN32 
        system("PAUSE");
    #endif	

} /* end pause */

/* ================================================================================================== */
/* ----- Fim do programa ----- */
