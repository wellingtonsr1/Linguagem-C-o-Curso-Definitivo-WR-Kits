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


/* Prot�tipo das fun��es */
float calcula_media(float nota_1, float nota_2, float nota_3, int peso_1, int peso_2, int peso_3);


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_ALL, "Portuguese_Brazil"); 

	int i, total_notas=3;
	float nota_1, nota_2, nota_3, media_ponderada;
	
    printf("----------------------------------------------\n");	                    /* Cabe�aalho */
    printf("                M�dia ponderada             \n");   
    printf("----------------------------------------------\n");	
    
    
 
    printf("Entre com 1� nota: ");
	scanf("%d", &nota_1);
	
	printf("Entre com 2� nota: ");
	scanf("%d", &nota_1);
	
	printf("Entre com 3� nota: ");
	scanf("%d", &nota_1);	
		
	printf("A m�dia � %.2f: ", calcula_media(nota_1, nota_2, nota_3, peso_1, peso_2, peso_3));
    
    
    printf("----------------------------------------------\n");         	        /* Rodap� */
    
    
    system("PAUSE");               							                        /* Faz uma parada na execu��o do programa */
		
    return 0;		        							                            /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


/* Desenvolvimento das fun��es */

float calcula_media(float nota_1, float nota_2, float nota_3, int peso_1, int peso_2, int peso_3)
{
	float resultado=0.0;
	
	resultado = (nota_1 * peso_1 + nota_2 * peso_2 + nota_3 * peso_3) / peso_1 + peso_2 + peso_3;
	return resultado
	
} /* end calcula_media */
