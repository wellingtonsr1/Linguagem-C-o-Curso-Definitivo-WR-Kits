/* =================================================================================================
	Módulo 6 
	Aula 0
	Descrição: Exercício 1 
	Autor: Wellington
	Data: 12/11/2023
	Atualização: --
================================================================================================== */

/*
    Exercício proposto: desenvolva uma função em C para imprimir na tela a mensagem do
    Box 8 quando a entrada do usuário for o número 3.

    +++++++++++++++++
    |               |
    |               |
    | N U M E R O 3 |
    |               |
    |               |
    +++++++++++++++++

    Box 8 - Saída para quando digitado o número 3.
    Desenvolva uma segunda função que terá a mensagem do Box 9, sempre que o usuário
    entrar com o número 7.
    +++++++++++++++++
    |               |
    |               |
    | N U M E R O 7 |
    |               |
    |               |
    +++++++++++++++++
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* --------------- Protótipos das funções ---------------- */ 
void display_box(int n);



/* Função Principal */
int main(int argc, char *argv[])
{								
    setlocale(LC_CTYPE, "Portuguese"); 

    int number=0;                                                                    /* Declaração de variáveis */

    do
    { 
        printf("----------------------------------------------\n");	                 /* Cabeçaalho */
        printf("               Imprime box                    \n");   
        printf("----------------------------------------------\n");	
        
        printf("Digite um número de 1 a 9 (0 para sair): ");                        /* Entrada de dados */
        scanf("%d", &number);    
        
        printf("\n");                                                               /* Linha em branco extra */

        switch(number)                                                              /* Processa a entrada */
        {
            case 1: display_box(number); break;
            case 2: display_box(number); break;
            case 3: display_box(number); break;
            case 4: display_box(number); break;
            case 5: display_box(number); break;
            case 6: display_box(number); break;
            case 7: display_box(number); break;
            case 8: display_box(number); break;
            case 9: display_box(number); break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
                
            default:
                printf("Valor inválido\n");
				
        } /* end switch */
        printf("\n");                                                                /* Linha em branco extra */
		
		
    }while(number);/* end do..while */
	
	
    
    printf("----------------------------------------------\n");                      /* Rodapé */
    
    
    system("PAUSE");                				                                 /* Faz uma parada na execução do programa */
		
    return 0;		        					                                     /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/* --------------- Desenvolvimento das funções ---------------- */ 

void display_box(int n)
{  
    int linha, coluna, altura=5, largura=17;                                         /* Declaração das variáveis */
    
    /* ---------- Trecho onde é desenhado o box ---------- */        
    for(linha=0; linha  < altura; linha++)  	
    {
        for(coluna=0; coluna < largura; coluna++)
    	{
    	    if(linha == 0 || linha == altura - 1) printf("+");                       /* Desenha as bordas superior e inferior */
            
            if(linha >= 1 && linha <= 3){                                            /* Desenha as demais linhas (2 a 3) */
                if(linha == 2)
                {
                    printf("| N Ú M E R O %d |", n);                                 /* Imprime o texto com o número informado */
                    break;

                } /* end if internal */
                
                coluna == 0 || coluna == largura - 1 ? printf("|") : printf(" ");    /* Desenha a coluna da esquerda e direita */
                    
            } /* end if external */
			
		} /* end for internal */
		printf("\n");
	
    } /* end for external */        
    /* ------------------- end trecho -------------------- */

} /* end display_box */

