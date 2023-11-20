/* =================================================================================================
	Módulo 7 
	Aula 1
	Descrição: Exercício 1
	Autor: Wellington
	Data: 18/11/2023
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


#define TAM_VETOR 6


/*
    Exercício proposto: 
        um processador deve receber diversos bytes e realizar uma conversão criptografada dos mesmos. 
        A criptografia será somar 5 aos elementos pares do vetor e subtrair 3 dos elementos ímpares.

    Exemplo: 
        você entra com os bytes     0xA0, 0x73, 0x25, 0xD3, 0xCA, 0xFE. 
        A função os converterá para 0xA5, 0x70, 0x2A, 0xD0, 0xCF, 0xFB.
    
    Após, desenvolva também uma função para descriptografar estes bytes.

*/


/* ---------- Protótipo das funções ---------- */

unsigned char acao(unsigned char bytes, int i, char op);
void exibe_resultado(unsigned char b_orig[], unsigned char b_cript[], 
                                unsigned char b_desc[], int tam_vetor);


/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_ALL, "Portuguese_Brazil"); */ 

    unsigned char bytes_orig[TAM_VETOR] = {0},                                                          /* Declaração das variáveis */ 
                  bytes_cript[TAM_VETOR] = {0}, 
                  bytes_desc[TAM_VETOR] = {0}, valor;

    register int i;

    puts("----------------------------------------------");                                             /* Cabeçalho */
    puts("             CONVERSAO DE BYTES               ");	                        
    puts("   Ex.: 0xA0, 0x73, 0x25, 0xD3, 0xCA, 0xFE    ");   
    puts("----------------------------------------------");	
    
    for(i=0 ; i < TAM_VETOR; i++)                                                                       /* Entrada de dados */
    {
        printf("Informe o %d valor: ", i + 1);
        scanf("%hhx", &valor);

        bytes_orig[i] = valor;

    } /* end for */
     
    for(i=0; i < TAM_VETOR; i++)                                                                        /* Converte os dados */
    {
        bytes_cript[i] = acao(bytes_orig[i], i, 'c');
        bytes_desc[i] = acao(bytes_cript[i], i, 'd'); 
    
    } /* end for */

    exibe_resultado(bytes_orig, bytes_cript, bytes_desc, TAM_VETOR);                                    /* Exibe o resultado */

    
    puts("----------------------------------------------");         	                                /* Rodapé */
    
    
    /* system("PAUSiE");               							                /* Faz uma parada na execução do programa */
		
    return 0;		        							                /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/* ---------- Desenvolvimento das funções ---------- */

unsigned char acao(unsigned char bytes, int i, char tipo_acao)
{
    unsigned char resultado = 0;                                                                        /* Declaração das variáveis */
 
    switch(tipo_acao)                                                                                   /* Criptogra e descriptografa os dados */
    {
        case 'c':
            (i % 2) ? (resultado = bytes - 3) : (resultado = bytes + 5);
            break;
        case 'd':
            (i % 2) ? (resultado = bytes + 3) : (resultado = bytes - 5);
            break;

    } /* end switch */

    return resultado;

} /* end acao */

void exibe_resultado(unsigned char b_orig[], unsigned char b_cript[], 
                            unsigned char b_desc[], int tam_vetor)
{
    register int i;                                                                                     /* Declaração das variáveis */
    
    putchar('\n');                                                                                      /* Linha em branco extra */

    puts("....................................................");                                       /* Cabeçalho */
    puts("  ORIGINAL      CRIPTOGRAFADO     DESCRIPTOGRAFADO  ");
    puts("....................................................");
    for(i=0; i < tam_vetor; i++)                                                                        /* Mostra na tela */
        printf("   0x%X            Ox%X                 0x%X\n", b_orig[i], b_cript[i], b_desc[i]);
        
} /* end exibe_resultado */
