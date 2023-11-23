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

#define DIM 20

/* ================================================================================================== */
/* Prot�tipo da fun��es */

void txt(char *s);
void run(char *s, int *r);
int rep(int r);
void clear();
void clearall(char *s, int *r);
void help();


/* ================================================================================================== */
/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_CTYPE, "Portuguese"); 

	char opcao[] = "", str[DIM] = "- - - -";
	int r=0;
	
	
    while(1)
    { 	
    	printf("INPUT COMMAND: ");
    	scanf("%s", opcao);
		getchar();
		
    	if(!strcmp(opcao, "TXT")) txt(str);
    	if(!strcmp(opcao, "RUN")) run(str, &r);
    	if(!strcmp(opcao, "REP")) r=rep(r);
    	if(!strcmp(opcao, "CLEAR")) clear();
    	if(!strcmp(opcao, "CALL")) clearall(str, &r);
    	if(!strcmp(opcao, "HELP")) help();
	}
    
    printf("----------------------------------------------\n");         	                               /* Rodap� */
    
    
    system("PAUSE");               							                                               /* Faz uma parada na execu��o do programa */
		
    return 0;		        							                                                   /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


/* ================================================================================================== */
/* Desenvolvimento da fun��es */
void txt(char *s)
{
	printf(" %16c", '_');
	gets(s);
	
} /* end txt */


void run(char *s, int *r)
{
	int i;
	
    for(i=0; i < *r; i++) 
		printf("%20s\n", s);
		
} /* end run */

int rep(int r)
{
	printf(" %16c", '_');
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
	s = "- - - -";
	*r = 0;

	//run(s, r);
	
} /* end clearall */

void help()
{
	puts("COMMANDS: ");
	puts("          RUN  Rodar o interpretador.");
	puts("          RUN SOUND    Rodar o interpretador com �bips�.");
	puts("          REP N�mero de repeti��es, arg: 000 a 999");
	puts("          TXT Atualiza o texto, arg: o texto que voc� quiser.");
	puts("          CLEAR Limpa a tela do console sem perder o �ltimo dado");
	puts("          CLEAR ALL Limpa a tela e restaura vari�veis.");
	puts("          EXIT Encerra o interpretador.");
	
	putchar('\n');
	
} /* end help */



/* ================================================================================================== */
/* Fim do programa */
