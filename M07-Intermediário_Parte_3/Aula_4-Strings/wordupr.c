/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*=====================================================================*/
/* ----- Protótipo das funções ----- */

char *my_wordupr(char *s);
/*=====================================================================*/
/* ----- Função Principal ----- */

int main()
{

    char str[] = "ERA uma VeZ";  /* saída B9N1 */
	
    printf("Resultado : %s\n", my_wordupr(str));	
	
    return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das funções ----- */ 

char *my_wordupr(char *s)
{
    register int i;
	
    /*
    for(i=0; s[i] != '\0'; i++)   
        s[i] = tolower(s[i]);
    
    for(i=0; s[i] != '\0'; i++)
    {
        if(i == 0) s[i] = toupper(s[i]);
        if(s[i] == ' ') s[i + 1] = toupper(s[i + 1]);
    }
    return s;
    */

    s[0] = toupper(s[0]);
    for(i=1; s[i - 1] != '\0'; i++)
        s[i] = (s[i - 1] == ' ') ? toupper(s[i]) : tolower(s[i]);
    return s;
	
} /* end my_prox_char */

/*=====================================================================*/
/* ----- Fim do programa ----- */





