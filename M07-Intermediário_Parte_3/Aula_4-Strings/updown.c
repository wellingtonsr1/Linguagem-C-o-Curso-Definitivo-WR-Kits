/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*=====================================================================*/
/* ----- Prot�tipo das fun��es ----- */

char *my_up_down(char *s);
/*=====================================================================*/
/* ----- Fun��o Principal ----- */

int main()
{

	char str[] = "ALFABETO";  /* sa�da B9N1 */
	
	printf("Resultado : %s\n", my_up_down(str));
	//printf("Resultado : %s\n", my_strupr(str));
	
	
	return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das fun��es ----- */ 

char *my_up_down(char *s)
{
    register int i;
	
    for(i=0; s[i] != '\0'; i++)
        s[i] = (i % 2 == 0) ? toupper(s[i]) : tolower(s[i]);
    return s;
	
} /* end my_prox_char */

/*=====================================================================*/
/* ----- Fim do programa ----- */





