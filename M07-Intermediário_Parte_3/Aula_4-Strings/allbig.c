/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*=====================================================================*/
/* ----- Prot�tipo das fun��es ----- */

char *my_all_big(char *s);
/*=====================================================================*/
/* ----- Fun��o Principal ----- */

int main()
{

    char str[] = "eRa uMa VEZ";  /* sa�da B9N1 */
	
    printf("Resultado : %s\n", my_all_big(str));	
	
    return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das fun��es ----- */ 

char *my_all_big(char *s)
{
    register int i, j;
	
    /*
    for(i=0; s[i] != '\0'; i++)
    {
        if(!isupper(s[i]))
        { 
            for(j=i; s[j] != '\0'; j++)
                s[j] = s[j +1];
            i--;
        }  
    }  
    return s;
*/
    for(i=j=0; s[i] != '\0'; i++)
        if(isupper(s[i]))
	    s[j++] = s[i];
    s[j]='\0';

    return s;


} /* end my_prox_char */

/*=====================================================================*/
/* ----- Fim do programa ----- */





