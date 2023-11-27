
o*==========================================================*/
=================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>


/*=================================================================*/
/* ----- Constantes ----- */


/*=================================================================*/
/* ----- Protótipo das funções ----- */


/*=================================================================*/
/* ----- Função principal ----- */

int main()
{

    char nome[50];

    printf("Introduza o nome completo: ");
    // scanf("%s", nome);                      /* pega apenas um nome até um espaço */
    fgets(nome, sizeof(nome), stdin);       /* ignora espaços e pega todas as palavras (OBS: gets deve ser evitada)*/
    
   // printf("Nome: %s\n", nome);           /* printf + scanf, assim como fgets (gets) + puts */
    puts(nome);                             /* exibe a string completo */

    return 0;

} /* end main */


/*=================================================================*/
/* ----- Desenvolvimento das funções ----- */


/*=================================================================*/
/* ----- Fim do programa ----- */
