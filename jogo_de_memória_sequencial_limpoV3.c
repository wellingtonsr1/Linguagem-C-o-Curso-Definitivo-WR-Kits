/* ======================================================================================================= 
    IESP FACULDADES
    CURSO DE SISTEMAS DE INFORMAÇÃO
    DISCIPLINA: LINGUAGEM DE PROGRAMAÇÃO I
    PROJETO DE CONCLUSÃO DO 2° PERÍODO
    JOGO DE MEMÓRIA
    ALUNOS : INEILTON E WELLINGTON 
======================================================================================================= */
   

/* ======================================================================================================= */
/* ----- Bibliotecas ----- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

/* ======================================================================================================= */
/* ----- Estruturas ----- */
typedef struct jogos
{
	char nomes[15 + 1];
	int ponto;
	    
}Tjogo;

/* ======================================================================================================= */
/* ----- Declaração de variáveis ----- */
int acertos[14] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
char tela[14] = {'\1','\2','\3','\4','\5','\6','\14','\1','\2','\3','\4','\5','\6','\14'};
Tjogo registro;
FILE *cfptr;
char resp;

/* ======================================================================================================= */
/* ----- Protótipo das funções ----- */ 
int permutar(void);
int painel(char [14]);
void encerrar(void);
void numeros(int cont);
void gravar(int cont, int contador);
void ler(int cont);
void apagar(void);
void menu(void);
void zerar(void);
void clear_screen();

/* ======================================================================================================= */
/* ----- Função principal ----- */
int main()
{
	

    
    //#if _WIN32 
		//setlocale(LC_ALL, "Portuguese_Brazil"); 
    //#endif
    
    clear_screen();
    /*system("color 9f");//muda acor da tela de preto para azul 
    printf("\n\n\n\t\t\t\t  J");Sleep(100);printf("O");Sleep(100); printf("G"); Sleep(100);printf("O"); Sleep(100);
    printf(" ");Sleep(100);printf("\n\n\t\t\t\t   D");Sleep(100);printf("E");Sleep(100);printf(" ");Sleep(100); 
    printf("\n\n\t\t\t\tM"); Sleep(200);printf("E");Sleep(200); printf("M");Sleep(200); printf("%c",224);Sleep(200);   
    printf("R");Sleep(100);printf("I");Sleep(100);printf("A%c", 169);Sleep(500); 
         
    printf("\n\n\n\t\tD");Sleep(100);printf("E");Sleep(100); printf("S");Sleep(100);printf("E");Sleep(100);
    printf("N");Sleep(100);printf("V");Sleep(100);printf("O");Sleep(100);printf("L");Sleep(100); printf("V"); 
    printf("I");Sleep(100);printf("D");Sleep(100); printf("O");Sleep(100);printf(" ");Sleep(100);printf("P");   
    Sleep(100);printf("O");Sleep(100);printf("R");Sleep(100);printf(" ");Sleep(100);printf("I");Sleep(100);  
    printf("N");Sleep(100);printf("E");Sleep(100);printf("I");Sleep(100);printf("L");Sleep(100);printf("T"); 
    Sleep(100);printf("O");Sleep(100);printf("N");Sleep(100);printf(" ");Sleep(100);printf("E");Sleep(100);
    printf(" ");Sleep(100);printf("W");Sleep(100);printf("E");Sleep(100);printf("L");Sleep(100);printf("L"); 
    Sleep(100);printf("I");Sleep(100);printf("N");Sleep(100);printf("G");Sleep(100);printf("T");Sleep(100);
    printf("O");Sleep(100);printf("N");Sleep(100);printf(" ");Sleep(100);printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tT"); 
    Sleep(100);printf("O");Sleep(100);printf("D");Sleep(100);printf("O");Sleep(100);printf("S");Sleep(100);
    printf(" ");Sleep(100);printf("O");Sleep(100);printf("S");Sleep(100);printf(" ");Sleep(100);printf("D"); 
    Sleep(100);printf("I");Sleep(100);printf("R");Sleep(100);printf("E");Sleep(100);printf("I");Sleep(100);
    printf("T");Sleep(100);printf("O");Sleep(100);printf("S");Sleep(100);printf(" ");Sleep(100);printf("R"); 
    Sleep(100);printf("E"); printf("S");Sleep(100);printf("E");Sleep(100);printf("R");Sleep(100);printf("V"); 
    Sleep(100);printf("A");Sleep(100);printf("D");Sleep(100);printf("O");Sleep(100);printf("S"); 
    Sleep(500); */
    
    menu();
        
	return 0;
  
} /* end main */

