//IESP FACULDADES
//CURSO DE SISTEMAS DE INFORMA��O
//DISCIPLINA: LINGUAGEM DE PROGRAMA��O I
//PROJETO DE CONCLUS�O DO 2� PER�ODO
//JOGO DE MEM�RIA
//ALUNOS : INEILTON E WELLINGTON

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

typedef struct jogos
{
      char nomes[15];
      int ponto;
      
        
}Tjogo;


int acertos[14] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
char tela[14] = {'\1','\2','\3','\4','\5','\6','\14','\1','\2','\3','\4','\5','\6','\14'};
Tjogo registro;
FILE *cfptr;
char resp;

//prot�tipos das fun��es  
int permutar(void);
int painel(char [14]);
void encerrar(void);
void numeros(int cont);
void gravar(int cont, int contador);
void ler(int cont);
void apagar(void);
void menu(void);
void zerar(void);

//in�cio da fun��o main
int main()
{
    
    #if _WIN32 
		setlocale(LC_ALL, "Portuguese_Brazil"); 
    #endif
    
   
    system("cls");//limpa a tela
    system("color 9f");//muda acor da tela de preto para azul 
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
    Sleep(500);
    
    
    menu();//fun��o menu
        
  return 0;
  
}//fim da fun��o main


int permutar(void)//fun��o para misturar os caracteres
{
   
   int i, j, aux;
   srand(time(NULL));

   system("cls");//limpa a tela 
   system("color 9f"); 
  
   for(i = 0; i<14; i++)//For para misturar os caracteres
   {
      j = rand()%14;
      aux = tela[i];
      tela[i] = tela[j];
      tela[j] = aux;
   }
   
   painel(tela);
  
}

