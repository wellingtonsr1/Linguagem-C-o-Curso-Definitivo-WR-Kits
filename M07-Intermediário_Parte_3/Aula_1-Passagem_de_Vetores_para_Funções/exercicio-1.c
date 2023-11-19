/* =================================================================================================
	M�dulo 
	Aula 
	Descri��o: 
	Autor: Wellington
	Data: 
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
unsigned char criptografa(unsigned char b_normal, int i);
unsigned char descriptografa(unsigned char b_modificado, int i);
void exibe_resultado(unsigned char b_normais[], unsigned char b_modificados[], unsigned char b_desc[], int tam_vetor);


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_ALL, "Portuguese_Brazil"); */ 

    unsigned char bytes_normais[TAM_VETOR] = {0}, 
                  bytes_modificados[TAM_VETOR] = {0}, 
                  bytes_desc[TAM_VETOR] = {0}, valor;

    register int i;

    printf("----------------------------------------------\n");	                        /* Cabe�alho */
    printf("     0xA0, 0x73, 0x25, 0xD3, 0xCA, 0xFE       \n");   
    printf("----------------------------------------------\n");	
    
    for(i=0 ; i < TAM_VETOR; i++)
    {
        printf("Informe o %d valor: ", i + 1);
        scanf("%hhx", &valor);

        bytes_normais[i] = valor;

    } /* end for */
     
    for(i=0; i < TAM_VETOR; i++)
        bytes_modificados[i] = acao(bytes_normais[i], i, 'c'); //criptografa(bytes_normais[i], i);

    for(i=0; i < TAM_VETOR; i++)
        bytes_desc[i] = acao(bytes_modificados[i], i, 'd'); //descriptografa(bytes_modificados[i], i);
    
    exibe_resultado(bytes_normais, bytes_modificados, bytes_desc, TAM_VETOR);

    
    printf("----------------------------------------------\n");         	        /* Rodap� */
    
    
    /* system("PAUSE");               							/* Faz uma parada na execu��o do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


/* ---------- Desenvolvimento das fun��es ---------- */

unsigned char criptografa(unsigned char b_normal, int i)
{
    unsigned char b_modificado = 0;

    (i % 2) ? (b_modificado = b_normal - 3) : (b_modificado = b_normal + 5);

    return b_modificado;

} /* end criptografa */


unsigned char descriptografa(unsigned char b_modificado, int i)
{
    unsigned char b_normal = 0;

    (i % 2) ? (b_normal = b_modificado + 3) : (b_normal = b_modificado - 5);

    return b_normal;

} /* end descriptografa */


unsigned char acao(unsigned char bytes, int i, char tipo_acao)
{
    unsigned char result = 0;
 
    switch(tipo_acao)
    {
        case 'c':
            (i % 2) ? (result = bytes - 3) : (result = bytes + 5);
            break;
        case 'd':
            (i % 2) ? (result = bytes + 3) : (result = bytes - 5);
            break;
    }

    return result;

}

void exibe_resultado(unsigned char b_normais[], unsigned char b_modificados[], unsigned char b_desc[], int tam_vetor)
{
    register int i;
    
    putchar('\n');

    puts("....................................................");
    puts("  NORMAL       CRIPTOGRAFADO      DESCRIPTOGTAFADO  ");
    puts("....................................................");
    for(i=0; i < tam_vetor; i++)
        printf("   0x%X            Ox%X                 0x%X\n", b_normais[i], b_modificados[i], b_desc[i]);
        

} /* end exibe_resultado */
