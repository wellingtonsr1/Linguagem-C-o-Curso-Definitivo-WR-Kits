/*======================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*======================================================================*/
/* ----- Protótipos das funções ----- */

char *my_entremeador(char *s, int n);


/*======================================================================*/
/* ----- Função principal ----- */

int main()
{
    char str[] = "ABCDEFGHIJLMN";
    int n = 3;
	
    puts("--------------------------------------------------------");
    printf("String informada: %s\n", str);
    printf("String retornada: %s\n", my_entremeador(str, n));
    puts("--------------------------------------------------------");

    return 0;

} /* end main */

 
/*======================================================================*/
/* ----- Desenvolvimento das funções ----- */

char *my_entremeador(char *s, int n)
{
    register int i, j;					/* Declaração das variáaveis */					
 

    for(i=0; s[i] != '\0'; i++) 			/* for para percorrer a string */
        for(j=i; s[j] != '\0'; j++)			/* for para rearranjar a string */ 
            s[j+1] = s[j+n+1];				/* a posição j+1 recebe o valor da posição j+n+1 */
    s[j] = '\0';					/* Colocar o caracter nulo \0 no fim da string*/
    

/* 
	
    int i, j, len = strlen(s);

    if(n == 0) return s;

    for(i=j=0; i < len; i+=n+1)
        s[j++] = s[i];
    s[j] = '\0';
*/

    return s;
} /* end my_entremeador */



/*======================================================================*/
/* ----- Fim do programa ----- */

/*

ABCDEFGHIJLMN com n = 0, retorna ABCDEFGHIJLMN
ABCDEFGHIJLMN com n = 1, retorna ACEGILN
ABCDEFGHIJLMN com n = 3, retorna AEIN

*/



