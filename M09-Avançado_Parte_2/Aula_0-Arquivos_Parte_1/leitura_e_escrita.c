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


/* Função Principal */
int main(int argc, char *argv[])
{
    #if _WIN32 
        setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif								
    

    FILE *arq;
    int ch;

    printf("----------------------------------------------\n");	                        /* Cabeçaalho */
    printf("        Teste de leitura e escrita            \n");   
    printf("----------------------------------------------\n");	
    
    
    if((arq = fopen("teste2.txt", "w")) == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    else
    {
        fputs("Esse é um teste de acentuação!", arq);
        fclose(arq);
    }
    

    if((arq = fopen("teste2.txt", "r")) == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    else
    {    
        while((ch = fgetc(arq)) != EOF) 
            printf("%c", ch);

        fclose(arq);
    }


    printf("\n----------------------------------------------\n");         	        /* Rodapé */
    
    
    #if _WIN32
        system("PAUSE"); 
    #endif	
    

    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
