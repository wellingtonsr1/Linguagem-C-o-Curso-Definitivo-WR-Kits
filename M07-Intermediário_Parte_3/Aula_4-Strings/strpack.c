/*======================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <stdlib.h>


/*======================================================================*/
/* ----- Protótipos das funções ----- */

char *my_strpack(char *s);


/*======================================================================*/
/* ----- Função principal ----- */

int main()
{
    char str[] = "aaaaaaaaaaaaaaaaaaaaaaaaaarrrrrrrrrrrrrrrrrrrrrrrrrrrrrttttttttttttttttttttttttteeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeees";

    puts("--------------------------------------------------------");
    printf("String informada: %s\n", str);
    printf("String retornada: %s\n", my_strpack(str));
    puts("--------------------------------------------------------");

    return 0;

} /* end main */


/*======================================================================*/
/* ----- Desenvolvimento das funções ----- */

char *my_strpack(char *s)
{
    register int i, j;							/* Declaração da variáveis */
 
    for(i=0; s[i] != '\0'; i++)					/* Percorrer a string até encontrar o caracter nulo: \0 */
    {
        if(s[i] == s[i+1])						/* Se o caracter na posição i for igual ao i + 1, entra no for interno */
        {
            for(j=i; s[j] != '\0'; j++)			/* for para reorganizar a string */
                s[j] = s[j+1];					/* a posição atual recebe o valor da posição seguinte */
            s[j] = '\0';						/* Colocar o caracter nulo na última posição da string */
            i--;      /* ---------------->      Depois de rearranjar a string, o i é decrementado em 1. Ou seja, se i = 0, i fica com -1. 
                                                Se em vez e i--, usar i=0; quando chegar no for, o i vai valer 1.
                                                Sendo assim, não vai tá no início da string, mas na segunda posição.
                                                Po isso, i-- sendo icrementado em 1 no for, ficando i=0 (inicio da string)*/

        } /* end if */
        
    } /* end for external */

    return s;
    
} /* end my_strpack */

/*======================================================================*/
/* ----- Fim do programa ----- */





