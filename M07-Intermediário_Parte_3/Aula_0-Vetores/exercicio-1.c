/* =================================================================================================
	Módulo 
	Aula 
	Descrição: 
	Autor: Wellington
	Data: 
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

#define N 5

/* ---------- Protótipo das funções ---------- */
void inserir_dados();


/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_ALL, "Portuguese_Brazil"); */ 
    
    char opcao;
    
    
    inserir_dados();

    do
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
                inserir_dados();
                break;

            default:
                printf("\n - Opção incorreta.\n\n");
    
        } /* end swuitch */
    
    }while(opcao != 'n' && opcao != 'N');
    
    /* system("PAUSE");               							/* Faz uma parada na execução do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/* ---------- Desenvolvimento das funções ---------- */
void inserir_dados()
{

    int i, quantidades[N] = {0}, quantidade=0;
    float total=0.0, subtotal[N]={0.0}, ativos[N] = {0},
              ativo=0.0, aporte=0.0, total_aporte=0.0;
        
    printf("----------------------------------------------\n");	                        /* Cabeçaalho */
    printf("             Calcula aporte                   \n");   
    printf("----------------------------------------------\n");	
    
    printf(" - Qual o valor do aporte ($) ? ");
    scanf("%f", &aporte);
        
    printf("\n");

    for(i=0; i < N; i++)
    {
        printf(" - Ativo %d....$: ", i + 1);
        scanf("%f", &ativo);

        ativos[i] = ativo;

        printf(" - Quantidade %d: ", i + 1);
        scanf("%d", &quantidade);

        quantidades[i] = quantidade; 
        
        subtotal[i] = quantidades[i] * ativos[i]; 
        
        total += subtotal[i];

        printf("\n");

    } /* end for */


    if(aporte < total)
    {
        printf(" - Valor insuficiente\n");
    }   

    for(i=0; i < N; i++)
    {
        printf("Ativo %d....$: %.2f", i + 1, ativos[i]);
        printf(", ");
        printf("Quandidade %d: %d\n", i + 1, quantidades[i]);
    } 

    printf("Total: %.2f\n", total);
    
    printf("----------------------------------------------\n");   

} /* end inserir_dados */

