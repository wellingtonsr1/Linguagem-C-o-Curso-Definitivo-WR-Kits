/*=============================================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*=============================================================================================*/
/* ----- Protótipo das funções ----- */

int my_pri_ind_str(char *s, char ch);


/*=============================================================================================*/
/* ----- Funão principal ----- */

int main()
{
	char str[] = "Teste";
	char ch = 'e';
	
	if(my_pri_ind_str(str, ch) >= 0)
		printf("O caracter \'%c\' esta no indice %d da string \'%s\'\n", ch, my_pri_ind_str(str, ch), str);                        
	else
		printf("O caracter \'%c\' nao esta na string informada \'%s\'\n", ch, str); 
		
	
	return 0;
	
} /* end main */


/*=============================================================================================*/
/* ----- Desenvolvimento das funções ----- */

int my_pri_ind_str(char *s, char ch)
{
	register int i;
	
	for(i=0; s[i] != '\0'; i++)
		if(s[i] == ch) return i;
		
	return -1;	
		
} /* end my_ult_ind_str */


/*=============================================================================================*/
/* Fim do programa */