//fun��o para mostrar os caracteres e o tempo de visualiza��o
int painel( char tela[14])
{
   int i,j,x;
   int n1[14] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int cont=0;
   int contador=0;
   FILE *cfptr;
   
  
   system("cls");//limpa a tela
   
   printf("\n\n\t\tDigite o seu nome para iniciar o jogo\n");
   printf("\n\t\t=> "); scanf("%s",&registro.nomes);
   
   system("cls");
   printf("\n");
   Sleep(200);  
   printf("\n\t\t\t* MEMORIZE ! *\n\n\n");
   Sleep(400);
   
   //For para imprimir os caracteres na tela  
   for(i = 0; i<14; i++)
   {
      printf("     ");
      printf(" %c ", tela[i]);
      Sleep(200);  
   
      if(i == 6)
      {
         printf("\n\n\n\n");
      }
        
   }
   
   //imprime o tempo de visualiza��o dos caracteres
   printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
   Sleep(200);  
   printf("\t\t\tTempo : ");
   Sleep(500);  
   for (x = 1; x <=5; x++)
   {
      printf("%d ", x);
      Sleep(1000);  
   }
   
   do//recebe as escolhas dos n�meros
   {
     do
     {       
        system("cls");
        printf("\n\n\n\n\n");
        
        for(i = 0; i<14; i++)
        {
           if (acertos[i] == 1)
              printf("     %c  ", tela[i]);
           else
              printf("     %c%c ",219,219);
                
 
           if(i == 6)
           {
           printf("\n\n\n\n"); 
           }
        
        }
         numeros(cont);
        printf("\n\n\t\tN%cmero 1: ", 163);//163 � o valor de � em decimal 
        scanf("%d", &i);
       
        
        
     }while((i<=0)||(i>14)||(i == n1[0])||(i == n1[1])||(i == n1[2])
     ||(i == n1[3])||(i == n1[4])||(i == n1[5])||(i == n1[6])||(i == n1[7])
     ||(i == n1[8])||(i == n1[9])||(i == n1[10])||(i == n1[11])
     ||(i == n1[12])||(i == n1[13])||(i == n1[14]));
     
 
   
      do
      {
        system("cls");
        printf("\n\n\n\n\n");
        
        for(j = 0; j<14; j++)
        {
           if (acertos[j] == 1)
           
              printf("     %c  ", tela[j]);
           else
              printf("     %c%c ",219,219);
                
 
           if(j == 6)
           {
              printf("\n\n\n\n"); 
           }
       
        }
        numeros(cont);
        printf("\n\n\t\tN%cmero 1: %d", 163, i);//163 � o valor de � em decimal 
        printf("\n\t\tFigura %c \n", tela[i-1]); 

        printf("\t\tN%cmero 2: ", 163);//163 � o valor de � em decimal 
        scanf("%d", &j); 
       
     }while((j<=0)||(j>14)||(i==j)||(j == n1[0])||(j == n1[1])||(j == n1[2])
     ||(j == n1[3])||(j == n1[4])||(j == n1[5])||(j == n1[6])
     ||(j == n1[7])||(j == n1[8])||(j == n1[9])||(j == n1[10])
     ||(j == n1[11])||(j == n1[12])||(j == n1[13])||(j == n1[14]));
     
     
   printf("\t\tFigura %c \n", tela[j-1]);

   if(tela[i-1] == tela[j-1])
   {
      acertos[i-1] = 1;
      acertos[j-1] = 1;     
      cont+=3;//inclementa 3 em cont
      contador++;
      printf("\n\t\t\t\tVoc%c acertou!", 136);//136 � o valor de � em decimal
      n1[i-1] = i;
      n1[j-1] = j;
      
   }
   else
   {
       cont-=1;//declementa 1 de cont
       printf("\n\t\t\tVoc%c errou!", 136);//136 � o valor de � em decimal
      
      
   }
   getchar();
   getchar();
  
   if((contador==7)&&(cont > 0))
   {
         system("cls");//limpa a tela
         //130, 136, 135, 132 � o valor de �, �, �, � respectivamente em decimal
         printf("\n\n\n\tParab%cns %s, voc%c ganhou e sua Pontua%c%co foi %d !!!!\n", 130, registro.nomes, 136, 135, 198,cont);
         gravar( cont, contador);//fun��o para gravar os dados no arquivo
         system("cls");//limpa a tela
         printf("\n\n\n\t\t\tEscolha uma op%c%co :\n\t\t\t******************\n\n", 135, 198);//135 e 132 � o valor em decimal de � e �          
         printf("\t\t\t< M > Para voltar ao menu.\n \t\t\t< S > Para sair.\n \t\t\t< J > Para jogar.\n");        
         printf("\n\t\t\t=> ");scanf("%c", &resp);
         //Neste trecho o jogador escolhe se quer acessar o menu, jogar novamente ou sair do jogo
         if((resp == 'm')||(resp == 'M')) 
         {
            zerar();//apos a escolha do jogador esta fun��o � chamada para zerar o vetor acertos
            menu();//ap�s a escolha do jogador esta fun��o menu � chamada
            
         }  
         if((resp == 'j')||(resp=='J'))
         {
            zerar();//apos a escolha do jogador esta fun��o � chamada para zerar o vetor acertos
            permutar();//ap�s a escolha do jogador esta fun��o � chamada
         }
         
         if((resp == 's')||(resp == 'S')) 
         {
            encerrar();//ap�s a escolha do  jogador esta fun��o � chamada para fechar o programa
         }  
   }
   
   if((contador==7)&&(cont < 0))
   {
         system("cls");//limpa a tela
         printf("\n\n\n\t%s, voc%c acertou todos os desenhos, mas sua Pontuacao foi %d !!!!\n",registro.nomes,136,cont);
         gravar(cont, contador);//fun��o para gravar os dados no arquivo
         system("cls");//limpa a tela
         printf("\n\n\n\t\t\tEscolha uma op%c%co :\n\t\t\t******************\n\n", 135, 198);
         printf("\t\t\t< M > Para voltar ao menu.\n \t\t\t< S > Para sair.\n \t\t\t< J > Para jogar.\n");
         printf("\n\t\t\t=> ");scanf("%c", &resp);
         if((resp == 'm')||(resp == 'M')) 
         {
            zerar();//apos a escolha do jogador esta fun��o � chamada para zerar o vetor acertos
            menu();//ap�s a escolha do jogador esta fun��o menu � chamada
            
         }  
         if((resp == 'j')||(resp=='J'))
         {
            zerar();//apos a escolha do jogador esta fun��o � chamada para zerar o vetor acertos
            permutar();//ap�s a escolha do jogador esta fun��o � chamada
         }
         
         if((resp == 's')||(resp == 'S')) 
         {
            encerrar();//ap�s a escolha do  jogador esta fun��o � chamada para fechar o programa
         }  
   }
 
   
  
  }while(contador != 7); 
 
 return (contador, cont);
}

//fun��o para mostrar os numeros na tela
void numeros(int cont)//inic�o da fun��o numeros
{
   int  x;
 
   printf("\t\t\t\t\t\t\t\t\t\t\t%d Ponto(s)", cont);
  
   //for para apagar os n�meros
   for(x=0;x<14;x++){
   if(x%7==0)printf("\n\n\n");
      
      if (acertos[x] == 1)
        printf("        ");
      else
        printf("%7d ",x+1);
   }

   
}//fim da fun��o n�meros