/* ======================================================================================================= */
/* ----- Desenvolvimento das funções ----- */

/* ======================================================================================================= */
/* ----- Função permutar ----- */
int permutar(void)//função para misturar os caracteres
{
	int i, j, aux;
	srand(time(NULL));

   	clear_screen();
   	system("color 9f"); 
  
   	for(i=0; i < 14; i++)//For para misturar os caracteres
   	{
    	j = rand() % 14;
      	aux = tela[i];
      	tela[i] = tela[j];
      	tela[j] = aux;
      	
   	} /* end for */
   
   	painel(tela);
  
} /* end permutar */

/* ======================================================================================================= */
/* ----- Função painel ----- */
int painel(char tela[14])
{
	int i,j,x;
   	int n1[14] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   	int cont=0;
   	int contador=0;
   	FILE *cfptr;
   
   	clear_screen();
   
   	putchar('\n');
   	
   	printf("%40s\n", "Digite o seu nome para iniciar o jogo");
   	printf("%7s", ">>> "); 
	scanf("%15s", &registro.nomes);
   
	clear_screen();
   	printf("\n");
   	Sleep(200);  
   	putchar('\n');
   	printf("%35s\n", "* MEMORIZE! *");
   	
   	putchar('\n');
   	putchar('\n');
   	
   	Sleep(400);
   
   	//For para imprimir os caracteres na tela  
   	for(i=0; i < 14; i++)
   	{
    	printf("     ");
      	printf(" %c ", tela[i]);
      	Sleep(200);  
   
      	if(i == 6) {putchar('\n'); putchar('\n'); putchar('\n'); putchar('\n');}
        
   	} /* end for */
   
   	//imprime o tempo de visualização dos caracteres

   	putchar('\n');
   	
   	Sleep(200);  
   	printf("%77s", "Tempo: ");
   	Sleep(500);  
   	for (x=1; x <= 5; x++)
   	{
    	printf("%d ", x);
      	Sleep(1000);  
      
   	} /* end for */
   
   	do //recebe as escolhas dos números
   	{
    	do
     	{       
        	clear_screen();
        	putchar('\n'); putchar('\n'); putchar('\n'); putchar('\n'); putchar('\n');
        	
        	for(i=0; i < 14; i++)
        	{
           		if (acertos[i] == 1)
              		printf("     %c  ", tela[i]);
           		else
              		printf("     \xDB\xDB "); /* \xdb é o 219 em dec*/
                
           		if(i == 6) printf("\n\n\n\n"); 
           
        	} /* end for */
        
        	numeros(cont);
        	
        	putchar('\n');
        	putchar('\n');
        	
        	printf("%33s ", "N\xA3mero 1: "); /* \xA3 é o valor de ú em decimal */
        	scanf("%d", &i);
    
     	}while((i <= 0) || (i > 14) || (i == n1[0]) || (i == n1[1]) || (i == n1[2])
     	|| (i == n1[3]) || (i == n1[4]) || (i == n1[5]) || (i == n1[6]) || (i == n1[7])
     	|| (i == n1[8]) || (i == n1[9]) || (i == n1[10])||(i == n1[11])
     	|| (i == n1[12]) || (i == n1[13]) || (i == n1[14])); /* end do...while internal 1 */
     
      	do
      	{
        	clear_screen();
        	printf("\n\n\n\n\n");
        
        	for(j=0; j < 14; j++)
        	{
           		if (acertos[j] == 1)
              		printf("     %c  ", tela[j]);
           		else
              		printf("     \xDB\xDB "); /* \xdb é o 219 em dec*/
                
           		if(j == 6) printf("\n\n\n\n"); 

        	} /* end for */
        
        	numeros(cont);
        	
        	putchar('\n');
        	putchar('\n');
        	printf("%33s %d\n", "N\xA3mero 1: ", i); /* \xA3 é o valor de ú em decimal */
        	printf("%33s %c\n", "Figura  : ", tela[i-1]); 

        	printf("%33s ", "N\xA3mero 2: ");  /* \xA3 é o valor de ú em decimal */
        	scanf("%d", &j); 
       
     	}while((j <= 0)      || (j > 14)      || (i == j)     || (j == n1[0])  || (j == n1[1])  || 
		 	   (j == n1[2])  || (j == n1[3])  || (j == n1[4]) || (j == n1[5])  || (j == n1[6])  || 
			   (j == n1[7])  || (j == n1[8])  || (j == n1[9]) || (j == n1[10]) || (j == n1[11]) || 
			   (j == n1[12]) || (j == n1[13]) || (j == n1[14])); /* end do...while internal 2 */
     
     
   		printf("%33s %c\n", "Figura  : ", tela[j-1]);

   		if(tela[i-1] == tela[j-1])
   		{
      		acertos[i-1] = 1;
      		acertos[j-1] = 1;     
      		cont+=3;//inclementa 3 em cont
      		contador++;
      		putchar('\n');
      		printf("%36s", "Voc\x88 acertou!"); /* \x88 é o valor de ê em decimal */
      		n1[i-1] = i;
      		n1[j-1] = j;
      
   		} /* end if */
   		else
   		{
       		cont-=1;//declementa 1 de cont
       		putchar('\n');
       		printf("%35s", "Voc\x88 errou!");  /* \x88 é o valor de ê em decimal */
      
   		} /* end else */
   
   		getchar();
   		getchar();
  
   		if(contador == 7 && cont > 0)
   		{
        	clear_screen();
         	//130, 136, 135, 132 é o valor de é, ê, ç, ã respectivamente em decimal
         	putchar('\n');
         	putchar('\n');
         	printf("%15s %s%s %d %s", "Parab\x82ns,", registro.nomes, ", voc\x88 ganhou e sua Pontua\x87\x83o foi", cont, "!!!!");
         	gravar( cont, contador);//função para gravar os dados no arquivo
         	clear_screen();
         	putchar('\n');
         	printf("%41s\n", "---------------------------------");   
         	printf("%33s", "Escolha uma op\x87\xC6o\n"); /* \x87 e \xC6 é o valor em decimal de ç e ã */
			printf("%41s\n", "---------------------------------");                 
			putchar('\n');
			printf("%29s\n", "< M > Voltar ao menu."); 
			printf("%20s\n", "< J > Jogar."); 
			printf("%19s\n", "< S > Sair."); 
			printf("%12s", ">>> ");
			scanf("%c", &resp);
			
         	//Neste trecho o jogador escolhe se quer acessar o menu, jogar novamente ou sair do jogo
         	if(resp == 'm' || resp == 'M') 
         	{
            	zerar();//apos a escolha do jogador esta função é chamada para zerar o vetor acertos
            	menu();//após a escolha do jogador esta função menu é chamada
            
         	}  /* end if internal */
         
         	if(resp == 'j' || resp=='J')
         	{
            	zerar();//apos a escolha do jogador esta função é chamada para zerar o vetor acertos
            	permutar();//após a escolha do jogador esta função é chamada
            	
         	} /* end if internal */
        
         	if(resp == 's' || resp == 'S') encerrar();//após a escolha do  jogador esta função é chamada para fechar o programa
         
   		} /*end if external 1*/
   
   		if(contador == 7 && cont < 0)
   		{
        	clear_screen();
        	putchar('\n');
        	putchar('\n');
         	printf("%15s%s %d %s", registro.nomes, ", voc\x88 acertou todos os desenhos, mas sua Pontuacao foi", cont, "!!!!");
         	gravar(cont, contador);//função para gravar os dados no arquivo
         	clear_screen();
         	putchar('\n');
         	printf("%41s\n", "---------------------------------");   
         	printf("%33s", "Escolha uma op\x87\xC6o\n"); /* \x87 e \xC6 é o valor em decimal de ç e ã */
			printf("%41s\n", "---------------------------------");                 
			putchar('\n');
			printf("%29s\n", "< M > Voltar ao menu."); 
			printf("%20s\n", "< J > Jogar."); 
			printf("%19s\n", "< S > Sair."); 
			printf("%12s", ">>> ");
			scanf("%c", &resp);
			
         	if(resp == 'm' || resp == 'M') 
         	{
            	zerar();//apos a escolha do jogador esta função é chamada para zerar o vetor acertos
            	menu();//após a escolha do jogador esta função menu é chamada
            
         	}  
         
         	if(resp == 'j' || resp=='J')
         	{
            	zerar();//apos a escolha do jogador esta função é chamada para zerar o vetor acertos
            	permutar();//após a escolha do jogador esta função é chamada
            
         	} 
         
         	if(resp == 's' || resp == 'S') encerrar();//após a escolha do  jogador esta função é chamada para fechar o programa
         
   		}  /* end if exteral 2 */
 
  	}while(contador != 7); 
 
 	return (contador, cont);
 
} /* end painel */


