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
char stack[LVLS], *stack_1_ptr = NULL, *stack_2_ptr = NULL;
int cnt = 0;

/* ================================================================================================== */
/* ----- Função Principal ----- */
int main(int argc, char *argv[])
{
			    									
    #if _WIN32 
        setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif		

    int opcao;
	
    stack_1_ptr = stack;
    stack_2_ptr = stack;
    
    
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
                printf("\n%35s\n", "Closing the program...");	                     
                exit(0);
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
    long int t; 
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
        
        if(stack_1_ptr == (stack_2_ptr + LVLS)) 					/* aqui também testei o cnt == LVLS */
 	    printf("\n%26s\n", "Stack overflow");
	else
	{
            push(data);
            printf("\n%25s\n", "Added.");
				
    	} /* end else */
    	
        /*	puts("----------------------------------------------");	    
        pause(); */
        for(t=0; t<1E8; t++);       
	
    }while(1); /* end do..while */
	

} /* end add */


/* ================================================================================================== */
/* ----- Remove da pilha ----- */
void pop()
{
    clear_display();
    long int t;
  
    if(stack_1_ptr == stack_2_ptr) 										/* aqui também testei o cnt == 0 */
	printf("\n%25s\n", "Empty stack");
    else
    {
        cnt--;
	*stack_1_ptr = '\0';
	stack_1_ptr--;
	    
	printf("\n%25s\n", "Removed.");	
		
    } /* end else */
	
    puts("----------------------------------------------");
    /*pause(); */	

    for(t=0; t<1E8; t++); 
      	
} /* end pop */


/* ================================================================================================== */
/* ----- Adiciona na pilha ----- */
void push(char data)
{  
    *stack_1_ptr = data;     
    stack_1_ptr++;
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
    
    if(stack_1_ptr == stack_2_ptr) 
        printf("\n%26s\n", "Empty stack");
    else
    {	
        for(i=cnt - 1; i >= 0; i--)
        {
            printf("\n%27s\n", "----------------");
            printf(" Level: %X  |      %c       |  addr: %X",i , *(stack_1_ptr - (cnt - i)), stack_1_ptr - (cnt - i));
	    
	} /* end for */
	printf("\n%27s\n", "----------------");
	    
    } /* end else */
	
    puts("----------------------------------------------");	
    pause();

} /* end display_stack */


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
