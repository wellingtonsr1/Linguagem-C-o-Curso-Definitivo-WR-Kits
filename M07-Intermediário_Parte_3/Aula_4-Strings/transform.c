/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*=====================================================================*/
/* ----- Protótipo das funções ----- */

char *my_transform(char *s);

/*=====================================================================*/
/* ----- Função Principal ----- */

int main()
{

    char str[] = "abcdefghijk";
    	
    printf("%s\n", my_transform(str)); 
    return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das funções ----- */ 

char *my_transform(char *s)
{
    register int i, len;

/* Ex.: 1
	
    for(i=0; i < (strlen(s) / 2); i++)
        s[i] = tolower(s[i]);
    for(j=i; s[j] != '\0'; j++)
        s[j] = toupper(s[j]);

    return s;
*/


/* Ex.: 2    

    len = strlen(s);
    for(i=0; i < len; i++)
         if(i < len / 2)
            s[i] = tolower(s[i]);
        else
            s[i] = toupper(s[i]);
    
    return s;
*/


/* Ex.: 3 */

    len = strlen(s);
    for(i=0; i < len; i++)
        s[i] = (i < len / 2) ? tolower(s[i]) : toupper(s[i]);

    return s;


} /* end my_prox_char */

/*=====================================================================*/
/* ----- Fim do programa ----- */