/* ======================================================================================================= */
/* ----- Função numeros ----- */
void numeros(int cont)//inicío da função numeros
{
	register int  x;
 	
 	putchar('\n');
   	printf("%80s %d", "Ponto(s): ", cont);
  
   	//for para apagar os números
   	for(x=0; x < 14; x++){
		if(x % 7 == 0) printf("\n\n\n");
      
      	if (acertos[x] == 1)
        	printf("        ");
      	else
        	printf("%7d ", x+1);
        
   	} /* end for */

} /* end numeros */


/* ======================================================================================================= */
/* ----- Função encerrar ----- */
void encerrar(void)//início da função encerrar
{
	register int x, i = 0;
    char p = {'.'}; 
    
   	do
   	{ 
    	system("cls");//limpa a tela
    	putchar('\n'); putchar('\n');
      	printf("%35s", "O Jogo est\xA0 sendo encerrado"); /* \xA0 é o caracter á */
      	for (x=1; x <= 3; x++)
      	{
        	printf("%c ", p);
         	Sleep(200); 
      
      	} /* end for */
      	i++; 
      
   	}while(i <= 3); /* end do...while */
   
   	exit(0);
  
} /* end encerrar */


/* ======================================================================================================= */
/* ----- Função gravar ----- */
void gravar(int cont, int contador)//início da função gravar
{
    
	FILE *cfptr;//ponteiro
  	registro.ponto=cont;
  	//registro.hora=system ("date");
  
  	if((cfptr =fopen("arquivo.txt", "a")) == NULL)
  	{
    	printf("aquivo n\xC6o pode ser aberto\n");
     	exit(1);
     
  	} /* end if */
   
    fprintf(cfptr, "%s""\t""%d\n", registro.nomes, registro.ponto);                 
    fclose(cfptr);
                       
  	getchar();
  
} /* end gravar */


