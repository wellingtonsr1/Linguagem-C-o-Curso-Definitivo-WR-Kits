/* =================================================================================================
	Módulo 3, Parte 2
	Aula 3
	Descrição: Exercício 1 - casting
	Autor: Wellington
	Data: 08/11/2023
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* https://www.inf.ufpr.br/roberto/ci067/18_casting.html */

/* Função principal */
int main() {

    int minutos=0;                                                                      /* Declaração de variáveis */
    float horas=0.0;

    printf("----------------------------------------------\n");                         /* Cabeçalho */
    printf("    Conversor de minutos para horas           \n");
    printf("----------------------------------------------\n");

    printf("Informe os minutos: ");                                                     /* Entrada dos minutos */
    scanf("%d", &minutos);
    
    horas = (float) minutos / 60;                                                       /* Cálculo das horas */
     
    printf("%d minutos convertido(s) para hora(s) eh %.2f\n", minutos, horas);          /* Resultado na tela */
  
    printf("----------------------------------------------\n");                         /* rodapé */

    /* systema("PAUSE"); */                                             
    return 0;

} /* end main */
