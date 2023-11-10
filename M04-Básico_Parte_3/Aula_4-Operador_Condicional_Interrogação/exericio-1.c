/* =================================================================================================
	Módulo 4, Parte 3
	Aula 4
	Descrição: 
	Autor: Wellington
	Data: 10/11/2023
	Atualização: --
================================================================================================== */


/*
	Escreva um programa em C para emitir um alerta via console quando a tensao de uma determinada bateria estiver abaixo de 10Volts.
	Caso contrario, o sistema informa que a tensao esta OK.
	O usuario entra com o valor da tensao em numero real via teclado e o sistema realiza a verificacao e informa o status.
	Utilize o operador interrogacao(?) para o teste condicional.
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>


/* Função Principal */
int main(int argc, char *argv[])
{
	float tensao=0.0;																/* Declaração de variáveis */
	
    printf("----------------------------------------------\n");	        			/* Cabeçaalho */
    printf("            Verifica bateria                  \n");
    printf("----------------------------------------------\n");	
    
    printf("Informe a tensao: ");													/* Entrada de dados */
    scanf("%f", &tensao);
    
    tensao < 10 ? printf("Alerta: tensao baixa.\n") : printf("Tensao OK!\n");		/* Faz a checagem e exibe o resultado na tela */
    
    
    printf("----------------------------------------------\n");	        			/* Rodapé */
    
	system("PAUSE"); 				        										/* Faz uma parada na execução do programa */
		
	return 0;																		/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* end main */
