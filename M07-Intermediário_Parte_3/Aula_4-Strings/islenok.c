/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*=====================================================================*/
/* ----- Prot�tipo das fun��es ----- */

int my_is_len_ok(char *s, int n);

/*=====================================================================*/
/* ----- Fun��o Principal ----- */

int main()
{

    char str[] = "eRa  uMa VEZ";  /* sa�da B9N1 */
	
    if(my_is_len_ok("OLA", 3))
        printf("Verdade\n");
    else
        printf("Falso\n");	
	

    return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das fun��es ----- */ 

int my_is_len_ok(char *s, int len)
{
    register int i, r, count=0;
	
    //for(i=0; s[i] != '\0'; i++)
      //  count++;    
    
    return r = (strlen(s) == len) ? 1 : 0;

} /* end my_prox_char */

/*=====================================================================*/
/* ----- Fim do programa ----- */