/* ======================================================================================================= */
/* ----- Função ler ----- */
void ler(int cont)//início da função ler
{
	FILE *cfptr;
  
	clear_screen();
  	if((cfptr = fopen("arquivo.txt", "r")) == NULL)
  	{
  		putchar('\n');
    	printf("%39s\n", "N\xC6o foi poss\xA1vel abrir o arquivo para escrita.");
     	exit(1);
     
    } /* end if */
    else
    {
    	putchar('\n');
    	printf("%38s\n", "-----------------------------------");
    	printf("%14s%18s\n", "Nome ", "Pontos ");
    	printf("%38s\n", "-----------------------------------");
        fscanf(cfptr,"%15s" "%d", &registro.nomes, &registro.ponto);
         
        while(!feof(cfptr))
        {                  
        	printf("\t%-10s""\t" "%3d\n", registro.nomes, registro.ponto);
            fscanf(cfptr,"%s""%d", &registro.nomes, &registro.ponto);
             
        } /* end while */ 
         
        fclose(cfptr);
         
     } /* end else */
     
     getchar();
     getchar();
 
} /* end ler */


/* ======================================================================================================= */
/* ----- Função apagar ----- */
void apagar(void)//início da função apagar
{
	FILE *cfptr;//ponteiro
   
   	clear_screen();
   	if((cfptr = fopen("arquivo.txt", "w")) == NULL)
   	{
    	putchar('\n');
    	printf("%39s\n", "N\xC6o foi poss\xA1vel abrir o arquivo para exclus\xC6o.");
     
   	} /* end if */
   	else
   	{	
    	fscanf(cfptr,"%s""%d", &registro.nomes, &registro.ponto);    
      	registro.ponto ='\0';
    
      	fclose(cfptr);
      
   	} /* end else */
   
	clear_screen();
	putchar('\n'); putchar('\n');
    printf("%41s\n", "Pontua\x87\xC6o exclu\xA1 \bda com sucesso!"); /* aqui usei o \b backspace para juntar o da com parte excluída */
    putchar('\n');
    printf("%45s\n", "Pressione <enter> para retornar ao menu.");
    getchar(); 
    getchar(); 
      
} /* end apagar */


