/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <locale.h> 
#include <stdio.h>
#include <string.h>

/*=====================================================================*/
/* ----- Protótipo das funções ----- */

char my_max_ascii(char *s);


/*=====================================================================*/
/* ----- Função Principal ----- */

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil"); 
	unsigned char str[] = "abcdABCDe";
	register int i;
	
	for(i=0; i < strlen(str); i++)
		printf("%c = %d\n", str[i], (unsigned)str[i]);
		
	printf("O maior caracter da string \'%s\' eh \'%c\'\n", str, my_max_ascii(str));


	return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das funções ----- */ 

char my_max_ascii(char *s)
{
	register int i;
	char maior_ch = '\0';
	
	if(s[0] == '\0') return '\0';

	for(i=0; s[i] != '\0'; i++)
		if(s[i] > maior_ch) maior_ch = s[i];
		
		
 	return maior_ch; 
 	
 	/*
 	int i;
 	char res = '\0';
 	
 	for(i=0; s[i] != '\0'; i++)
		res = res > s[i] ? res : s[i];	
 	return res; 
	*/
	
} /* end my_max_ascii */


/*=====================================================================*/
/* ----- Fim do programa ----- */




/*
											  ------------------------------------------------
0 1 2 3 4 5 6 7 8   9                                for(i=0; s[i] != '\0'; i++)
a b c d e A B C D '\0'									if(s[i] > maior_ch) maior_ch = s[i];
		
maior = '\0'		
 													return maior_ch; 
											  ------------------------------------------------


i=0
 'a'    '\0'
s[0] > maior ? s, maior = 'a' , i++

i=1
 'b'    'a'
s[1] > maior? s, maior = 'b', i++

i=2
 'c'    'b'
s[2] > maior? s, maior = 'c', i++
 
i=3
  'd'   'c'
s[3] > maior? s, maior = 'd', i++

i=4
 'e'    'd'
s[4] > maior? n, maior = 'e', i++

i=5
 'A'    'e'
s[5] > maior? n, maior continua com 'e', i++

i=6
 'B'    'e'
s[6] > maior? n, maior continua com 'e', i++

i=7
 'C'   'e'
s[7] > maior? n, maior continua com 'e', i++

i=8
  'D'   'e'
s[8] > maior? n, maior continua com 'e', i++

i=9
s[9] == '\0', sai do loop

return 'e'

a = 97
b = 98
c = 99
d = 100
e = 101
A = 65
B = 66
C = 67
D = 68
+ = 43







*/
