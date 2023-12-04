/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>

/*=====================================================================*/
/* ----- Protótipo das funções ----- */

char *my_allspaces(char *s);

/*=====================================================================*/
/* ----- Função Principal ----- */

int main()
{
	char str[] = "ALFABETO";
	
	printf("Resultado          : [%s]\n", my_allspaces(str));
        printf("Tamanho com espacos: %ld\n", strlen(my_allspaces(str)));
	
	
	return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das funções ----- */ 

char *my_allspaces(char *s)
{
    register int i;

    for(i=0; i < strlen(s); i++)
        s[i] = ' ';

    return s;
	
} /* end my_prox_char */


/*=====================================================================*/
/* ----- Fim do programa ----- */





