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

	int linha, coluna, i,j;
	
    printf("----------------------------------------------\n");	                        /* Cabe�aalho */
    printf("                  ���o           \n");   
    printf("----------------------------------------------\n");	
    
    
   	for(linha=0; linha  < 5; linha++)  	
    {
    	for(coluna=0; coluna < 10; coluna++)
    	{
    		/* --------------- Topo e base ------------------ */
    		if (linha == 0 || linha == 5 - 1) 
			{
    			printf("+");
			}
			
			/* --------------- Lado esquerdo ------------------ */
			if (linha == 1 && coluna == 0) 
			{
    			printf("|");
			}
			
			if (linha == 2 && coluna == 0) 
			{
    			printf("|");
			}
			
			if (linha == 3 && coluna == 0) 
			{
    			printf("|");
			}
			
			/* --------------- centro ------------------ */
			if(linha == 1) 
			{
    			printf(" ");
			}
		
			if(linha == 2) 
			{
    			printf(" ");
			}
			
			if(linha == 3)
			{
    			printf(" ");
			}
			
			/* --------------- Lado direito  ------------------ */
			if (linha == 1 && coluna == 7) 
			{
    			printf("|");
			}
		
			
			if (linha == 2 && coluna == 7) 
			{
    			printf("|");
			}
			
			if (linha == 3 && coluna == 7) 
			{
    			printf("|");
			}
			
		}
	
    	printf("\n");
			
	} /* end for internal */
		

    
    printf("----------------------------------------------\n");         	        /* Rodap� */
    
    /*
    
    
    
        
  1  for(linha=4; linha < 5; linha++)
    {
    	for(coluna=0; coluna < 10; coluna++)  	
    	{
    		printf("*");
    	}
    }
    	
    	linha 0	**********
    	linha 1	*bbbbbbbb*
    	linha 2	*bbbbbbbb*
    	linha 3	*bbbbbbbb*
    	linha 4	
    		
    		

    		

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    */
    
    system("PAUSE");               							/* Faz uma parada na execu��o do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execu��o */
	
}  /* end main */
