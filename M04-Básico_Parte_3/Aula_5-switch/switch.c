/* =================================================================================================
	M�dulo 4, Parte 3
	Aula 4
	Descri��o: 
	Autor: Wellington
	Data: 10/11/2023
	Atualiza��o: --
================================================================================================== */

/*
	\x82 = �
	\xE3 = �
	\x87 = �
	\x88 = �
	\xA0 = �
	
	ou usar:
	#include <locale.h> 
	setlocale(LC_CTYPE, "Portuguese"); 
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									

	char con;
	
    printf("----------------------------------------------\n");	        /* Cabe�aalho */
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
    
    
    printf("----------------------------------------------\n");	        /* Rodap� */
    
    
	system("PAUSE"); 				        							/* Faz uma parada na execu��o do programa */
		
	return 0;															/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
