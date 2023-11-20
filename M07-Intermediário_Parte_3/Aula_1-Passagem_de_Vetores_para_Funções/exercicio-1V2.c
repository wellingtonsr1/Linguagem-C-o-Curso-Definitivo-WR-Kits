/* =================================================================================================
	M�dulo 7 
	Aula 1
	Descri��o: Exerc�cio 1
	Autor: Wellington
	Data: 18/11/2023
	Atualiza��o: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


#define TAM_VETOR 6


/*
    Exerc�cio proposto: 
        um processador deve receber diversos bytes e realizar uma convers�o criptografada dos mesmos. 
        A criptografia ser� somar 5 aos elementos pares do vetor e subtrair 3 dos elementos �mpares.

    Exemplo: 
        voc� entra com os bytes     0xA0, 0x73, 0x25, 0xD3, 0xCA, 0xFE. 
        A fun��o os converter� para 0xA5, 0x70, 0x2A, 0xD0, 0xCF, 0xFB.
    
    Ap�s, desenvolva tamb�m uma fun��o para descriptografar estes bytes.

*/


/* ---------- Prot�tipo das fun��es ---------- */

unsigned char acao(unsigned char bytes, int i, char op);
void exibe_resultado(unsigned char b_orig[], unsigned char b_cript[], 
                                unsigned char b_desc[], int tam_vetor);


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_ALL, "Portuguese_Brazil"); */ 

    unsigned char bytes_orig[TAM_VETOR] = {0},                                                          /* Declara��o das vari�veis */ 
                  bytes_cript[TAM_VETOR] = {0}, 
                  bytes_desc[TAM_VETOR] = {0}, valor;

    register int i;

    puts("----------------------------------------------");                                             /* Cabe�alho */
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

    
    puts("----------------------------------------------");         	                                /* Rodap� */
    
    
    /* system("PAUSiE");               							                /* Faz uma parada na execu��o do programa */
		
    return 0;		        							                /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


/* ---------- Desenvolvimento das fun��es ---------- */

unsigned char acao(unsigned char bytes, int i, char tipo_acao)
{
    unsigned char resultado = 0;                                                                        /* Declara��o das vari�veis */
 
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
    register int i;                                                                                     /* Declara��o das vari�veis */
    
    putchar('\n');                                                                                      /* Linha em branco extra */

    puts("....................................................");                                       /* Cabe�alho */
    puts("  ORIGINAL      CRIPTOGRAFADO     DESCRIPTOGRAFADO  ");
    puts("....................................................");
    for(i=0; i < tam_vetor; i++)                                                                        /* Mostra na tela */
        printf("   0x%X            Ox%X                 0x%X\n", b_orig[i], b_cript[i], b_desc[i]);
        
} /* end exibe_resultado */
