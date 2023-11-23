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


void help();
void clearall();
void _exit();
char *txt(char s);
int rep();
void run(char s, int n);

/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 
    //system("clear");
     
    char opcao[20], txt[10];
    int r=0;

    printf("----------------------------------------------\n");	                        /* Cabe�aalho */
    printf("            COMMAND INTERPRETER               \n");   
    printf("----------------------------------------------\n");	
    
    printf("Input command: ");
    scanf("%s", opcao);

 
    if(!strcmp(opcao, "HELP"))    
        help();
    else if(!strcmp(opcao, "EXIT"))
        exit(1);
    else if(!strcmp(opcao, "CLEAR"))
        system("clear");
    //if(!strcmp(opcao, "CLEAR ALL"))
      //  clearall();
    else if(!strcmp(opcao, "REP"))
        r=rep();
    else if(!strcmp(opcao, "TXT"))
        txt(txt);
    else if(!strcmp(opcao, "RUN"))
        run(txt, r);
    printf("----------------------------------------------\n");         	        /* Rodap� */
    
    
/*    system("PAUSE"); */               							/* Faz uma parada na execu��o do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


void help()
{
    puts("RUN � rodar o interpretador.");
    puts("RUN SOUND � rodar o interpretador com �bips�.");
    puts("REP � define o n�mero de repeti��es de uma frase salva previamente com o comando TXT.");
    puts("Recebe como argumento o n�mero de repeti��es desejadas.");
    puts("TXT � comando para entrada de nova frase. O argumento � a frase-texto que o usu�rio quiser");
    puts("que o interpretador rode pelo n�mero de repeti��es definido.");
    puts("CLEAR � limpa a tela do console.");
    puts("CLEAR ALL � limpa a tela e restaura vari�veis.");
            puts("EXIT � encerra o interpretador.");
    puts("HELP � apresenta a vers�o atual do interpretador e breve explica��o sobre os seus comandos.");
}

/*
void clearall()
{
    system("CLEAR");
}
*/


char *txt(char s)
{
    printf("TXT")
    scanf("%s", s);

    return s;
}

int rep()
{
    int number=0;

    printf("%16s", "_");
    scanf("%d", &number);
    
    return number;
}

void run(char s, int n)
{
    int i;
    for(i=0; i < n; i++)
    {
        printf("a");
    }
}

