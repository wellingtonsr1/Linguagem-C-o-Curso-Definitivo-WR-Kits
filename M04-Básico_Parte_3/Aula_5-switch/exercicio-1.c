/* =================================================================================================
	M�dulo 4, Parte 3
	Aula 4
	Descri��o: 
	Autor: Wellington
	Data: 10/11/2023
	Atualiza��o: --
================================================================================================== */

/*
	https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm
	
	\x82 = �
	\xE3 = �
	\x87 = �
	\x88 = �
	\xA0 = �
	
	ou usar:
	#include <locale.h> 
	setlocale(LC_CTYPE, "Portuguese"); 
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    int idade=0;                                                                /* Declara��o de vari�veis */
    char estado_civil;
    
    printf("----------------------------------------------\n");	                /* Cabe�aalho */
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
    
    switch(estado_civil)                                                        /* Faz as verifica��es e exibe o resultado */
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
    
    printf("----------------------------------------------\n");	                    /* Rodap� */
    
    
/*	system("PAUSE"); 	*/			        		    /* Faz uma parada na execu��o do programa */
		
	return 0;								    /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