/* ======================================================================================================= */
/* ----- Menu ----- */
void menu(void)//início da função menu
{
	int opcao,i,j;
    int contador, cont=0;
    char tela[14];
    
	do //menu para a escolher o jogar ou sair do jogo
    {
    	clear_screen();
       	system("color 9f"); 
       	Sleep(300); 

		printf("%29s\n", "----------------------");  
       	printf("%20s\n", "Menu");
       	printf("%29s\n", "----------------------"); 
		putchar('\n'); 
       	printf("%16s\n", "1. Jogar");  
       	printf("%20s\n", "2. Pontua\x87\xC6o");  
       	printf("%28s\n", "3. Excluir Pontua\x87\xC6o");
       	printf("%15s\n", "0. Sair");  
       	putchar('\n'); 
       	printf("%27s", "Escolha uma op\x87\xC6o: ");  
       	scanf("%d", &opcao); 
           
       	switch (opcao)
       	{                                   
        	case 1:	                        
            	permutar();
             	break;
          	case 2:
            	//se esta opção for escolhida e não existir um arquivo é automáticamente criado 
             	if((cfptr = fopen("arquivo.txt", "a")) == NULL)
             	{
             		putchar('\n');
                	printf("%39s\n", "N\xC6o foi poss\xA1vel abrir o arquivo para escrita.");
                 	gravar(cont, contador);
     
             	} /* end if */
             
             	ler(cont);
             	break;
            case 3:
            	apagar();
             	break;
          	case 0:
             	encerrar();
            	break;
          
       	}  /* end switch */
       	
	}while(1); /* end do...while */
  
    getchar();
    
} /* end menu */


/* ======================================================================================================= */
/* ----- Função zerar ----- */
void zerar(void)//início da função zerar
{
	register int i;
   
   	for(i=0; i < 14; i++)
    	acertos[i] = '\0';//vetor acertos é zerado
      
} /* end zerar */


/* ======================================================================================================= */
/* ----- Função clear_screnn ----- */
void clear_screen()
{
    #ifdef __linux__
        system("clear");
    #elif _WIN32
        system("CLS");
    #else

    #endif

} /* end clear_screen */

/* ======================================================================================================= */
/* ----- Fim do programa ----- */
 
