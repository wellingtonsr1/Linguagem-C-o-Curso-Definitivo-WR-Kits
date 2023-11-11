/* =================================================================================================
	Módulo 4, Parte 3
	Aula 4
	Descrição: 
	Autor: Wellington
	Data: 10/11/2023
	Atualização: --
================================================================================================== */

/*
	https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm
	
	\x82 = é
	\xE3 = ã
	\x87 = ç
	\x88 = ê
	\xA0 = á
	
	ou usar:
	#include <locale.h> 
	setlocale(LC_CTYPE, "Portuguese"); 
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[])
{
									
    int idade=0;                                                                /* Declaração de variáveis */
    char estado_civil;
    
    printf("----------------------------------------------\n");	                /* Cabeçaalho */
    printf("               Estado civil                   \n");   
    printf("----------------------------------------------\n");	
    
    printf("Informe sua idade: ");                                              /* Entrada de dados */
    scanf("%d", &idade);
    
    printf("\n");                                                               /* Linha em branco extra */
    
    printf("Qual seu estado civil? \n");                                        /* Menu */
    printf(" Solteiro   (s/S)\n");                                        
    printf(" Casado     (c/C)\n");                                        
    printf(" Divorciado (d/D)\n");                                        
    printf(" Viuvo      (v/V)\n\n");                                            /* Entrada de dados */
    printf("Informe apenas a inicial: ");
    scanf(" %c", &estado_civil);
    
    printf("\n");                                                               /* Linha em branco extra */
    
    switch(estado_civil)                                                        /* Faz as verificações e exibe o resultado */
    {
        case 's':
        case 'S':
            printf("O individuo tem %d anos e eh solteiro.\n", idade);
        break;

        case 'c':
        case 'C':
            printf("O individuo tem %d anos e eh casado.\n", idade);
        break;

        case 'd':
        case 'D':
            printf("O individuo tem %d anos e eh divorciado.\n", idade);
        break;

        case 'v':
        case 'V':
            printf("O individuo tem %d anos e eh viuvo.\n", idade);
        break;

        default:
            printf("Opcao invalida.\n");

    } /* end switch */       
    
    printf("----------------------------------------------\n");	                    /* Rodapé */
    
    
/*	system("PAUSE"); 	*/			        		    /* Faz uma parada na execução do programa */
		
	return 0;								    /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
