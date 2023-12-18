/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 9 Aula 2
    Estruturas, Uniões, Enumerações e Definições de Tipo
    
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
typedef struct                                   /* estrutura para data de aniversário */
{
  short dia,                                     /* dia do aniversário */
        mes,                                     /* mês do aniversário */
        ano;                                     /* ano do aniversário */
} birthday;                                      /* variável birthday */

typedef struct cliente                           /* estrutura com os dados do cliente */
{
  char nome[30];                                 /* string para armazenar o nome */
  char ende[40];                                 /* string para armazenar o endereço */
  long phone;                                    /* inteiro para armazenar o telefone */
  float serv_val;                                /* real para armazenar valor do serviço */
  birthday data_n;                               /* estrutura aninhada, para armazenar a data de aniversário */
        
} cliente;                                       /* variável cliente */


/* ========================================================================= */
/* --- Protótipo das Funções --- */
void new_client(cliente *p);                     /* função para solicitar os dados de um novo cliente */
void display(cliente a);                         /* função para mostrar dados do cliente no console */
void save(cliente a);                            /* função para armazenar dados do cliente em arquivo binário */


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  cliente novo;                                  /* variável estrutura */
  
  new_client(&novo);                             /* passa como parâmetro para preencher os dados */
  putchar('\n');                                 /* insere nova linha */
  display(novo);                                 /* mostra os dados */
  putchar('\n');                                 /* insere nova linha */
  save(novo);                                    /* salva em arquivo binário */
  
  
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* ========================================================================= */
/* --- Desenvolvimento das Funções --- */


/* ========================================================================= */
/* --- new_cliente --- */
/* solicita os dados do novo cliente */
void new_client(cliente *p)
{
  printf("Nome: ");                              /* solicita o nome */
  gets(p->nome);                                 /* armazena em nome da estrutura cliente */ 
  printf("Endereco: ");                          /* solicita o endereço */
  gets(p->ende);                                 /* armazena em endereço da estrutura cliente */
  printf("Telefone: ");                          /* solicita o telefone */
  scanf("%ld",&p->phone);                        /* armazena em telefone da estrutura cliente */
  printf("Valor R$: ");                          /* solicita o valor */
  scanf("%f",&p->serv_val);                      /* armazena em serviço valor da estrutura cliente */ 
  printf("Data nasc. dd/mm/aaaa: ");             /* solicita data de nascimento no formato dd/mm/aaaa */
  scanf("%hd%*c%hd%*c%hd", &p->data_n.dia,       /* armazena dia */
                           &p->data_n.mes,       /* armazena mês */
                           &p->data_n.ano);      /* armazena ano */
     
} /* end new_client */


/* ========================================================================= */
/* --- display --- */
/* mostra valores armazenados */
void display(cliente a)
{
  printf("Nome Cliente : %s\n",a.nome);                    /* imprime nome do cliente */
  printf("Endereco     : %s\n",a.ende);                    /* imprime endereço do cliente */
  printf("Telefone     : %ld\n",a.phone);                  /* imprime telefone do cliente */
  printf("Valor R$     : %.2f\n",a.serv_val);              /* imprime valor do serviço */
  printf("Data Nasc.   : %hd/%hd/%hd\n", a.data_n.dia,     /* imprime dia do aniversário */
                                         a.data_n.mes,     /* imprime mês do aniversário */
                                         a.data_n.ano);    /* imprime ano do aniversário */
     
} /* end display */


/* ========================================================================= */
/* --- save --- */
/* armazena dados do cliente em arquivo binário */
void save(cliente a)
{
  FILE *arq;                                     /* ponteiro para arquivo */
  arq = fopen("cadastro.dat","wb");              /* abre arquivo cadastro.dat para escrita binária */
  
  if(arq == NULL)                                /* ponteiro está apontando para nada? */
  {                                              /* sim */
    printf("ERRO\n");                            /* informa o erro */
    system("pause");                             /* pausa sistema */
    exit(1);                                     /* sai do programa */
         
  } /* end if */       
     
  fwrite(a.nome,  sizeof(char), 30,arq);         /* armazena o nome no arquivo */
  fwrite(a.ende,  sizeof(char), 40,arq);         /* armazena o endereço no arquivo */
  fwrite(&a.phone,sizeof(long),  1,arq);         /* armazena o telefone no arquivo */
  fwrite(&a.serv_val,sizeof(float),1,arq);       /* armazena o valor do serviço no arquivo */
  fwrite(&a.data_n.dia,sizeof(short),1,arq);     /* armazena o dia do aniversário no arquivo */
  fwrite(&a.data_n.mes,sizeof(short),1,arq);     /* armazena o mês do aniversário no arquivo */
  fwrite(&a.data_n.ano,sizeof(short),1,arq);     /* armazena o ano do aniversário no arquivo */
  
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
