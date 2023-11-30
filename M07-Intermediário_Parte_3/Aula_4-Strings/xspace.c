/*======================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*======================================================================*/
/* ----- Protótipos das funções ----- */

char *my_xspace(char *s);
char *my_strcpy(char *str_dest, char *str_orig);

/*======================================================================*/
/* ----- Função principal ----- */

int main()
{
    char str1[] = "Era_Uma_vez";
    char str2[strlen(str1) * 2];

    
    puts("--------------------------------------------------------");
    printf("String informada: %ld\n", strlen(my_strcpy(str2, str1)));
    printf("String retornada: %s\n", my_xspace(my_strcpy(str2, str1)));
    puts("--------------------------------------------------------");

    return 0;

} /* end main */

 
/*======================================================================*/
/* ----- Desenvolvimento das funções ----- */

char *my_xspace(char *s)
{
    register int i=strlen(s);						 	

    s[2 * i] = s[i];
    for(i--; i >= 0; i--)
    {			
 	s[2 * i] = s[i];
        s[2 * i + 1] = '_';							
    }
    return s;								
    
} /* end my_xspace */



char *my_strcpy(char str_dest[], char str_orig[])
{
    register int i;
    str_dest[strlen(str_orig)];
    for(i=0; str_orig[i] != '\0'; i++)
        str_dest[i] = str_orig[i];
    str_dest[i] = '\0';

    return str_dest;

} /* end strcpy */

/*======================================================================*/
/* ----- Fim do programa ----- */











