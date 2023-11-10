/* =================================================================================================
	Módulo 4, Parte 3
	Aula 4
	Descrição: 
	Autor: Wellington
	Data: 10/11/2023
	Atualização: --
================================================================================================== */

/*
	\x82 = é
	\xE3 = ã
	\x87 = ç
	\x88 = ê
	\xA0 = á
	
	ou usar:
	#include <locale.h> 
	setlocale(LC_CTYPE, "Portuguese"); 
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[])
{
									

	char con;
	
    printf("----------------------------------------------\n");	        /* Cabeçaalho */
    printf("            Concession\xA0ria                  \n");   
    printf("----------------------------------------------\n");	
    
    printf("Digite a inicial da concession\xA0ria: ");
    scanf(" %c", &con);
    
    printf("\n");														/* Linha em branco extra */
    
    switch(con)
    {
    	case 'F':
    		printf("FIAT\n");
    		break;
    	case 'V':
    		printf("VOLKS\n");
    		break;
    	case 'R':
    		printf("RENAULT\n");
    		break;
    	case 'H':
    		printf("HYUNDAI\n");
    		break;
    	default:
    		printf("Concession\xA0ria n\xc6o encontrada\n");
    		
	} /* end switch */
    
    
    printf("----------------------------------------------\n");	        /* Rodapé */
    
    
	system("PAUSE"); 				        							/* Faz uma parada na execução do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
