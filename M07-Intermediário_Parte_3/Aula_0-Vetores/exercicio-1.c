/* =================================================================================================
	M�dulo 7
	Aula 0
	Descri��o: Exerc�cio 1
	Autor: Wellington
	Data: 15/11/2023
	Atualiza��o: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

#define TAM_VETOR 5


/* ---------- Macros ---------- */
#define alerta puts(" ...................................."); \
               puts(" *   Atencao! Valor insuficiente    *"); \
               puts(" ....................................") 


/* ---------- Prot�tipo das fun��es ---------- */

void entrada_dados();
void exibir_relatorio(float ativos[], int quantidades[], float subtotal[], float total, int tam_vetor);
void realizar_calculo(int quantidades[], float ativos[], float aporte, int tam_vetor);


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_ALL, "Portuguese_Brazil"); */ 
    
    char opcao;
        
    entrada_dados();                                                                        /* Chama a fun��o que recebe os dados */

    do                                                                                      /* Pergunta se quer terminar o programa ou continuar usando */
    {
        puts("Deseja calcular novamente?");
        printf("(s) sim | (n) nao ==> ");
        scanf(" %c", &opcao);

        switch(opcao)
        {
            case 'n':
            case 'N':
                putchar('\n');
                puts(" - Encerrando o programa...");
                break;
            
            case 's':
            case 'S':
                entrada_dados();
                break;

            default:
                putchar('\n');
                puts(" - Op��o incorreta.");
                putchar('\n');

        } /* end switch */
    
    }while(opcao != 'n' && opcao != 'N'); /* end do...while */
    
    /* system("PAUSE");               							    /* Faz uma parada na execu��o do programa */
		
    return 0;		        							    /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


/* ---------- Desenvolvimento das fun��es ---------- */

void entrada_dados()
{
    register int i;                                                                         /* Declara��o de vari�veis */
    int quantidades[TAM_VETOR]={0}, quantidade=0;                                              
    float total=0.0, ativos[TAM_VETOR]={0.0},
              ativo=0.0, aporte=0.0, total_aporte=0.0;
        
    puts("----------------------------------------------");	                            /* Cabe�alho */
    puts("             Calcula aporte                   ");   
    puts("----------------------------------------------");	
    
    printf(" - Qual o valor do aporte ($) ? ");                                             /* Entrada de dados */
    scanf("%f", &aporte);
        
    putchar('\n');                                                                          /* Linha em branco extra */

    for(i=0; i < TAM_VETOR; i++)                                                            /* Armazena os dados em vetores */
    {
        printf(" - Ativo %d....$: ", i + 1);
        scanf("%f", &ativo);
        ativos[i] = ativo;

        printf(" - Quantidade %d: ", i + 1);
        scanf("%d", &quantidade);
        quantidades[i] = quantidade; 
         
        putchar('\n');                                                                       /* Linha em branco extra */

    } /* end for */

    realizar_calculo(quantidades, ativos, aporte, TAM_VETOR);                               /* Chama a fun��o para imprimir o relat�rio */
       
    puts("----------------------------------------------");                                 /* Rodap� */

} /* end inserir_dados */


void realizar_calculo(int quantidades[], float ativos[], float aporte, int tam_vetor)
{
    register int i;                                                                         /* Declara��o das vari�veis */
    float total=0.0, subtotal[tam_vetor];


    for(i=0; i < tam_vetor; i++)                                                            /* Realiza os c�lculos */
    {
        subtotal[i] = quantidades[i] * ativos[i]; 
        total += subtotal[i];
    
    } /* end for */

    if(aporte < total) 
        alerta;                                                                     /* Compara total com valor do aporte */
    
    putchar('\n');
 
    exibir_relatorio(ativos, quantidades, subtotal, total, tam_vetor);                      /* Chama a fun��o para exibir o relat�rio */
    
} /* end realizar_calculo */


void exibir_relatorio(float ativos[], int quantidades[], float subtotal[], float total, int tam_vetor)
{
    register int i;                                                                                  /* Declara��o das vari�veis */

    puts("                 Relatorio                       ");                               /* Cabe�alho */
    puts(".................................................");
    puts(" Cod.     Ativo($)    Quantidade     Subtotal($) ");
    puts(".................................................");

    for(i=0; i < tam_vetor; i++)                                                             /* Impress�o dos dados */
    {
        /*printf(" Ativo %d....$: %.2f Quantidade %d: %d Subtotal $: %.2f\n", \
                        i + 1, ativos[i], i + 1, quantidades[i], subtotal[i]);*/
        
        printf(" %3d   %9.2f         %3d         %9.2f\n", \
                    i + 1, ativos[i], quantidades[i], subtotal[i]);

    } /* end for */ 

    putchar('\n');
    printf("                             Total $:%9.2f\n", total);
    puts(".................................................");
    putchar('\n');

} /* end exibir_relatorio */
