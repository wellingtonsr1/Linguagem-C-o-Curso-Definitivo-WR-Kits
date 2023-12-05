/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

#define OP_SAIR "SAIR"


/*=====================================================================*/
/* ----- Protótipo das funções ----- */

void separa(char *nome, char *sobrenome);
int my_strcountc(char str[], char ch);
char *my_wordupr(char *s);


/*=====================================================================*/
/* ----- Função Principal ----- */

int main()
{
    char nome[50], sobrenome[30];

    for(;;)
    {
    	printf("Nome: ");
    	fgets(nome, sizeof(nome), stdin);
    		if(nome[strlen(nome) - 1] == '\n') 
    			nome[strlen(nome) - 1] = '\0';
    	
    	if(stricmp(nome, OP_SAIR) == 0) break;
    	separa(nome, sobrenome);
    	printf("%s, %s\n", my_wordupr(sobrenome), my_wordupr(nome));
    	
	} /* end for */
	
    return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das funções ----- */ 

void separa(char *nome, char *sobrenome)
{
	register int i, j;
	
	if(my_strcountc(nome, ' ') == 0)
	{
		sobrenome[0] = '\0';
		return;
		
	} /* end if */
	
	for(i=strlen(nome) - 1, j=0; nome[i] != ' '; )
		sobrenome[j++] = nome[i--];
	sobrenome[j] = '\0';
	nome[i] = '\0';
	
	strrev(sobrenome);
	
} /* end separa */


int my_strcountc(char str[], char ch)
{
	register int i, count;
	
	for(i=count=0; str[i] != '\0'; i++)
		if(ch == str[i]) count++;
	return count;
	
} /* end my_strcount */


char *my_wordupr(char *s)
{
    register int i;
	
    s[0] = toupper(s[0]);
    for(i=1; s[i - 1] != '\0'; i++)
        s[i] = (s[i - 1] == ' ') ? toupper(s[i]) : tolower(s[i]);
    return s;
	
} /* end my_wordupr */


/*=====================================================================*/
/* ----- Fim do programa ----- */





