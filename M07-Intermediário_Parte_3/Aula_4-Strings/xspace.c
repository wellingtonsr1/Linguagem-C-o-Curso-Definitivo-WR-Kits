/*======================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*======================================================================*/
/* ----- Prot�tipos das fun��es ----- */

char *my_xspace(char *s);


/*======================================================================*/
/* ----- Fun��o principal ----- */

int main()
{
    char str[] = "Era_Uma_vez";
	int n = 3;
	
    puts("--------------------------------------------------------");
    printf("String informada: %s\n", str);
    printf("String retornada: %s\n", my_xspace(str));
    puts("--------------------------------------------------------");

    return 0;

} /* end main */

 
/*======================================================================*/
/* ----- Desenvolvimento das fun��es ----- */

char *my_xspace(char *s)
{
    register int i, j;						/* Declara��o das vari�aveis */					
 	

	for(i=0; s[i] != '\0'; i++)				/* for para percorrer a string */
		for(j=i; s[j] != '\0'; j++)			/* for para rearranjar a string */																																									
    		s[j+1] = '_';				/* a posi��o j+1 recebe o valor da posi��o j+n+1 */
 	s[i] = '\0';							/* Colocar o caracter nulo \0 no fim da string*/

	return s;								/* Retornar a string */
    
} /* end my_xspace */



/*======================================================================*/
/* ----- Fim do programa ----- */


/*

012345678910
Era_Uma_vez -> s[0+1] = 





*/

