/* =================================================================================================
	M�dulo 6 
	Aula 0
	Descri��o: Exerc�cio 1 
	Autor: Wellington
	Data: 12/11/2023
	Atualiza��o: --
================================================================================================== */

/*
    Exerc�cio proposto: desenvolva uma fun��o em C para imprimir na tela a mensagem do
    Box 8 quando a entrada do usu�rio for o n�mero 3.

    +++++++++++++++++
    |               |
    |               |
    | N U M E R O 3 |
    |               |
    |               |
    +++++++++++++++++

    Box 8 - Sa�da para quando digitado o n�mero 3.
    Desenvolva uma segunda fun��o que ter� a mensagem do Box 9, sempre que o usu�rio
    entrar com o n�mero 7.
    +++++++++++++++++
    |               |
    |               |
    | N U M E R O 7 |
    |               |
    |               |
    +++++++++++++++++
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* --------------- Prot�tipos das fun��es ---------------- */ 

void display_box_1();
void display_box_2();
void display_box_3();
void display_box_4();
void display_box_5();
void display_box_6();
void display_box_7();
void display_box_8();
void display_box_9();
void display_box_10();



/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_CTYPE, "Portuguese"); */ 

    int number=0;                                                           /* Declara��o de vari�veis */

    do
    { 
        printf("----------------------------------------------\n");	    /* Cabe�aalho */
        printf("               Imprime box                    \n");   
        printf("----------------------------------------------\n");	
        
        printf("Digite um numero de 1 a 10 (0 para sair): ");               /* Entrada de dados */
        scanf("%d", &number);    
        
        printf("\n");                                                       /* Linha em branco extra */

        switch(number)                                                      /* Processa a entrada */
        {
            case 1: display_box_1(); break;
            case 2: display_box_2(); break;
            case 3: display_box_3(); break;
            case 4: display_box_4(); break;
            case 5: display_box_5(); break;
            case 6: display_box_6(); break;
            case 7: display_box_7(); break;
            case 8: display_box_8(); break;
            case 9: display_box_9(); break;
            case 10: display_box_10(); break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Valor invalido\n");

        } /* end switch */
        printf("\n");                                                       /* Linha em branco extra */

    }while(number);/* end do..while */

    
    printf("----------------------------------------------\n");             /* Rodap� */
    
    
    /* system("PAUSE"); */               				    /* Faz uma parada na execu��o do programa */
		
    return 0;		        					    /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


/* --------------- Desenvolvimento das fun��es ---------------- */ 

void display_box_1()
{
    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("| N U M E R O 1 |\n");
    printf("|               |\n");
    printf("+++++++++++++++++\n");

} /* end box 1*/

void display_box_2()
{
    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("| N U M E R O 2 |\n");
    printf("|               |\n");
    printf("+++++++++++++++++\n");

} /* end box 2*/

void display_box_3()
{ 
    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("| N U M E R O 3 |\n");
    printf("|               |\n");
    printf("+++++++++++++++++\n");

} /* end box 3*/

void display_box_4()
{
    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("| N U M E R O 4 |\n");
    printf("|               |\n");
    printf("+++++++++++++++++\n");

} /* end box 4*/

void display_box_5()
{
    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("| N U M E R O 5 |\n");
    printf("|               |\n");
    printf("+++++++++++++++++\n");

} /* end box 5*/

void display_box_6()
{
    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("| N U M E R O 6 |\n");
    printf("|               |\n");
    printf("+++++++++++++++++\n");

} /* end box 6*/

void display_box_7()
{
    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("| N U M E R O 7 |\n");
    printf("|               |\n");
    printf("+++++++++++++++++\n");

} /* end box 7*/

void display_box_8()
{
    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("| N U M E R O 8 |\n");
    printf("|               |\n");
    printf("+++++++++++++++++\n");

} /* end box 8*/

void display_box_9()
{
    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("| N U M E R O 9 |\n");
    printf("|               |\n");
    printf("+++++++++++++++++\n");

} /* end box 9*/

void display_box_10()
{
    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("|N U M E R O 10 |\n");
    printf("|               |\n");
    printf("+++++++++++++++++\n");

} /* end box 10 */
