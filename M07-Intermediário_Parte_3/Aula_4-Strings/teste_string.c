/* =================================================================================================
	Módulo 
	Aula 
	Descrição: 
	Autor: Wellington
	Datai 
	Atualização: --
================================================================================================== */



/*================================================================================================== */
/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <string.h>


#define DIM 10
/*================================================================================================== */
/* ---------- Protótipo das funções ---------- */

int strlength(char str[]);
char *strcopy(char str_ori[], char str_des[]);
char *strconcat(char str[]);
char *strinvert(char str_ori[], char str_inv[]);



/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 

    char s[] = "Wellington";
    char s_new[DIM];
    
    //printf("A string %s tem %d de tamanho\n", s, strlength(s)); 
    /* printf("O vetor %s tem %d de tamanho\n", s, sizeof(s)); */
    
    /* printf("\nString copiada: %s.\n", strcopy(s, s_new)); */
    
    printf("\nString original %s --> String invertida %s\n", s, strinvert(s, s_new));

    
   /* system("PAUSE"); */              							/* Faz uma parada na execução do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/*================================================================================================== */
/* ---------- Desenvolvimento das funções ---------- */

int strlength(char str[])
{
    register int i=0;

    while(str[i] != '\0')
        i++;
    
    return i;

} /* end strlength */ 


char *strcopy(char str_ori[], char str_des[])
{
    register int i=0;

    while(str_ori[i] != '\0')
    {
        str_des[i] = str_ori[i];
        i++;
    }
    str_des[i] = '\0';

    return str_des;
} /* end strcopy */



char *strinvert(char str_ori[], char str_inv[])
{
    register int i=0;
    int _length = strlength(str_ori);
    char s[];
   
    while(str_ori[i] != '\0')
    {
        s[i] = str_ori[_length - 1];
        i++;
        _length--;
    }
    s[i] = '\0';

    return s;

} /* end strinvert */















/*================================================================================================== */
/* ---------- Fim do programa ---------- */
