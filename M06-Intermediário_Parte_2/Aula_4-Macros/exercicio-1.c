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


/* Protótipo das funções */
float calcula_media(float nota_1, float nota_2, float nota_3, int peso_1, int peso_2, int peso_3);


/* Função Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_ALL, "Portuguese_Brazil"); 

	int i, total_notas=3;
	float nota_1, nota_2, nota_3, media_ponderada;
	
    printf("----------------------------------------------\n");	                    /* Cabeçaalho */
    printf("                Média ponderada             \n");   
    printf("----------------------------------------------\n");	
    
    
 
    printf("Entre com 1ª nota: ");
	scanf("%d", &nota_1);
	
	printf("Entre com 2ª nota: ");
	scanf("%d", &nota_1);
	
	printf("Entre com 3ª nota: ");
	scanf("%d", &nota_1);	
		
	printf("A média é %.2f: ", calcula_media(nota_1, nota_2, nota_3, peso_1, peso_2, peso_3));
    
    
    printf("----------------------------------------------\n");         	        /* Rodapé */
    
    
    system("PAUSE");               							                        /* Faz uma parada na execução do programa */
		
    return 0;		        							                            /* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */


/* Desenvolvimento das funções */

float calcula_media(float nota_1, float nota_2, float nota_3, int peso_1, int peso_2, int peso_3)
{
	float resultado=0.0;
	
	resultado = (nota_1 * peso_1 + nota_2 * peso_2 + nota_3 * peso_3) / peso_1 + peso_2 + peso_3;
	return resultado
	
} /* end calcula_media */
