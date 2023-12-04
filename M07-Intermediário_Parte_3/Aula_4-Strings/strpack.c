/*======================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <stdlib.h>


/*======================================================================*/
/* ----- Prot�tipos das fun��es ----- */

char *my_strpack(char *s);


/*======================================================================*/
/* ----- Fun��o principal ----- */

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
/* ----- Desenvolvimento das fun��es ----- */

char *my_strpack(char *s)
{
    register int i, j;							/* Declara��o da vari�veis */
 
    for(i=0; s[i] != '\0'; i++)					/* Percorrer a string at� encontrar o caracter nulo: \0 */
    {
        if(s[i] == s[i+1])						/* Se o caracter na posi��o i for igual ao i + 1, entra no for interno */
        {
            for(j=i; s[j] != '\0'; j++)			/* for para reorganizar a string */
                s[j] = s[j+1];					/* a posi��o atual recebe o valor da posi��o seguinte */
            s[j] = '\0';						/* Colocar o caracter nulo na �ltima posi��o da string */
            i--;      /* ---------------->      Depois de rearranjar a string, o i � decrementado em 1. Ou seja, se i = 0, i fica com -1. 
                                                Se em vez e i--, usar i=0; quando chegar no for, o i vai valer 1.
                                                Sendo assim, n�o vai t� no in�cio da string, mas na segunda posi��o.
                                                Po isso, i-- sendo icrementado em 1 no for, ficando i=0 (inicio da string)*/

        } /* end if */
        
    } /* end for external */

    return s;
    
} /* end my_strpack */

/*======================================================================*/
/* ----- Fim do programa ----- */





