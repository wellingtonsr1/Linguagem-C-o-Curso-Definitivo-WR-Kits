/* ======================================================================================================= */
/*
    IESP FACULDADES
    CURSO DE SISTEMAS DE INFORMAÇÃO
    DISCIPLINA: LINGUAGEM DE PROGRAMAÇÃO I
    PROJETO DE CONCLUSÃO DO 2° PERÍODO
    JOGO DE MEMÓRIA
    ALUNOS : INEILTON E WELLINGTON 
*/


/* ======================================================================================================= */
/* ----- Bibliotecas ----- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/* ======================================================================================================= */
/* ----- Estruturas ----- */

typedef struct jogos
{
      char nomes[15];
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


/* ======================================================================================================= */
/* ----- Função principal ----- */

int main()
{
    system("cls");                                                                                                    /* limpa a tela */
    system("color 9f");                                                                                               /* muda acor da tela de preto para azul */ 
    printf("\n\n\n\t\t\t\t  J");sleep(100);printf("O");sleep(100); printf("G"); sleep(100);printf("O"); sleep(100);
    printf(" ");sleep(100);printf("\n\n\t\t\t\t   D");sleep(100);printf("E");sleep(100);printf(" ");sleep(100); 
    printf("\n\n\t\t\t\tM"); sleep(200);printf("E");sleep(200); printf("M");sleep(200); printf("%c",224);sleep(200);   
    printf("R");sleep(100);printf("I");sleep(100);printf("A%c", 169);sleep(500); 
         
    printf("\n\n\n\t\tD");sleep(100);printf("E");sleep(100); printf("S");sleep(100);printf("E");sleep(100);
    printf("N");sleep(100);printf("V");sleep(100);printf("O");sleep(100);printf("L");sleep(100); printf("V"); 
    printf("I");sleep(100);printf("D");sleep(100); printf("O");sleep(100);printf(" ");sleep(100);printf("P");   
    sleep(100);printf("O");sleep(100);printf("R");sleep(100);printf(" ");sleep(100);printf("I");sleep(100);  
    printf("N");sleep(100);printf("E");sleep(100);printf("I");sleep(100);printf("L");sleep(100);printf("T"); 
    sleep(100);printf("O");sleep(100);printf("N");sleep(100);printf(" ");sleep(100);printf("E");sleep(100);
    printf(" ");sleep(100);printf("W");sleep(100);printf("E");sleep(100);printf("L");sleep(100);printf("L"); 
    sleep(100);printf("I");sleep(100);printf("N");sleep(100);printf("G");sleep(100);printf("T");sleep(100);
    printf("O");sleep(100);printf("N");sleep(100);printf(" ");sleep(100);printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tT"); 
    sleep(100);printf("O");sleep(100);printf("D");sleep(100);printf("O");sleep(100);printf("S");sleep(100);
    printf(" ");sleep(100);printf("O");sleep(100);printf("S");sleep(100);printf(" ");sleep(100);printf("D"); 
    sleep(100);printf("I");sleep(100);printf("R");sleep(100);printf("E");sleep(100);printf("I");sleep(100);
    printf("T");sleep(100);printf("O");sleep(100);printf("S");sleep(100);printf(" ");sleep(100);printf("R"); 
    sleep(100);printf("E"); printf("S");sleep(100);printf("E");sleep(100);printf("R");sleep(100);printf("V"); 
    sleep(100);printf("A");sleep(100);printf("D");sleep(100);printf("O");sleep(100);printf("S"); 
    sleep(500);
    
    menu();            
        
    return 0;
  
} /* end main */


/* ======================================================================================================= */
/* ----- Desenvolvimento das funções ----- */

/* ======================================================================================================= */
/* ----- Função permutar ----- */

int permutar()  
{
   register int i, j, aux;
   srand(time(NULL));

   system("cls");                                                                                                       /* limpa a tela */ 
   system("color 9f"); 
  
   for(i=0; i < 14; i++)                                                                                                /* For para misturar os caracteres */
   {
      j = rand()%14;
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
   
   system("cls");                                                                                                     /* limpa a tela */
   
   printf("\n\n\t\tDigite o seu nome para iniciar o jogo\n");
   printf("\n\t\t=> "); 
   scanf("%s",&registro.nomes);
   
   system("cls");
   printf("\n");
   sleep(200);  
   printf("\n\t\t\t* MEMORIZE ! *\n\n\n");
   sleep(400);
   
   for(i = 0; i<14; i++)                                                                                               /* For para imprimir os caracteres na tela */  
   {
      printf("     ");
      printf(" %c ", tela[i]);
      sleep(200);  
   
      if(i == 6) printf("\n\n\n\n");
        
   } /* end for */
   
   printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t");                                                                              /* imprime o tempo de visualização dos caracteres */
   sleep(200);  
   printf("\t\t\tTempo : ");
   sleep(500);  
   for (x=1; x <= 5; x++)
   {
      printf("%d ", x);
      sleep(1000);
  
   } /* end for */
   
   do                                                                                                                    /* recebe as escolhas dos números */
   {
     do
     {       
        system("cls");
        printf("\n\n\n\n\n");
        
        for(i=0; i < 14; i++)
        {
           if (acertos[i] == 1)
              printf("     %c  ", tela[i]);
           else
              printf("     %c%c ",219,219);
                
           if(i == 6) printf("\n\n\n\n");
        
        } /* end for */
        numeros(cont);
        printf("\n\n\t\tN%cmero 1: ", 163);                                                                              /* 163 é o valor de ú em decimal */ 
        scanf("%d", &i);
       
     }while((i<=0)||(i>14)||(i == n1[0])||(i == n1[1])||(i == n1[2])
     ||(i == n1[3])||(i == n1[4])||(i == n1[5])||(i == n1[6])||(i == n1[7])
     ||(i == n1[8])||(i == n1[9])||(i == n1[10])||(i == n1[11])
     ||(i == n1[12])||(i == n1[13])||(i == n1[14])); /* end do...while internal 1 */
     
 
   
      do
      {
        system("cls");
        printf("\n\n\n\n\n");
        
        for(j=0; j < 14; j++)
        {
           if (acertos[j] == 1)
              printf("     %c  ", tela[j]);
           else
              printf("     %c%c ",219,219);
                
           if(j == 6) printf("\n\n\n\n");
       
        } /* end for */
        numeros(cont);
        printf("\n\n\t\tN%cmero 1: %d", 163, i);                                                                         /* 163 é o valor de ú em decimal */ 
        printf("\n\t\tFigura %c \n", tela[i-1]); 

        printf("\t\tN%cmero 2: ", 163);                                                                                  /* 163 é o valor de ú em decimal */ 
        scanf("%d", &j); 
       
     }while((j<=0)||(j>14)||(i==j)||(j == n1[0])||(j == n1[1])||(j == n1[2])
     ||(j == n1[3])||(j == n1[4])||(j == n1[5])||(j == n1[6])
     ||(j == n1[7])||(j == n1[8])||(j == n1[9])||(j == n1[10])
     ||(j == n1[11])||(j == n1[12])||(j == n1[13])||(j == n1[14])); /* end do...while internal 2 */
     
     
   printf("\t\tFigura %c \n", tela[j-1]);

   if(tela[i-1] == tela[j-1])
   {
      acertos[i-1] = 1;
      acertos[j-1] = 1;     
      cont+=3;                                                                                                            /* inclementa 3 em cont */
      contador++;
      printf("\n\t\t\t\tVoc%c acertou!", 136);                                                                            /* 136 é o valor de ê em decimal */
      n1[i-1] = i;
      n1[j-1] = j;
      
   } /* end if */
   else
   {
       cont-=1;                                                                                                            /* declementa 1 de cont */
       printf("\n\t\t\tVoc%c errou!", 136);                                                                                /* 136 é o valor de ê em decimal */

   } /* end else */
   
   getchar();
   getchar();
  
   if((contador==7)&&(cont > 0))
   {
         system("cls");                                                                                                   /* limpa a tela */
         printf("\n\n\n\tParab%cns %s, voc%c ganhou e sua Pontua%c%co foi %d !!!!\n", 130, registro.nomes, 136, 135, 198,cont); /*130, 136, 135, 132 é o valor de é, ê, ç, ã respectivamente em decimal */
         gravar( cont, contador);                                                                                         /* função para gravar os dados no arquivo */
         system("cls");                                                                                                   /* limpa a tela */
         printf("\n\n\n\t\t\tEscolha uma op%c%co :\n\t\t\t******************\n\n", 135, 198);                             /* 135 e 132 é o valor em decimal de ç e ã */          
         printf("\t\t\t< M > Para voltar ao menu.\n \t\t\t< S > Para sair.\n \t\t\t< J > Para jogar.\n");        
         printf("\n\t\t\t=> ");scanf("%c", &resp);
         if((resp == 'm')||(resp == 'M'))                                                                                 /*Neste trecho o jogador escolhe se quer acessar o menu, jogar novamente ou sair do jogo */
         {
            zerar();                                                                                                      /*apos a escolha do jogador esta função é chamada para zerar o vetor acertos */
            menu();                                                                                                       /* após a escolha do jogador esta função menu é chamada */
            
         } /* end if internal */

         if((resp == 'j')||(resp=='J'))
         {
            zerar();                                                                                                      /* apos a escolha do jogador esta função é chamada para zerar o vetor acertos */
            permutar();                                                                                                   /* após a escolha do jogador esta função é chamada */
         
         } /* end if internal */
         
         if((resp == 's') || (resp == 'S')) encerrar();                                                                   /* após a escolha do  jogador esta função é chamada para fechar o programa */
   
    } /* end if external */
   
   if((contador==7)&&(cont < 0))
   {
         system("cls");                                                                                                   /* limpa a tela */
         printf("\n\n\n\t%s, voc%c acertou todos os desenhos, mas sua Pontuacao foi %d !!!!\n",registro.nomes,136,cont);
         gravar(cont, contador);                                                                                          /* função para gravar os dados no arquivo */
         system("cls");                                                                                                   /* limpa a tela */
         printf("\n\n\n\t\t\tEscolha uma op%c%co :\n\t\t\t******************\n\n", 135, 198);
         printf("\t\t\t< M > Para voltar ao menu.\n \t\t\t< S > Para sair.\n \t\t\t< J > Para jogar.\n");
         printf("\n\t\t\t=> ");
         scanf("%c", &resp);

         if((resp == 'm')||(resp == 'M')) 
         {
            zerar();                                                                                                      /* apos a escolha do jogador esta função é chamada para zerar o vetor acertos */
            menu();                                                                                                       /* após a escolha do jogador esta função menu é chamada */
            
         } /* end if */
  
         if((resp == 'j')||(resp=='J'))
         {
            zerar();                                                                                                       /* apos a escolha do jogador esta função é chamada para zerar o vetor acertos */
            permutar();                                                                                                    /* após a escolha do jogador esta função é chamada */ 
         
         } /* end if */
         
         if((resp == 's')||(resp == 'S')) encerrar();                                                                      /* após a escolha do  jogador esta função é chamada para fechar o programa */
   
    } /* end if */
  }while(contador != 7); /* end do...while external*/
 
 return (contador, cont);

} /* end painel */


/* ======================================================================================================= */
/* ----- Função numeros ----- */

void numeros(int cont)                                                                                                     /* função para mostrar os numeros na tela */
{
   register int  x;
 
   printf("\t\t\t\t\t\t\t\t\t\t\t%d Ponto(s)", cont);
  
   for(x=0; x < 14; x++){                                                                                                      /* for para apagar os números */
      if(x%7==0) printf("\n\n\n");
      
      if (acertos[x] == 1)
        printf("        ");
      else
        printf("%7d ",x+1);
   
    } /* end for */

   
} /* end numeros */


/* ======================================================================================================= */
/* ----- Função encerrar ----- */

void encerrar()                                                                                                       /* função para encerrar o jogo */
{
    register int x, i = 0;
     char p = {'.'}; 
   do
   {
      system("cls");                                                                                                      /* limpa a tela */
      printf("\n\n\n\t\t\tO Jogo est%c sendo encerrado", 160);
      for (x=1; x <= 3; x++)
      {
         printf("%c ", p);
         sleep(200); 
      
      } /* end for */

      i++; 

   }while(i <= 3); /* end do...while */
   
   exit(0);

     
}/* end encerrar */


/* ======================================================================================================= */
/* ----- Função gravar ----- */

void gravar(int cont, int contador)                                                                                         /* grava o nome e a pontuação do jogador no arquivo */
{
  FILE *cfptr;                                                                                                              /* ponteiro */
  registro.ponto=cont;
  //registro.hora=system ("date");
  
  if((cfptr =fopen("arquivo.txt", "a"))==NULL)
  {
     printf("aquivo n%co pode ser aberto\n",198);
     exit(1);

  } /* end if */
  
     fprintf(cfptr, "%s""\t""%d\n", registro.nomes, registro.ponto);   
     fclose(cfptr);
     getchar();
  
} /* end gravar */


/* ======================================================================================================= */
/* ----- Função ler ----- */

void ler(int cont)                                                                                                            /* lê a pontuação que foi salva no arquivo */
{
  FILE *cfptr;
  
  system("cls");
 
  if((cfptr = fopen("arquivo.txt", "r")) == NULL)
  {
     printf("\n\nN%co foi poss%cvel abrir o arquivo para escrita.\n", 198, 161);
     exit(1);
     
     } /* end if */
     else
     {
         printf("\n\tNome: ""\t\t""Pontos: \n\n" );
         fscanf(cfptr,"%s" "%d", &registro.nomes, &registro.ponto);
         
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

void apagar()                                                                                                                /* exclui a pontuação que foi salva no arquivo */
{    
   FILE *cfptr;//ponteiro
   
   system("cls");                                                                                                                /* limpa a tela */
   if((cfptr = fopen("arquivo.txt", "w")) == NULL)
   {
      printf("\n\nN%co foi poss%cvel abrir o arquivo para exclus%co.\n", 198, 161, 198);
     
   } /* end if */
   else
   {      
      fscanf(cfptr,"%s""%d", &registro.nomes, &registro.ponto);
      registro.ponto ='\0';        
      fclose(cfptr);

   } /* end else */
   
    system("cls");                                                                                                              /* limpa a tela */
    printf("\n\n\n\n\t\tPontua%c%co exclu%cda com sucesso!\n", 135, 198, 161);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tPressione <ENTER> para retornar ao menu.\n");
    getchar(); 
    getchar(); 
      
} /* end apagar */


/* ======================================================================================================= */
/* ----- Menu ----- */

void menu()
{    
    register int i,j;
    int contador, cont=0, opcao;
    char tela[14];
    
    do                                                                                                                           /* menu para a escolher o jogar ou sair do jogo */
    {      
       system("cls");                                                                                                            /* limpa a tela */
       system("color 9f"); 
       sleep(300);  
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
             if((cfptr = fopen("arquivo.txt", "a")) == NULL)                                                                      /* se esta opção for escolhida e não existir um arquivo é automáticamente criado */
             {
                 printf("\n\nN%co foi poss%cvel abrir o arquivo para escrita.\n", 198, 161);
                 gravar( cont, contador);
     
             } /* end if */
             ler(cont);
             break;
          case 4:
             apagar();
             break;
          
       } /* end switch */

    }while(1); /* end do...while */
  
    getchar();
    
} /* end menu */


/* ======================================================================================================= */
/* ----- Função zerar ----- */

void zerar()                                                                                                                     /* zera o vetor acertos para iniciar um novo jogo  */
{
   register int i;
   for(i=0; i < 14; i++) acertos[i] = '\0';                                                                                          /* vetor acertos é zerado */
      
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










