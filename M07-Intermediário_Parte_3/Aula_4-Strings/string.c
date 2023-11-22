/* =================================================================================================
	Módulo 
	Aula 
	Descrição: 
	Autor: Wellington
	Datai 
	Atualização: --
================================================================================================== */



/*================================================================================================== */
/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


#define DIM 10
/*================================================================================================== */
/* ---------- Protótipo das funções ---------- */

long unsigned int strlen(char str[]);
char *strcpy(char str_orig[], char str_dest[]);
char *strvert(char str[]);
char *strcat(char str_orig[], char str_dest[]);
int strcountc(char str[], char ch);
int strcountd(char str[]);
int isnull(char str[]);
int indchar(char str[], char ch);
int strpal(char str[]);
int strcmp(char str1[], char str2[]);
char strpad(char str[]);
char strdelc(char str[], char ch);


/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 

    char s1[] = "t";
    char s2[] = "String";
    char ch = 's';
    
    //char s_new[DIM];
    
    //printf("A string %s tem %d de tamanho\n", s, strlen(s)); 
    /* printf("O vetor %s tem %d de tamanho\n", s, sizeof(s)); */
    
    /* printf("\nString copiada: %s.\n", strcpy(s, s_new)); */
    
    putchar('\n');
    
    //printf("String original : %s\n", s); 
	//printf("String invertida: %s\n", strvert(s));

	/* printf("String Orig  : %s %s\n", s1, s2);
	printf("String concat: %s\n", strcat(s1, s2)); */
	
	/* printf("A string [ %s ] tem o [ %c ] repetido %d veze(s)\n", s1, ch, strcount(s1, ch)); */
	
	/* printf("A string [ %s ] tem %d digitos\n", s1, strcountd(s1)); */
	
	printf("O teste retornou %d.\n", isnull(s1));
	
    putchar('\n');
    /* system("PAUSE");  */             							                                                  /* Faz uma parada na execução do programa */
		
    return 0;		        							                                                      /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/*================================================================================================== */
/* ---------- Desenvolvimento das funções ---------- */

long unsigned int strlen(char str[])
{
    register int i=0;

    while(str[i] != '\0')
        i++;
    
    return i;

} /* end strlen */ 


char *strcpy(char str_ori[], char str_des[])
{
    register int i=0;

    while(str_ori[i] != '\0')
    {
        str_des[i] = str_ori[i];
        i++;
    }
    str_des[i] = '\0';

    return str_des;
} /* end strcpy */



char *strvert(char str[])
{
    register int i=0;
    int _length = strlen(str) - 1;
    char aux;
   
    while(i < _length)
    {
        aux = str[i];
        str[i] = str[_length];
        str[_length] = aux;
        
        i++;
        _length--;
    }
    return str;

} /* end strvert */


char *strcat(char str_orig[], char str_dest[])
{
	register int i=0, _lenght=strlen(str_dest);

	/* Ex. 1 */
    while(str_orig[i] != '\0')
    {
        str_dest[_lenght] = str_orig[i];
        i++;
        _lenght++;
    }
    str_dest[_lenght] = '\0';


	/* Ex. 2 
	while(str_dest[_lenght++] = str_orig[i++])
				;
			*/	
			
    return str_dest; 
	
} /* end strcat */


int strcount(char str[], char ch)
{
	int count;
	register int i;
	
	for(i=count=0; str[i] != '\0'; i++)
	{
		if(ch == str[i])
			count++;
	}
	return count;
	
} /* end strcount */


int strcountd(char str[])
{
	int count;
	register int i;
	
	for(i=count=0; str[i] != '\0'; i++)
	{
		/* if(isdigit(str[i])) */
		
		if(str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' 
		|| str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' 
		|| str[i] == '8' || str[i] == '9')
			count++;
	}
	return count;
	
} /* end strcountd */


int isnull(char str[])
{
	/* Foi feito '(str[0] == '\0') ?  1 :  0'; , mas o próprio teste '(str[0] == '\0')' retorna 0(falso) ou 1(verdadeiro)*/
	return (str[0] == '\0');
	
} /* end isnull */



/*================================================================================================== */
/* ---------- Fim do programa ---------- */
