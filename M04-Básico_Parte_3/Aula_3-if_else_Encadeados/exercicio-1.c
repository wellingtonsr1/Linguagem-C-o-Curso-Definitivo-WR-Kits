/* =================================================================================================
	Módulo 4, Parte 3
	Aula 3
	Descrição: Exercício 1
	Autor: Wellington
	Data: 10/11/2023
	Atualização: --
================================================================================================== */


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[]) {
	float tensao=0.0, resistencia=0.0;
	int opcao=0;
	
    printf("----------------------------------------------\n");	        		/* Cabeçaalho */
    printf("          Tensao e resistencia                \n");
    printf("----------------------------------------------\n");	
    
    printf("Informe a tensao: ");												/* Entrada de dados */
    scanf("%f", &tensao);
    
    printf("Informe a resistencia: ");											/* Entrada de dados */
    scanf("%f", &resistencia);
    
    system("CLS");																/* Limpa a tela */
    
    printf("----------------------------------------------\n");					/* Menu */
    printf("                  Menu                        \n");
    printf("----------------------------------------------\n");
    printf("1 - Corrente\n");
    printf("2 - Potencia\n");
    printf("3 - Tensao para 100mA\n\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &opcao);
	
	printf("\n");																/* Quebra de linha extra */
	
	if(opcao == 1)																/* Verificação das opções */
		printf("A corrente eh %.2f\n", tensao / resistencia);
	else if(opcao == 2)
		printf("A potencia eh %.2f\n", tensao * (tensao * resistencia));
	else if(opcao == 3)
		printf("A tensao para 100mA eh %.2f\n", 0.1 * (float)resistencia);
	else
		printf("Opcao invalida.\n");
		
		
    printf("----------------------------------------------\n");	        		/* Rodapé */
    
	system("PAUSE"); 				        									/* Faz uma parada na execução do programa */
		
	return 0;																	/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
