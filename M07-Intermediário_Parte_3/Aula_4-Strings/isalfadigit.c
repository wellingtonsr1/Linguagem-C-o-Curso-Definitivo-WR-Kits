/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*=====================================================================*/
/* ----- Protótipo das funções ----- */

int my_is_alfa_digit(char *s);

/*=====================================================================*/
/* ----- Função Principal ----- */

int main()
{

    char str[] = "a1b2c3";
    printf("%d\n", my_is_alfa_digit(str));	
    if(my_is_alfa_digit("a1b2c3"))
        printf("Verdade\n");
    else
        printf("Falso\n");	
	

    return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das funções ----- */ 

int my_is_alfa_digit(char *s)
{
    register int i;
	
    /*if(!isalpha(s[0])) return 0;

    for(i=1; s[i - 1] != '\0'; i++)
      if(isdigit(s[i - 1])) return 1;*/

    for(i=0; s[i] != '\0'; i++)
    {
        if(i%2 == 0)
            if(!isalpha(s[i])) return 0;
        else
            if(!isdigit(s[i])) return 0;
    } 
    return 1; 


} /* end my_prox_char */

/*=====================================================================*/
/* ----- Fim do programa ----- */





