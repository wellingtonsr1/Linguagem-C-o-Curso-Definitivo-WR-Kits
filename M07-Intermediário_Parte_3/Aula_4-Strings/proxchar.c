/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>

/*=====================================================================*/
/* ----- Protótipo das funções ----- */

char *my_prox_char(char *s);


/*=====================================================================*/
/* ----- Função Principal ----- */

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	char str[] = "A8M0";  /* saída B9N1 */
	
		printf("Resultado %s\n", my_prox_char(str));
	return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das funções ----- */ 

char *my_prox_char(char *s)
{
	register int i;
	
	for(i=0; s[i] != '\0'; i++)
		s[i] = s[i] + 1;
		
	s[i] = '\0';

	return s;
} /* end my_prox_char */


/*=====================================================================*/
/* ----- Fim do programa ----- */





