/* =================================================================================================
	Módulo 5
	Aula 2
	Descrição: Exercício 1
	Autor: Wellington
	Data: 11/09/2023
	Atualização: --
================================================================================================== */

/*
    Exercício proposto: desenvolva o projeto em C que consiste em um sistema de menus de um
    cadastro de cliente. O sistema deve apresentar as seguintes opções:
        N para Novo Cliente;
        C para Consultar Clientes;
        D para Deletar Clientes;
        L para Listar Clientes;
        S para Sair.

    A entrada deverá aceitar maiúsculas e minúsculas. Ao acessar o menu, o resultado será
    meramente ilustrativo, imprimindo na tela o menu hipotético acessado.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_ALL, "Portuguese_Brazil"); */ 

    char opcao;                                                                     /* Declaração de variáveis */

    
    do
    {   
        printf("-------------------------------------------\n");                    /* Cabeçalho */
        printf("             Loja ABCD                     \n");   
        printf("-------------------------------------------\n");
        
        printf("\n");                                                               /* Linha em branco extra */
        
        printf(" Novo cliente      (n/N)\n");                                       /* Opções do menu */        
        printf(" Consultar clintes (c/C)\n");
        printf(" Deletar cliente   (d/D)\n");
        printf(" Listar clientes   (l/L)\n");
        printf(" Sair              (s/S)\n");
        
        printf("\n");                                                               /* linha em branco extra */
        
        printf("Escolha uma opcao: ");                                              /* Entrada do menu */
        scanf(" %c", &opcao);
        
        switch(opcao)                                                               /* Trata as opções do menu e chama a função escolhida */
        {
            case 'n':
            case 'N':
                system("CLS");

                printf("-------------------------------------------\n");
                printf("            Novo cliente                   \n");
                printf("-------------------------------------------\n");
                printf(" Cliente cadastrado com sucesso!           \n");
            break;

            case 'c':
            case 'C':
                system("CLS");

                printf("-------------------------------------------\n");
                printf("         Consultar cliente                 \n");
                printf("-------------------------------------------\n");
                printf(" Cliente nao encontrado!                   \n");
            break;

            case 'd':
            case 'D':
                system("CLS");
                
                printf("-------------------------------------------\n");
                printf("           Deletar cliente                 \n");
                printf("-------------------------------------------\n");
                printf(" Cliente excluido com sucesso!             \n");
            break;

            case 'l':
            case 'L':
                system("CLS");
                
                printf("-------------------------------------------\n");
                printf("          Listar clientes                  \n");
                printf("-------------------------------------------\n");
                printf(" Cliente 1                                 \n");
                printf(" Cliente 2                                 \n");
                printf(" Cliente 3                                 \n");
                printf(" Cliente N                                 \n");
            break;
            
            case 's':
            case 'S':
                printf("-------------------------------------------\n");

                printf("\n");

                printf("Encerrando o programa...\n");
            break;

            default:
                printf("-------------------------------------------\n");
                
                printf("\n");
                
                printf("Opcao invalida.\n");

        } /* end switch */

    }while(opcao != 's' && opcao != 'S'); /* end do...while */
    
 
    printf("-------------------------------------------\n");         	            /* Rodapé */
        
    /* system("PAUSE"); */               					    /* Faz uma parada na execução do programa */
		
    return 0;		        						    /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
