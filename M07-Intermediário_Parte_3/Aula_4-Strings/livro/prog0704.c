/*=================================================================*/
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <string.h>

/*=================================================================*/
/* ----- Constantes ----- */


/*=================================================================*/
/* ----- Protótipo das funções ----- */


/*=================================================================*/
/* ----- Função principal ----- */

int main()
{

    char nome[50];
    for(;;)
    {
        printf("Introduza o nome completo: ");
         //scanf("%s", nome);                       /* pega apenas um nome até um espaço */
        
        fgets(nome, sizeof(nome), stdin);           /* ignora espaços, tab e quebra de linha,i e pega todas as palavras (OBS: gets deve ser evitada)*/
        if (nome[strlen(nome) - 1] == '\n') 
            nome[strlen(nome) - 1] = '\0';                /* como o fgets coloca um \n, as vezes é preciso tirá-lo usando essa instrução */

        //scanf("%[^\n]%*c", opcao);                /* ou usar o scanif assim */
        
        //gets(nome);
        
        if(nome[0] == '\0') 
            break;
        else
            printf("Nome: %s\n", nome);             /* printf + scanf, assim como fgets (gets) + puts */
            //puts(nome);                           /* exibe a string completo */

    } /* end for (loop infinito) */


    return 0;

} /* end main */


/*=================================================================*/
/* ----- Desenvolvimento das funções ----- */


/*=================================================================*/
/* ----- Fim do programa ----- */
