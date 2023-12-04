/*=====================================================================*/
/* ----- Bibiotecas -----*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*=====================================================================*/
/* ----- Protótipo das funções ----- */



/*=====================================================================*/
/* ----- Função Principal ----- */

int main()
{

    register int i, j;
    char nomecompleto[50 + 1], nome[20 + 1], sobrenome[30 + 1];

    printf("Nome: ");
    fgets(nomecompleto, sizeof(nomecompleto), stdin);
    if(nomecompleto[strlen(nomecompleto) - 1] == '\n') 
        nomecompleto[strlen(nomecompleto) - 1] = '\0'; 


    for(i=0; i < 20; i++)
            nome[i] = nomecompleto[i];

    for(j=0; j < 30; j++)
        sobrenome[j] = nomecompleto[30+j];
    
   // nome[i] = '\0';
    //sobrenome[i] = '\0';

    printf("%s, %s\n", sobrenome, nome);
    
    return 0;
	
} /* end main */


/*=====================================================================*/
/* ----- Desenvolvimento das funções ----- */ 






/*=====================================================================*/
/* ----- Fim do programa ----- */





