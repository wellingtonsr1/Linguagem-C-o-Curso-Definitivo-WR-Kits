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
    register int i, j;
 
    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i] == s[i+1])
        {
            for(j=i; s[j] != '\0'; j++)
                s[j] = s[j+1];
            s[j] = '\0';
            i--;      /* ---------------->      Depois de rearranjar a string, o i é decrementado em 1. Ou seja, se i = 0, i fica com -1. 
                                                Se em vez e i--, usar i=0; quando chegar no for, o i vai valer 1.
                                                Sendo assim, não vai tá no início da string, mas na segunda posição.
                                                Po isso, i-- sendo icrementado em 1 no for, ficando i=0 (inicio da string)*/

        } /*end if */
        
    } /* end for external */

    return s;
} /* end my_strpack */

/*======================================================================*/
/* ----- Fim do programa ----- */





