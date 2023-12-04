/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*=====================================================================*/
/* ----- Protótipo das funções ----- */

char *my_atoi(char *s);

/*=====================================================================*/
/* ----- Função Principal ----- */

int main()
{

    char str[] = "ALFABETO32";  /* saída B9N1 */
	
    printf("Resultado : %s ", my_atoi(str));
	
    return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das funções ----- */ 

char *my_atoi(char *s)
{
    register int i, d;
    
    for(i=0; s[i] != '\0'; i++)
    {    
        if(isdigit(s[i]))
            //putchar(s[i]);
            s[i+1] = s[i];
        return s;
    }
} /* end my_prox_char */

/*=====================================================================*/
/* ----- Fim do programa ----- */





