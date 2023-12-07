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
#include <locale.h>

/* ================================================================================================== */
/* ----- Protótipo das funções ----- */
void add();
void pop();
void push(char data);
void display_stack();
void exit_();
void clear_display();
void pause();

/* ================================================================================================== */
/* ----- Constantes ----- */
#define LVLS 16

/* ================================================================================================== */
/* ----- Variáveis Globais ----- */
char stack[LVLS], *ptr_stack_1 = NULL, *ptr_stack_2 = NULL;
int cnt = 0;

/* ================================================================================================== */
/* ----- Função Principal ----- */
int main(int argc, char *argv[])
{
			    									
    #if _WIN32 
        setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif		

    int opcao;
	
    ptr_stack_1 = stack;
    ptr_stack_2 = stack;
    
    
    for(;;)
    {   
        clear_display();
	
        printf("----------------------------------------------\n");	                     
        printf("%25s\n", "Stack");   
        printf("----------------------------------------------\n");	
        printf(" 1 - Add to stack.\n");
        printf(" 2 - Remove from stack.\n");
        printf(" 3 - Display th stack.\n");
        printf(" 0 - Exit.\n");
    	printf(" >>> ");
    	scanf("%d", &opcao);
        
        switch(opcao)
        {
            case 1:
                add();
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
                printf("\nInvalid option!\n");
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
    char data;
  
  	do
    {
        clear_display();
        
        puts("----------------------------------------------");	                     
        printf("%22s\n", "Add");
        puts("----------------------------------------------");	                     
        printf("Enter the value (0 to return): ");
        /*fflush(stdin);
        data = getchar();*/
        scanf(" %c", &data);
        
        
		if(data == '0') return; 
        
        if(ptr_stack_1 == (ptr_stack_2 + LVLS)) 					/* aqui também testei o cnt == LVLS */
 			printf("\n%26s\n", "Stack overflow");
		else
		{
        	push(data);
        	printf("\n%25s\n", "Added.");
				
    	} /* end else */
    	
    	puts("----------------------------------------------");	    
    	pause();
    	
    }while(1); /* end do..while */
	

} /* end add */


/* ================================================================================================== */
/* ----- Remove da pilha ----- */
void pop()
{
    clear_display();
  
  	if(ptr_stack_1 == ptr_stack_2) 										/* aqui também testei o cnt == 0 */
		printf("\n%25s\n", "Empty stack");
	else
	{
		cnt--;
		*ptr_stack_1 = '\0';
		ptr_stack_1--;
	    
		printf("\n%25s\n", "Removed.");	
		
	} /* end else */
	
	puts("----------------------------------------------");
	pause();	

} /* end pop */


/* ================================================================================================== */
/* ----- Adicona na pilha ----- */
void push(char data)
{  
    *ptr_stack_1 = data;     
    ptr_stack_1++;
    cnt++; 
	 
} /* end push */


/* ================================================================================================== */
/* ----- Exibe a pilha ----- */
void display_stack()
{
    clear_display();
    
    puts("----------------------------------------------");	                     
    printf("%25s\n", "Display");
    puts("----------------------------------------------");	                     
    
    register int i;    
    
    if(ptr_stack_1 == ptr_stack_2) 
		printf("\n%26s\n", "Empty stack");
	else
	{	
	    for(i=cnt - 1; i >= 0; i--)
	    {
	        printf("\n%27s\n", "----------------");
			printf(" Level: %X  |      %c       |  addr: %X", i, stack[i], &stack[i]);
	    
	    } /* end for */
	    printf("\n%27s\n", "----------------");
	    
	} /* end else */
	
	puts("----------------------------------------------");	
    pause();

} /* end display_stack */


/* ================================================================================================== */
/* ----- Encerra o programa ----- */
void exit_()
{
    printf("\n%35s\n", "Closing the program...");	                     
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
        printf("\nPress <ENTER> to continue. ");
        getchar();
        getchar();
    #elif _WIN32 
        system("PAUSE");
    #endif	

} /* end pause */

/* ================================================================================================== */
/* ----- Fim do programa ----- */
