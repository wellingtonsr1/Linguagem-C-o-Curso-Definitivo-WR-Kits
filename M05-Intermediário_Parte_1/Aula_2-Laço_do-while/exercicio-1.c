/* =================================================================================================
	M�dulo 5
	Aula 2
	Descri��o: Exerc�cio 1
	Autor: Wellington
	Data: 11/09/2023
	Atualiza��o: --
================================================================================================== */

/*
    Exerc�cio proposto: desenvolva o projeto em C que consiste em um sistema de menus de um
    cadastro de cliente. O sistema deve apresentar as seguintes op��es:
        N para Novo Cliente;
        C para Consultar Clientes;
        D para Deletar Clientes;
        L para Listar Clientes;
        S para Sair.

    A entrada dever� aceitar mai�sculas e min�sculas. Ao acessar o menu, o resultado ser�
    meramente ilustrativo, imprimindo na tela o menu hipot�tico acessado.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_ALL, "Portuguese_Brazil"); */ 

    char opcao;                                                                     /* Declara��o de vari�veis */

    
    do
    {   
        printf("-------------------------------------------\n");                    /* Cabe�alho */
        printf("             Loja ABCD                     \n");   
        printf("-------------------------------------------\n");
        
        printf("\n");                                                               /* Linha em branco extra */
        
        printf(" Novo cliente      (n/N)\n");                                       /* Op��es do menu */        
        printf(" Consultar clintes (c/C)\n");
        printf(" Deletar cliente   (d/D)\n");
        printf(" Listar clientes   (l/L)\n");
        printf(" Sair              (s/S)\n");
        
        printf("\n");                                                               /* linha em branco extra */
        
        printf("Escolha uma opcao: ");                                              /* Entrada do menu */
        scanf(" %c", &opcao);
        
        switch(opcao)                                                               /* Trata as op��es do menu e chama a fun��o escolhida */
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
    
 
    printf("-------------------------------------------\n");         	            /* Rodap� */
        
    /* system("PAUSE"); */               					    /* Faz uma parada na execu��o do programa */
		
    return 0;		        						    /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
