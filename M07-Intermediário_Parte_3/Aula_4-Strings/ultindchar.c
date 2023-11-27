/*=============================================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*=============================================================================================*/
/* ----- Protótipo das funções ----- */

int my_ult_ind_str(char *s, char ch);


/*=============================================================================================*/
/* ----- Funão principal ----- */

int main()
{
	char str[] = "Teste";
	char ch = 'S';
	
	if(my_ult_ind_str(str, ch) >= 0)
		printf("O caracter \'%c\' esta no indice %d da string \'%s\'\n", ch, my_ult_ind_str(str, ch), str);                        
	else
		printf("O caracter \'%c\' nao esta na string informada \'%s\'\n", ch, str); 
		
	
	return 0;
	
} /* end main */


/*=============================================================================================*/
/* ----- Desenvolvimento das funções ----- */

int my_ult_ind_str(char *s, char ch)
{
	register int i, r = -1;
	
	for(i=0; s[i] != '\0'; i++)
		if(s[i] == ch) r = i;
	
	return r;	
				
} /* end my_ult_ind_str */

/*
ch = 'T'

01234
Teste

passo 1 ->  for(i=0) -> i=0  s[0] = 'T'
passo 2 -> 'T' == 'T'   i=0  s[0] = 'T' r='0'
passo 3 ->  for(i=1)    i=1  s[1] = 'e' r='-1'
passo 4 ->  for(i=2)    i=2  s[2] = 's' r='-1'
passo 5 ->  for(i=3)    i=3  s[3] = 't' r='-1'
passo 6 ->  for(i=4)    i=4  s[4] = 'e' r='-1'
passo 7 ->  for(i=5)    i=5  s[5] = '\0' sai com r='-1'



























*/





/*=============================================================================================*/
/* Fim do programa */
