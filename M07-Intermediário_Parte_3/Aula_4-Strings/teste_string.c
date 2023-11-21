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
#include <string.h>


#define DIM 10
/*================================================================================================== */
/* ---------- Protótipo das funções ---------- */

int strlength(char str[]);
char *strcopy(char str_orig[], char str_dest[]);
char *strinvert(char str[]);
char *strconcat(char str_orig[], char str_dest[]);
int strcountc(char str[], char ch);
int strcountd(char str[], char d);


/* Função Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_CTYPE, "Portuguese"); 

    char s1[] = "Teste de strings";
    char s2[] = "String";
    char ch = 's';
    
    //char s_new[DIM];
    
    //printf("A string %s tem %d de tamanho\n", s, strlength(s)); 
    /* printf("O vetor %s tem %d de tamanho\n", s, sizeof(s)); */
    
    /* printf("\nString copiada: %s.\n", strcopy(s, s_new)); */
    
    putchar('\n');
    
    //printf("String original : %s\n", s); 
	//printf("String invertida: %s\n", strinvert(s));

	/* printf("String Orig  : %s %s\n", s1, s2);
	printf("String concat: %s\n", strconcat(s1, s2)); */
	
	/* printf("A string [ %s ] tem o [ %c ] repetido %d veze(s)\n", s1, ch, strcountc(s1, ch)); */
	
    putchar('\n');
    system("PAUSE");               							               /* Faz uma parada na execução do programa */
		
    return 0;		        							                   /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/*================================================================================================== */
/* ---------- Desenvolvimento das funções ---------- */

int strlength(char str[])
{
    register int i=0;

    while(str[i] != '\0')
        i++;
    
    return i;

} /* end strlength */ 


char *strcopy(char str_ori[], char str_des[])
{
    register int i=0;

    while(str_ori[i] != '\0')
    {
        str_des[i] = str_ori[i];
        i++;
    }
    str_des[i] = '\0';

    return str_des;
} /* end strcopy */



char *strinvert(char str[])
{
    register int i=0;
    int _length = strlength(str) - 1;
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

} /* end strinvert */


char *strconcat(char str_orig[], char str_dest[])
{
	register int i=0, _lenght=strlength(str_dest);

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
	
} /* end strconcat */


int strcountc(char str[], char ch)
{
	int count;
	register int i;
	
	for(i=count=0; str[i] != '\0'; i++)
	{
		if(ch == str[i])
			count++;
	}
	return count;
	
} /* end strcountc */

int strcountd(char str[], char ch)
{
	int count;
	register int i;
	
	for(i=count=0; str[i] != '\0'; i++)
	{
		if(ch == str[i])
			count++;
	}
	return count;
	
} /* end strcountd */




/*================================================================================================== */
/* ---------- Fim do programa ---------- */
