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

long unsigned int strlen(char str[]);
char *strcpy(char str_orig[], char str_dest[]);
char *strvert(char str[]);
char *strcat(char str_orig[], char str_dest[]);
int strcountc(char str[], char ch);
int strcountd(char str[]);
int isnull(char str[]);
int indchar(char str[], char ch);
int strpal(char str[]);
<<<<<<< HEAD
char *strcmp(char str1[], char str2[]);
char strpad(char str[]);
=======
int strcmp(char str1[], char str2[]);
char *strpad(char str[]);
>>>>>>> 86e6cdf96ab96a5935e83eb9dfe5536f5f79514c
char *strdelc(char str[], char ch);


/* Função Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_CTYPE, "Portuguese"); 

    char s1[] = "testes";
    char s2[] = "testes.";
    char ch = 'm';
    
    //char s_new[DIM];
    
    /* printf("A string %s tem %d de tamanho\n", s, strlen(s)); */
    /* printf("O vetor %s tem %d de tamanho\n", s, sizeof(s)); */
    
    /* printf("\nString copiada: %s.\n", strcpy(s1, s2)); */ 
    
    /* printf("String original : %s\n", s); 
	printf("String invertida: %s\n", strvert(s)); */

	/* printf("String Orig  : %s %s\n", s1, s2);
	printf("String concat: %s\n", strcat(s1, s2)); */
	
	/* printf("A string [ %s ] tem o [ %c ] repetido %d veze(s)\n", s1, ch, strcount(s1, ch)); */
	
	/* printf("A string [ %s ] tem %d digitos\n", s1, strcountd(s1)); */
	
	/* printf("O teste retornou %d.\n", isnull(s1)); */

    /* printf("O indice onde o caracter esta na string %s e %d\n", s1, indchar(s1, ch)); */
        
<<<<<<< HEAD
    //printf("String atual [ %s ]\n", s1);
    
    /* printf("string nova [ %s ] sem o caracter [ %c ]\n", strdelc(s1, ch), ch); */
    
    
	printf("As strings são %s\n", strcmp(s1, s2)); 
=======
        //printf("String atual [ %s ]\n", s1);
        //printf("string nova [ %s ] sem o caracter [ %c ]\n", strdelc(s1, ch), ch);
	
        printf("String com espacos: %s\n", strpad(s1));



>>>>>>> 86e6cdf96ab96a5935e83eb9dfe5536f5f79514c
    putchar('\n');
    
    
    system("PAUSE");              							                                                  /* Faz uma parada na execução do programa */
		
    return 0;		        							                                                              /* Retorna '0' se tudo ocorrer bem na execução */
	
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
    register int i;

    for(i=0; str_ori[i] != '\0'; i++)
        str_des[i] = str_ori[i];
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


int strcountc(char str[], char ch)
{
	register int i, count;
	
	for(i=count=0; str[i] != '\0'; i++)
		if(ch == str[i]) count++;
	return count;
	
} /* end strcount */


int strcountd(char str[])
{
	register int i, count;
	
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


int indchar(char str[], char ch)
{
    register int i;

    for(i=0; str[i] != '\0'; i++)
        if(str[i] == ch) break;        
    return i;

} /* end indchar */

/*
int strpal(char str[])
{
}
*/

char *strcmp(char str1[], char str2[])
{
	int i, j;
	for(i=j=0; (str1[i] != '\0' || str2[j] != '\0'); i++, j++) 
		if(str1[i] != str2[i]) return "diferentes"; /* ou 0 se for diferente */
		
	return "iguais"; /* ou 1 se for igual */
	
} /* end strcmp */



char *strpad(char str[])
{
    register int i=strlen(str);
    str[2*i] = str[i];
    for(i-1; i>= 0; i--)
    {
        str[2*i] = str[i];
        str[2*i+1] = ' ';
    }

    return str;
        
}


char *strdelc(char str[], char ch)
{
    register int i, j;

    for(i=j=0; str[i] != '\0'; i++)
        if(str[i] != ch) 
        	str[j++] = str[i];
    str[j] = '\0';
    
    return str;
    
} /* end strdelc */



/*
    str: "programming"
    ch: 'm'
    
    0 1 2 3 4 5 6 7 8 9 10
	p r o g r a m m i n g
	
	------- Início -------
	
    for(i=j=0; str[i] != '\0'; i++)
    {
        if(str[i] != ch) 
        	str[j++] = str[i];	
    }
    str[j] = '\0';
    
    return str;
    
    ------- fim -------
    
  i=0
  j=0
  str[i] => str[0] tem o valor p que é diferente de m(ch), entra no if e str[j++] que é str[0] recebe str[i] que é str[0] (p)
  str = p
  incrementa i e j
  
  i=1
  j=1
  str[i] => str[1] tem o valor r que é diferente de m(ch), entra no if e str[j++] que é str[1] recebe str[i] que é str[1] (r)
  str = pr
  incrementa i e j
  
  i=2
  j=2
  str[i] => str[2] tem o valor o que é diferente de m(ch), entra no if e str[j++] que é str[2] recebe str[i] que é str[2] (o)
  str = pro
  incrementa i e j
  
  i=3
  j=3
  str[i] => str[3] tem o valor g que é diferente de m(ch), entra no if e str[j++] que é str[3] recebe str[i] que é str[3] (g)
  str = prog
  incrementa i e j
  
  i=4
  j=4
  str[i] => str[4] tem o valor r que é diferente de m(ch), entra no if e str[j++] que é str[4] recebe str[i] que é str[4] (r)
  str = progr
  incrementa i e j
  
  i=5
  j=5
  str[i] => str[5] tem o valor a que é diferente de m(ch), entra no if e str[j++] que é str[5] recebe str[i] que é str[5] (a)
  str = progra
  incrementa i e j
  
  i=6
  j=6
  str[i] => str[6] tem o valor m que é igual a m(ch), não entra no if e str[j++] que é str[6] permanece str[6] e não recebe valor
  str = progra?
  incrementa i e não incremnta j
  
  i=7
  j=6
  str[i] => str[7] tem o valor m que é igual a m(ch), não entra no if e str[j++] que é str[6] permanece str[6] e não recebe valor
  str = progra?
  incrementa i e não incremnta j
  
  i=8
  j=6
  str[i] => str[8] tem o valor i que é diferente de m(ch), entra no if e str[j++] que é str[6] recebe str[i] que é str[8] (i)
  str = prograi
  incrementa i e j
  
  i=9
  j=7
  str[i] => str[9] tem o valor n que é diferente de m(ch), entra no if e str[j++] que é str[7] recebe str[i] que é str[9] (n)
  str = prograin
  incrementa i e j
  
  i=10
  j=8
  str[i] => str[10] tem o valor g que é diferente de m(ch), entra no if e str[j++] que é str[7] recebe str[i] que é str[9] (g)
  str = prograing
  incrementa i e j
  
  i=11
  j=9
  str[i] => str[11] tem o valor '\0' que é diferente de m(ch) e é condição de parada do laço, sai do for e str[j++] que é str[9] recebe o '\0'
  str = prograing\0
  
  */  
    
    
    
    



/*================================================================================================== */
/* -------- Fim do programa ---------- */
