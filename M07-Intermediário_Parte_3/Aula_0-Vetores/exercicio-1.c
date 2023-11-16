/* =================================================================================================
	Módulo 7
	Aula 0
	Descrição: Exercício 1
	Autor: Wellington
	Data: 15/11/2023
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

#define N 5


/* ---------- Protótipo das funções ---------- */

void entrada_dados();
void exibir_relatorio(float ativos[], int quantidades[], float subtotal[], float total);
void realizar_calculo(int quantidades[], float ativos[], float aporte);


/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_ALL, "Portuguese_Brazil"); */ 
    
    char opcao;
        
    entrada_dados();                                                                        /* Chama a função que recebe os dados */

    do                                                                                      /* Pergunta se quer terminar o programa ou continuar usando */
    {
        printf("Deseja calcular novamente?\n");
        printf("(s) sim | (n) nao ==> ");
        scanf(" %c", &opcao);

        switch(opcao)
        {
            case 'n':
            case 'N':
                printf("\n - Encerrando o programa...\n");
                break;
            
            case 's':
            case 'S':
                entrada_dados();
                break;

            default:
                printf("\n - Opção incorreta.\n\n");
    
        } /* end switch */
    
    }while(opcao != 'n' && opcao != 'N'); /* end do...while */
    
    /* system("PAUSE");               							                             /* Faz uma parada na execução do programa */
		
    return 0;		        							                                     /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/* ---------- Desenvolvimento das funções ---------- */

void entrada_dados()
{
    register int i;                                                                         /* Declaração de variáveis */
    int quantidades[N] = {0}, quantidade=0;                                              
    float total=0.0, subtotal[N]={0.0}, ativos[N] = {0.0},
              ativo=0.0, aporte=0.0, total_aporte=0.0;
        
    printf("----------------------------------------------\n");	                            /* Cabeçalho */
    printf("             Calcula aporte                   \n");   
    printf("----------------------------------------------\n");	
    
    printf(" - Qual o valor do aporte ($) ? ");                                             /* Entrada de dados */
    scanf("%f", &aporte);
        
    putchar('\n');                                                                           /* Linha em branco extra */

    for(i=0; i < N; i++)                                                                    /* Armazena os dados em vetores */
    {
        printf(" - Ativo %d....$: ", i + 1);
        scanf("%f", &ativo);
        ativos[i] = ativo;

        printf(" - Quantidade %d: ", i + 1);
        scanf("%d", &quantidade);
        quantidades[i] = quantidade; 
         
        putchar('\n');                                                                       /* Linha em branco extra */

    } /* end for */

    realizar_calculo(quantidades, ativos, aporte);                                          /* Chama a função para imprimir o relatório */
       
    printf("\n----------------------------------------------\n");                           /* Rodapé */

} /* end inserir_dados */


void realizar_calculo(int quantidades[], float ativos[], float aporte)
{
    register int i;                                                                         /* Declaração das variáveis */
    float total=0.0, subtotal[N]={0.0};


    for(i=0; i < N; i++)                                                                    /* Realiza os cálculos */
    {
        subtotal[i] = quantidades[i] * ativos[i]; 
        total += subtotal[i];
    
    } /* end for */

    if(aporte < total){                                                                     /* Compara total com valor do aporte */
        printf(" ....................................\n");
        printf("   - Atencao! Valor insuficiente      \n");
        printf(" ....................................\n\n");
    
    } /* end if */
 
    exibir_relatorio(ativos, quantidades, subtotal, total);                                 /* Chama a função para exibir o relatório */
    
} /* end realizar_calculo */


void exibir_relatorio(float ativos[], int quantidades[], float subtotal[], float total)
{
    register int i;                                                                                  /* Declaração das variáveis */

    printf("                Relatorio                      \n");                            /* Cabeçalho */
    printf("...............................................\n");
    printf(" Cod.     Ativo($)     Quantidade    Subtotal($)\n");

    for(i=0; i < N; i++)                                                                    /* Impressão dos dados */
    {
        /*printf(" Ativo %d....$: %.2f Quantidade %d: %d Subtotal $: %.2f\n", \
                        i + 1, ativos[i], i + 1, quantidades[i], subtotal[i]);*/
        
        printf("  %d      %9.2f           %3d      %9.2f\n", \
                    i + 1, ativos[i], quantidades[i], subtotal[i]);

    } /* end for */ 
    printf("                            Total $: %9.2f\n", total);
    printf("...............................................\n\n");                          /* Rodapé */

} /* end exibir_relatorio */
