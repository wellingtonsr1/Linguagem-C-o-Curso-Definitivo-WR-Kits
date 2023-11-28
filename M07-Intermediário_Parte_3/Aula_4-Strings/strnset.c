/*=============================================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <string.h>

/*=============================================================================================*/
/* ----- Prot�tipo das fun��es ----- */

char *my_strnset(char *s, char ch, int n);


/*=============================================================================================*/
/* ----- Fun��o principal ----- */

int main()
{
	char str[] = "Teste", c = '@';
        int n = 87;

	printf("%s", my_strnset(str, c, n));	
	return 0;
	
} /* end main */


/*=============================================================================================*/
/* ----- Desenvolvimento das fun��es ----- */

char *my_strnset(char *s, char ch, int n)
{
	register int i;

        if(n > strlen(s)) n = strlen(s);

	for(i=0; i < n ; i++)
            s[i] = ch;
	
	return s;	
				
} /* end my_strnset */



/*=============================================================================================*/
/* Fim do programa */
