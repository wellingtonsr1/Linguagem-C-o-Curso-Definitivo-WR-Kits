/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>

/*=====================================================================*/
/* ----- Prot�tipo das fun��es ----- */

char *my_strijet(char *s, char ch, int ini, int term);


/*=====================================================================*/
/* ----- Fun��o Principal ----- */

int main()
{

        int i=4, j=2;
	char str[] = "ALFABETO";
	
	printf("Resultado : %s\n", my_strijet(str, '@', i, j));
	
	
	return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das fun��es ----- */ 

char *my_strijet(char *s, char ch, int ini, int term)
{
    register int i;
    
    ini = (ini < 0) ? 0 : ini;

    for(i=ini; i <= term && i < strlen(s); i++)
        s[i] = ch;

    return s;
	
} /* end my_prox_char */


/*=====================================================================*/
/* ----- Fim do programa ----- */





