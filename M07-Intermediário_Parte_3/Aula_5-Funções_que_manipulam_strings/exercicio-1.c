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


void help();
void clearall();
void _exit();
char *txt(char s);
int rep();
void run(char s, int n);

/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 
    //system("clear");
     
    char opcao[20], txt[10];
    int r=0;

    printf("----------------------------------------------\n");	                        /* Cabeçaalho */
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
    printf("----------------------------------------------\n");         	        /* Rodapé */
    
    
/*    system("PAUSE"); */               							/* Faz uma parada na execução do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


void help()
{
    puts("RUN ¿ rodar o interpretador.");
    puts("RUN SOUND ¿ rodar o interpretador com ¿bips¿.");
    puts("REP ¿ define o número de repetições de uma frase salva previamente com o comando TXT.");
    puts("Recebe como argumento o número de repetições desejadas.");
    puts("TXT ¿ comando para entrada de nova frase. O argumento é a frase-texto que o usuário quiser");
    puts("que o interpretador rode pelo número de repetições definido.");
    puts("CLEAR ¿ limpa a tela do console.");
    puts("CLEAR ALL ¿ limpa a tela e restaura variáveis.");
            puts("EXIT ¿ encerra o interpretador.");
    puts("HELP ¿ apresenta a versão atual do interpretador e breve explicação sobre os seus comandos.");
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

