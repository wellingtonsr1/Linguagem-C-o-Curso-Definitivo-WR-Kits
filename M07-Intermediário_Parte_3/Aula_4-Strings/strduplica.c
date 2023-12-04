/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>

/*=====================================================================*/
/* ----- Protótipo das funções ----- */

char *my_str_duplica(char *s);

char *my_str_cat(char *dest, char *orig);
/*=====================================================================*/
/* ----- Função Principal ----- */

int main()
{
	char str[] = "ALFABETO";
	
	printf("Resultado: %s\n", my_str_duplica(str));
	
	
	return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das funções ----- */ 

char *my_str_duplica(char *s)
{
    register int i=0, len = strlen(s);

    for(i=0; i < len; i++)
        s[len + i] = s[i];
    s[len + i] = '\0';

    return s;
	
} /* end my_prox_char */



/*=====================================================================*/
/* ----- Fim do programa ----- */





