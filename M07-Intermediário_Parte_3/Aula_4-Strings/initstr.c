/*=============================================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*=============================================================================================*/
/* ----- Prtótipo das funções ----- */

char *my_init_str(char *s);


/*=============================================================================================*/
/* ----- Funão principal ----- */

int main()
{
	char str[] = "Teste";
	
	puts(str);												                      /* Teste */
	printf("String antes da funcao:  %d\n", strlen(str));                         /* String antes da funcao:  5 */
	printf("String depois da funcao: %d\n", strlen(my_init_str(str)));            /* String depois da funcao: 0 */
	
	/* 	Teste para ver se colocando apenas o '\0' no str[0], zerava a string 
		printf("%c\n", my_init_str(str)[0]);                                           ' ' 
		printf("%c\n", my_init_str(str)[1]);                                            e  
		printf("%c\n", my_init_str(str)[2]);                                            s  
		printf("%c\n", my_init_str(str)[3]);                                            t  
		printf("%c\n", my_init_str(str)[4]);                                            e  
	*/ 
	
	
	return 0;
	
} /* end main */


/*=============================================================================================*/
/* ----- Desenvolvimento das funções ----- */

char *my_init_str(char *s)
{
	register int i;
	
	for(i=0; s[i] != '\0'; i++)
		s[i] = 0;
	//s[i] = '\0'; 
	
	/* s[0] = '\0'; */
	
	return s;
	
} /* end my_init_str */


/*=============================================================================================*/
/* Fim do programa */