//fun��o para encerrar o jogo
void encerrar(void)//in�cio da fun��o encerrar
{
     int x, i = 0;
     char p = {'.'}; 
   do
   {
         
      system("cls");//limpa a tela
      printf("\n\n\n\t\t\tO Jogo est%c sendo encerrado", 160);
      for (x = 1; x <= 3; x++)
      {
         printf("%c ", p);
         Sleep(200); 
      
      }
      i++; 
   }while(i <= 3 );
   
   exit(0);

     
}//fim da fun��o encerrar

//grava o nome e a pontua��o do jogador no arquivo
void gravar(int cont, int contador)//in�cio da fun��o gravar
{
    
  FILE *cfptr;//ponteiro
  registro.ponto=cont;
  //registro.hora=system ("date");
  
  if((cfptr =fopen("arquivo.txt", "a"))==NULL)
  {
     printf("aquivo n%co pode ser aberto\n",198);
     exit(1);
  }
  
      
     fprintf(cfptr, "%s""\t""%d\n", registro.nomes, registro.ponto);
                      
     fclose(cfptr);
     
     
                        
  getchar();
  
}//fim da fun��o gravar

//l� a pontua��o que foi salva no arquivo
void ler(int cont)//in�cio da fun��o ler
{
   
  FILE *cfptr;
  
  system("cls");
  if((cfptr = fopen("arquivo.txt", "r")) == NULL)
  {
     printf("\n\nN%co foi poss%cvel abrir o arquivo para escrita.\n", 198, 161);
     exit(1);
     
     }
     else
     {
    
         printf("\n\tNome: ""\t\t""Pontos: \n\n" );
         
         fscanf(cfptr,"%s" "%d", &registro.nomes, &registro.ponto);
         
         while(!feof(cfptr))
         {
                            
            printf("\t%-10s""\t" "%3d\n", registro.nomes, registro.ponto);
            fscanf(cfptr,"%s""%d", &registro.nomes, &registro.ponto);
             
         }
         
         fclose(cfptr);
     }
     
     getchar();
     getchar();
 
  
}//fim da fun��o ler


//exclui a pontua��o que foi salva no arquivo
void apagar(void)//in�cio da fun��o apagar
{
     
   FILE *cfptr;//ponteiro
   
   system("cls");//limp a tela
   if((cfptr = fopen("arquivo.txt", "w")) == NULL)
   {
      printf("\n\nN%co foi poss%cvel abrir o arquivo para exclus%co.\n", 198, 161, 198);
     
   }
   else
   {
       
      fscanf(cfptr,"%s""%d", &registro.nomes, &registro.ponto);
            
      registro.ponto ='\0';
      
        
      fclose(cfptr);
   }
   
    system("cls");//limpa a tela
    printf("\n\n\n\n\t\tPontua%c%co exclu%cda com sucesso!\n", 135, 198, 161);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tPressione <enter> para retornar ao menu.\n");
    getchar(); 
    getchar(); 
      
      
}//fim da fun��o apagar

void menu(void)//in�cio da fun��o menu
{
     
    int opcao,i,j;
    int contador, cont=0;
    char tela[14];
    
    do//menu para a escolher o jogar ou sair do jogo
    {
       
       
       system("cls");//limpa a tela
       system("color 9f"); 
       Sleep(300);  
       printf("\n\n\n\t\t\t\tMen%c",163);
       printf("\n\t\t\t\t####"); 
       printf("\n\n\t\t\t1. Jogar");  
       printf("\n\n\t\t\t2. Sair");  
       printf("\n\n\t\t\t3. Pontua%c%co",135,198);  
       printf("\n\n\t\t\t4. Excluir Pontua%c%co",135,198);
       printf("\n\n\n\t\t\tEscolha uma op%c%co: ",135,198);  
       scanf("%d", &opcao); 
               
    
       switch (opcao)
       {
          case 1:
             permutar();
             break;
          case 2:
             encerrar();
             break;
          case 3:
             //se esta op��o for escolhida e n�o existir um arquivo � autom�ticamente criado 
             if((cfptr = fopen("arquivo.txt", "a")) == NULL)
             {
                 printf("\n\nN%co foi poss%cvel abrir o arquivo para escrita.\n", 198, 161);
                 gravar( cont, contador);
     
             }
             ler(cont);
             break;
          case 4:
             apagar();
             break;
          
       }
    }while(1);
  
    getchar();
    
}//fim da fun��o menu

//zera o vetor acertos para iniciar um novo jogo 
void zerar(void)//in�cio da fun��o zerar
{
   int i;
   
   for(i=0; i < 14; i++)
   { 
      acertos[i] = '\0';//vetor acertos � zerado
   }
      
}//fim da fun��o zerar
 
