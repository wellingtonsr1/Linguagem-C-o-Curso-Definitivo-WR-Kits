/* ============================================================================

    Linguagem C, o curso definitivo
    M�dulo 9 Aula 2
    Estruturas, Uni�es, Enumera��es e Defini��es de Tipo
    
    Programa simples para usar como base em softwares de cadastro.
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Estruturas --- */
typedef struct                                   /* estrutura para data de anivers�rio */
{
  short dia,                                     /* dia do anivers�rio */
        mes,                                     /* m�s do anivers�rio */
        ano;                                     /* ano do anivers�rio */
} birthday;                                      /* vari�vel birthday */

typedef struct cliente                           /* estrutura com os dados do cliente */
{
  char nome[30];                                 /* string para armazenar o nome */
  char ende[40];                                 /* string para armazenar o endere�o */
  long phone;                                    /* inteiro para armazenar o telefone */
  float serv_val;                                /* real para armazenar valor do servi�o */
  birthday data_n;                               /* estrutura aninhada, para armazenar a data de anivers�rio */
        
} cliente;                                       /* vari�vel cliente */


/* ========================================================================= */
/* --- Prot�tipo das Fun��es --- */
void new_client(cliente *p);                     /* fun��o para solicitar os dados de um novo cliente */
void display(cliente a);                         /* fun��o para mostrar dados do cliente no console */
void save(cliente a);                            /* fun��o para armazenar dados do cliente em arquivo bin�rio */


/* ========================================================================= */
/* --- Fun��o Principal --- */
main()
{
  cliente novo;                                  /* vari�vel estrutura */
  
  new_client(&novo);                             /* passa como par�metro para preencher os dados */
  putchar('\n');                                 /* insere nova linha */
  display(novo);                                 /* mostra os dados */
  putchar('\n');                                 /* insere nova linha */
  save(novo);                                    /* salva em arquivo bin�rio */
  
  
  system("PAUSE");	                             /* pausa execu��o (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* ========================================================================= */
/* --- Desenvolvimento das Fun��es --- */


/* ========================================================================= */
/* --- new_cliente --- */
/* solicita os dados do novo cliente */
void new_client(cliente *p)
{
  printf("Nome: ");                              /* solicita o nome */
  gets(p->nome);                                 /* armazena em nome da estrutura cliente */ 
  printf("Endereco: ");                          /* solicita o endere�o */
  gets(p->ende);                                 /* armazena em endere�o da estrutura cliente */
  printf("Telefone: ");                          /* solicita o telefone */
  scanf("%ld",&p->phone);                        /* armazena em telefone da estrutura cliente */
  printf("Valor R$: ");                          /* solicita o valor */
  scanf("%f",&p->serv_val);                      /* armazena em servi�o valor da estrutura cliente */ 
  printf("Data nasc. dd/mm/aaaa: ");             /* solicita data de nascimento no formato dd/mm/aaaa */
  scanf("%hd%*c%hd%*c%hd", &p->data_n.dia,       /* armazena dia */
                           &p->data_n.mes,       /* armazena m�s */
                           &p->data_n.ano);      /* armazena ano */
     
} /* end new_client */


/* ========================================================================= */
/* --- display --- */
/* mostra valores armazenados */
void display(cliente a)
{
  printf("Nome Cliente : %s\n",a.nome);                    /* imprime nome do cliente */
  printf("Endereco     : %s\n",a.ende);                    /* imprime endere�o do cliente */
  printf("Telefone     : %ld\n",a.phone);                  /* imprime telefone do cliente */
  printf("Valor R$     : %.2f\n",a.serv_val);              /* imprime valor do servi�o */
  printf("Data Nasc.   : %hd/%hd/%hd\n", a.data_n.dia,     /* imprime dia do anivers�rio */
                                         a.data_n.mes,     /* imprime m�s do anivers�rio */
                                         a.data_n.ano);    /* imprime ano do anivers�rio */
     
} /* end display */


/* ========================================================================= */
/* --- save --- */
/* armazena dados do cliente em arquivo bin�rio */
void save(cliente a)
{
  FILE *arq;                                     /* ponteiro para arquivo */
  arq = fopen("cadastro.dat","wb");              /* abre arquivo cadastro.dat para escrita bin�ria */
  
  if(arq == NULL)                                /* ponteiro est� apontando para nada? */
  {                                              /* sim */
    printf("ERRO\n");                            /* informa o erro */
    system("pause");                             /* pausa sistema */
    exit(1);                                     /* sai do programa */
         
  } /* end if */       
     
  fwrite(a.nome,  sizeof(char), 30,arq);         /* armazena o nome no arquivo */
  fwrite(a.ende,  sizeof(char), 40,arq);         /* armazena o endere�o no arquivo */
  fwrite(&a.phone,sizeof(long),  1,arq);         /* armazena o telefone no arquivo */
  fwrite(&a.serv_val,sizeof(float),1,arq);       /* armazena o valor do servi�o no arquivo */
  fwrite(&a.data_n.dia,sizeof(short),1,arq);     /* armazena o dia do anivers�rio no arquivo */
  fwrite(&a.data_n.mes,sizeof(short),1,arq);     /* armazena o m�s do anivers�rio no arquivo */
  fwrite(&a.data_n.ano,sizeof(short),1,arq);     /* armazena o ano do anivers�rio no arquivo */
  
  fclose(arq);                                   /* fecha o arquivo */
  
  printf("Arquivo criado com sucesso\n");      /* informa que arquivo foi criado com sucesso */  
     
} /* end save */


/* ============================================================================  
                                                              
                                       _                      
                                      / \                     
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_______________________________
                                                              
                                                              
============================================================================ */
/* --- Final do Programa --- */
