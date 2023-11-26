/*=================================================================*/
/* ----- Bibliotecas ----- */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*=================================================================*/
/* ----- Constantes ----- */
#define NUMS 49
#define MIN_APOSTA 6
#define NUM_LIN 7


/*=================================================================*/
/* ----- Protótipo das funções ----- */

void ini_random();
void inic(int v[NUMS]);
int ler_ns_apostas();
void gerar(int *v, int n);
void apresentar(int res[]);


/*=================================================================*/
/* ----- Função principal ----- */

int main()
{
    int vetor[NUMS];
    int n_nums;

    ini_random();
    
    putchar('\n');
    while(1)
    {
        puts("-----------------------------------------");
        puts("         Gerador de apostas              ");
        puts("-----------------------------------------");
        
        inic(vetor);
        if((n_nums = ler_ns_apostas()) == 0) break;
        gerar(vetor, n_nums);
        
        putchar('\n');
        
        apresentar(vetor);

    } /* end while */
    

    return 0;

} /* end main */


/*=================================================================*/
/* ----- Desenvolvimento das funções ----- */

void ini_random()
{
    long ultime;
    time (&ultime);
    srand((unsigned) ultime);

} /* end ini_random */


void inic(int v[])
{
    int i;
    for(i=0; i < NUMS; i++)
        v[i] = 0;

} /* end inic */


int ler_ns_apostas()
{
    int n;

    do
    {
        printf("Quantos Ns quer apostar (0 - Terminar): ");
        scanf("%d", &n);

    }while((n < MIN_APOSTA || n > NUMS) && n != 0);

    return n;

} /* end ler_ns_apostas */


void gerar(int *v, int n)
{
    register int i, indice;

    for(i=1; i <= n; i++)
    {
        indice = rand() % NUMS;
        if(v[indice] == 0)
            v[indice] = 1;
        else
            i--;

    } /* end for */

} /* end gerar */ 


void apresentar(int res[])
{
    int i;
    for(i=0; i < NUMS; i++)
    {
        if(res[i] == 0)
            printf(" %2d", i + 1);
        else
            printf(" XX");
        
        if((i + 1) % NUM_LIN == 0) putchar('\n');

    } /* end for */
    putchar('\n');

} /* end apresentar */


/*=================================================================*/
/* ----- Fim do programa ----- */
























