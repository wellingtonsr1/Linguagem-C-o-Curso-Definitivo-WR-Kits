/* =================================================================================================
	M�dulo 
	Aula 
	Descri��o: 
	Autor: Wellington
	Data: 
	Atualiza��o: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <string.h>

/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
char nome_1[] = "Teste"; 
char nome_2[11] = {0};
char nome_3[] = {'T', 'e', 's', 't', 'e'};
char nome_4[] = "Teste";

//memset(nome_1, 0, sizeof(nome_1));
//memset(nome_2, 0, sizeof(nome_2));

puts(nome_1);
puts(nome_2);
    
printf("Tamanho de %s 1 = %ld\n", nome_1, strlen(nome_1));  
printf("Tamanho de %s 2 = %ld\n", nome_2, strlen(nome_2));  


printf("Tamanho de %s 3 = %ld\n", nome_3, strlen(nome_3));  
printf("Tamanho de %s 4 = %ld\n", nome_4, strlen(nome_4));  
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
