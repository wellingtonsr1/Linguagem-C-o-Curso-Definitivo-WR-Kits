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

/* ---------- Prot�tipos das fun��es ---------- */
void display_box(int n);


/* Fun��o Principal */
int main(int argc, char *argv[])
{
									
    setlocale(LC_ALL, "Portuguese_Brazil"); 

    int number;

    while(1)                                                                        /* Loop infinito */
    {   
        printf("\n----------------------------------------------\n");	            /* Cabe�aalho */
        printf("                BOX                           \n");   
        printf("----------------------------------------------\n");	
        
        printf("Digite um numero de 1 a 9 (0 para sair): ");                        /* Entrada de dados */
        scanf("%d", &number);
        
        printf("\n");                                                               /* Linha em branco extra */
    
        if(!number)                                                                 /* Encerra o programa */
        {
            printf("Encerrando o programa...\n"); 
            break;

        } /* end if*/
        
        number > 9 ? printf("Valor invalido!\n") : display_box(number);

    } /* end while */
    

    printf("----------------------------------------------\n");         	                /* Rodap� */
     
    /* system("PAUSE"); */               					                /* Faz uma parada na execu��o do programa */
		
    return 0;		        						                /* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */


/* Desenvolvimentos das fun��es */
void display_box(int n)
{
    
    int linha, coluna, altura=5, largura=17;                                /* Declara��o das vari�veis */
    
    /* ---------- Trecho onde � desenhado o box ---------- */        
    for(linha=0; linha  < altura; linha++)  	
    {
        for(coluna=0; coluna < largura; coluna++)
    	{
    	    if(linha == 0 || linha == altura - 1) printf("+");                         /* Desenha as bordas superior e inferior */
            
            if(linha >= 1 && linha <= 3){                                               /* Desenha as demais linhas (2 a 3) */
                if(linha == 2)
                {
                    printf("| N U M E R O %d |", n);                               /* Imprime o texto com o n�mero informado */
                    break;

                } /* end if internal */
                
                coluna == 0 || coluna == largura - 1 ? printf("|") : printf(" ");       /* Desenha a coluna da esquerda e direita */
                    
            } /* end if external */
			
	} /* end for internal */
	printf("\n");

    } /* end for external */        
    /* ------------------- end trecho -------------------- */

} /* end display_box */


