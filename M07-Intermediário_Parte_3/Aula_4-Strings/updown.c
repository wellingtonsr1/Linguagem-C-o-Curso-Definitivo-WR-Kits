/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>

/*=====================================================================*/
/* ----- Protótipo das funções ----- */

char *my_up_down(char *s);
char *my_strlwr(char *s);
char *my_strupr(char *s);
/*=====================================================================*/
/* ----- Função Principal ----- */

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	char str[] = "ALFABETO";  /* saída B9N1 */
	
	printf("Resultado : %s\n", my_up_down(str));
	//printf("Resultado : %s\n", my_strupr(str));
	
	
	return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das funções ----- */ 

char *my_up_down(char *s)
{
	register int i;
	
	
	for(i=0; s[i] != '\0'; i++)
	{
    	if(s[i] >= 65 && s[i] <= 90) 
			s[i] += 32;
		else if(s[i] >= 97 && s[i] <= 122) 
			s[i] -= 32;	
	}
	return s;
	
} /* end my_prox_char */


char *my_strlwr(char *s)
{
	register int i;

	for(i=0; s[i] != '\0'; i++)
	{
    	if(s[i] >= 65 && s[i] <= 90) 
			s[i] += 32;
		else if(s[i] >= 97 && s[i] <= 122) 
			s[i] -= 32;	
	}
	return s;
	
} /* end my_strlwr */


char *my_strupr(char *s)
{
	register int i;

	for(i=0; s[i] != '\0'; i++)
    	if(s[i] >= 97 && s[i] <= 122) s[i] -= 32;
	
	return s;	
				
} /* end my_strupr */


/*=====================================================================*/
/* ----- Fim do programa ----- */





