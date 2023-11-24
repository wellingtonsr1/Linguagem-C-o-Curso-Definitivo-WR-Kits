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
#include <string.h>

#define DIM 20

/* ================================================================================================== */
/* Protótipo da funções */

void txt(char *s);
void run(char *s, int r);
int rep(int r);
void clear();
void clearall(char *s, int *r);
void help();
void my_exit();

/* ================================================================================================== */
/* Função Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_CTYPE, "Portuguese"); 

	char opcao[DIM] = "", str[DIM] = "- - - -";
	int r=0;
	
	
    while(1)
    { 	
    	printf("INPUT COMMAND: ");
        fgets(opcao, sizeof(opcao), stdin);
	opcao[strlen(opcao)-1] = '\0'; 
        //scanf("%[^\n]%*c", opcao);
    	
        if(!strcmp(opcao, "TXT")) 
	    txt(str);
    	else if(!strcmp(opcao, "RUN")) 
	    run(str, r);
    	else if(!strcmp(opcao, "REP")) 
	    r = rep(r);
    	else if(!strcmp(opcao, "CLEAR")) 
	    clear();
    	else if(!strcmp(opcao, "CLEAR ALL")) 
	    clearall(str, &r);
    	else if(!strcmp(opcao, "HELP")) 
	    help();
    	else if(!strcmp(opcao, "EXIT")) 
	    my_exit();
        else
            puts("Syntax error.");
	}
    
    printf("----------------------------------------------\n");         	                               /* Rodapé */
    
    
    system("PAUSE");               							                                               /* Faz uma parada na execução do programa */
		
    return 0;		        							                                                   /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/* ================================================================================================== */
/* Desenvolvimento da funções */
void txt(char *s)
{
	printf(" %16c", '_');
    	/* fgets(s, sizeof(s), stdin);
	s[strlen(s)-1] = '\0'; */
        scanf("%[^\n]%*c", s);
	
} /* end txt */


void run(char *s, int r)
{
    int i;
    if(r == 0)
        puts("- - - -");
    else
        for(i=0; i < r; i++) 
            printf("%20s\n", s);
				
} /* end run */

int rep(int r)
{
	printf("%16c", '_');
	scanf("%3d", &r);
	getchar();
	
	return r;
	
} /* end rep */

void clear()
{
	system("CLS");
	
} /* end clear */

void clearall(char *s, int *r)
{
	clear();
	//*s = '\0';
        s = "- - - -";
	*r = 0;
	
} /* end clearall */

void help()
{
	putchar('\n');
	puts("       COMMANDS: ");
	puts("       RUN         Rodar o interpretador.");
	puts("       RUN SOUND   Rodar o interpretador com “bips”.");
	puts("       REP         Número de repetições, arg: 000 a 999");
	puts("       TXT         Atualiza o texto, arg: o texto que você quiser.");
	puts("       CLEAR       Limpa a tela do console sem perder o último dado");
	puts("       CLEAR ALL   Limpa a tela e restaura variáveis.");
	puts("       EXIT        Encerra o interpretador.");
	
	putchar('\n');
	
} /* end help */

void my_exit()
{
	exit(1);
	
} /* end my_exit */



/* ================================================================================================== */
/* Fim do programa */
