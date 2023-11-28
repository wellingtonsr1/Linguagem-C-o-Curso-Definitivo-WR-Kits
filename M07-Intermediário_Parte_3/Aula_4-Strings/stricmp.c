/*=============================================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>


/*=============================================================================================*/
/* ----- Protótipo das funções ----- */

int my_stricmp(char *s1, char *s2);
char *my_strlwr(char *s);

/*=============================================================================================*/
/* ----- Função principal ----- */

int main()
{
	char str1[] = "abc";
        char str2[] = "abcxpo";

	printf("%d", my_stricmp(str1, str2));	
	
	return 0;
	
} /* end main */


/*=============================================================================================*/
/* ----- Desenvolvimento das funções ----- */

int my_stricmp(char *s1, char *s2)
{
	register int i,j;

        my_strlwr(s1);
        my_strlwr(s2);

	while(s1[i] == s2[i] && s1[i] != '\0')
            i++; 
                
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);	
				
} /* end my_stricmp */


char *my_strlwr(char *s)
{
	register int i;

	for(i=0; s[i] != '\0'; i++)
            if(s[i] >= 65 && s[i] <= 90) s[i] += 32;
	
	return s;	
				
} /* end my_strlwr */


/*=============================================================================================*/
/* Fim do programa */
