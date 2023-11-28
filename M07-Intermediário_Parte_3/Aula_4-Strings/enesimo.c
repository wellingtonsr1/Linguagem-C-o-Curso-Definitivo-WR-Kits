#include <stdio.h>
#include <string.h>


char e_nesimo(char *s, int n);

int main() {
   	
   	char str[] = "teste";
   	int n = 6;
   	
	printf("O e-nesimo \'%d\' de '\%s\' eh '\%c\'\n", n, str, e_nesimo(str, n));
    
	
	return 0;
}


char e_nesimo(char *s, int n)
{
	register int i;

	/* if(n > strlen(s)) n = strlen(s) - 1; */
	
	for(i=0; s[i] != '\0'; i++)
		if(i == n) break;
	
	return s[i];
}
