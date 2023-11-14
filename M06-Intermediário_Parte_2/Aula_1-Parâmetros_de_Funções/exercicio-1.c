/* =================================================================================================
	MÃ³dulo 6
	Aula 1
	DescriÃ§Ã£o: 
	Autor: Wellington
	Data: 14/11/2023
	AtualizaÃ§Ã£o: --
================================================================================================== */





/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* ----- Protótimpo das funções ----- */
float frequencia(float R, float C);
float tempo(float R, float C);

/* FunÃ§Ã£o Principal */
int main(int argc, char *argv[])
{
    setlocale(LC_CTYPE, "Portuguese");  

  
	float R, C;
	char opcao;
    

	do
	{
		printf("----------------------------------------------\n");	                        /* CabeÃ§aalho */
    	printf("              Frequência e Tempo              \n");   
    	printf("----------------------------------------------\n");		
		
		printf("(F) para Frequência\n");
		printf("(T) para Tempo\n");
		printf("\nEscolha uma opção: ");
		scanf(" %c", &opcao);
		
		printf("\nEntre com o valor de R: ");
		scanf("%f", &R);
		
		printf("Entre com o valor de C: ");
		scanf("%f", &C);
		
		switch(opcao)
		{
			case 'f':
			case 'F':
				printf("\nFrequência: %.2fHz\n", frequencia(R, C));
				break;	
			case 't':
			case 'T':
				printf("\nTempo: %.5fs\n", tempo(R, C));
				break;
				
		} /* end switch */
		
		
		printf("----------------------------------------------\n"); 
	
	}while(1); /* end do..while */
    
            	                                                                             /* RodapÃ© */
    
    
   	system("PAUSE");              							                                 /* Faz uma parada na execuÃ§Ã£o do programa */
		
    return 0;		        							                                     /* Retorna '0' se tudo ocorrer bem na execuÃ§Ã£o */
	
}  /* end main */



/* ----- Desenvolvimento das funções ----- */

float frequencia(float R, float C)
{
	float f = 0.0;
	float PI = 3.14;
	
	f = 1 / (2 * PI * R * C);
	
	return f;
	
} /* end frequencia */

float tempo(float R, float C)
{
	float t = 0.0;
	
	t = R * C;
	
	return t;
	
} /* end tempo */
