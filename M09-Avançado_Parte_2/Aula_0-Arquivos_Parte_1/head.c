/* =================================================================================================
	Módulo 
	Aula 
	Descrição: 
	Autor: Wellington
	Data: 
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


#define MAX_LIN 80
#define SINAL '-'

void Erro_Fatal(int , char *);

/* Função Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_CTYPE, "Portuguese");  

	FILE *f_ptr = stdin;
	char s[MAX_LIN + 1];
	int i = 0;
	int n_linhas = 10;
	
	switch(argc)
	{
		case 1: break;
		case 2:
			if(argv[1][0] == SINAL)
				n_linhas = atoi(argv[1] + 1);
			else
				if((f_ptr = fopen(argv[1], "r")) == NULL)
					Erro_Fatal(2, argv[1]);
			break;
		case 3:
			if(argv[1][0] != SINAL)
				Erro_Fatal(1, "");
			else
			{
				n_linhas = atoi(argv[1] + 1);
				if((f_ptr = fopen(argv[2], "r")) == NULL)
					Erro_Fatal(2, argv[2]);
			}
			break;
		default : Erro_Fatal(1, "");
	}
	
	while(fgets(s, MAX_LIN + 1, f_ptr) != NULL && i++ < n_linhas)
		printf(s);
	fclose(f_ptr);
	
	
    printf("----------------------------------------------\n");         	        /* Rodapé */
    
    system("PAUSE");               												    /* Faz uma parada na execução do programa */
		
    return 0;		        							                            /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


void Erro_Fatal(int num_erro, char *str)
{
	switch(num_erro)
	{	
		case 1:
			fprintf(stderr, "Sintaxe:\n\nhead [-n] [Arq]\n\n");
			break;
		case 2:
			fprintf(stderr, "Imp. Abrir o arquivo '%s'\n", str);
			break;
	}
	exit(num_erro);
}
