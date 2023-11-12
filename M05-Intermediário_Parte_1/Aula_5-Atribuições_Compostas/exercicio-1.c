/* =================================================================================================
	Módulo 5
	Aula 5
	Descrição: Exercício 1 
	Autor: Wellington
	Data: 12/09/2023
	Atualização: --
================================================================================================== */



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/* Função Principal */
int main(int argc, char *argv[])
{
									
    /* setlocale(LC_ALL, "Portuguese_Brazil"); */ 

    int a, a1, a2, a3, a4, 
        b, b1, b2, b3, b4, 
        c, c1, c2, 
        d, d1, d2,
        e, e1, e2,
        ad = 1, sub =1, mult = 3, 
        div = 2, mod = 2;
	
    printf("----------------------------------------------\n");	                        /* Cabeçaalho */
    printf("            Atribuições Compostas             \n");   
    printf("----------------------------------------------\n");	
    
    a=a1=a2=a3=a4=5;
    printf("a = %d\n", a);
    printf("a = a + %d => %d\n", ad, a1 = a1 + ad);
    printf("a += %d => %d\n", ad, a2 += 1);
    printf("a++ = %d\n", a3++);
    printf("++a = %d\n", ++a4);
    
    printf("\n");
 
    b=b1=b2=b3=b4=7;
    printf("b = %d\n", b); 
    printf("b = b - %d => %d\n", sub, b1 = b1 - 1);
    printf("b += %d => %d\n", sub, b2 -= 1);
    printf("--b = %d\n", b3--);
    printf("b-- = %d\n", --b4);
    
    printf("\n");
 
    c=c1=c2=8;
    printf("c = %d\n", c); 
    printf("c = c * %d => %d\n", mult, c1 = c1 * mult);
    printf("c *= %d => %d\n", mult, c2 *= mult);
    
    printf("\n");
    
    d=d1=d2=9; 
    printf("d = %d\n", d); 
    printf("d = d / %d => %d\n", div, d1 = d1 / div);
    printf("d /= %d => %d\n", div, d2 /= div);
    
    printf("\n");
    
    e=e1=e2=13; 
    printf("e = %d\n", e); 
    printf("e = e %% %d => %d\n", mod, e1 = e1 % mod);
    printf("e %= %d => %d\n", mod, e2 %= mod);
    
    
    printf("----------------------------------------------\n");         	        /* Rodapé */
    
    
    /* system("PAUSE");    */           							/* Faz uma parada na execução do programa */
		
    return 0;		        							/* Retorna '0' se tudo ocorrer bem na execução */
	
}  /* Fim da função main */
