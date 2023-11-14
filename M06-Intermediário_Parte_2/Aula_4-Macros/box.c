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


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_ALL, "Portuguese_Brazil"); 

    int linha, coluna, altura=5, largura=17, number;                                /* Declara��o das vari�veis */
   
    while(1)                                                                        /* Loop infinito */
    {   

        printf("\n");                                                               /* Linha em branco extra */
        
        printf("----------------------------------------------\n");	            /* Cabe�aalho */
        printf("                BOX                           \n");   
        printf("----------------------------------------------\n");	
        
        printf("Digite um numero de 1 a 9 (0 para sair): ");                        /* Entrada de dados */
        scanf("%d", &number);
        
        printf("\n");                                                               /* Linha em branco extra */
    
        if(!number)                                                                 /* Encerra o programa */
        {
            printf("Encerrando o programa...\n"); 
            break;
        }
        

        if(number > 9)                                                              /* Mensagem de dados invalidos */
        { 
            printf("Valor invalido!\n");

        } /* end if external */
        else
        {
            /* ---------- Trecho onde � desenhado o box ---------- */
            
            for(linha=0; linha  < altura; linha++)  	
            {
    	        for(coluna=0; coluna < largura; coluna++)
    	        {
    	            if (linha == 0 || linha == altura - 1) printf("+");             /* Desenha as bordas superior e inferior */
            
                    if(linha >= 1 && linha <= 3){                                   /* Desenha as demais linhas (2 a 3) */
                        if(linha == 2)
                        {
                            printf("| N U M E R O %d |", number);                   /* Imprime o texto com o n�mero informado */
                            break;
                        }
                
                        if(coluna == 0 || coluna == largura - 1) printf("|");       /* Desenha a coluna da esquerda e direita */
                        if(coluna >= 1 && coluna <= largura - 1) printf(" ");       /* Deixa o interior do box 'vazio' */
                    }
			
	        } /* end for internal */
	        printf("\n");

            } /* end for external */
            
            /* ------------------- end trecho -------------------- */

        } /* end else external */

    } /* end while */
    

    printf("----------------------------------------------\n");         	        /* Rodap� */
     
    /* system("PAUSE"); */               						/* Faz uma parada na execu��o do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
