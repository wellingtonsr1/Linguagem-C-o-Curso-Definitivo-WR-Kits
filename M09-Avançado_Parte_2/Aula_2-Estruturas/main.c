/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 9 Aula 2
    Estruturas, Uniões, Enumerações e Definições de tipo
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


typedef  float  reais;
typedef  short  inteiro;


enum
{
  ele0,
  ele1,
  ele2,
  ele3
  
} elementos;

union contents
{
  unsigned short value;
  unsigned char  two_bytes[2];  
};

 
 

 
main()
{
  reais valor;
  inteiro teste = 18;
  
  valor = 45.7;
  
  printf("%.1f\n",valor);
  printf("%d\n",teste);
    
  system("PAUSE");	
  return 0;

}  

  

 


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

/*

  EXEMPLOS DA AULA
  =======================
  printf("Nome: ");
  gets(infos.nome);
  printf("Endereco: ");
  gets(infos.endereco);
  printf("Cidade: ");
  gets(infos.cidade);
  printf("Telefone: ");
  gets(infos.telefone);
  printf("CEP: ");
  scanf("%d",&infos.cep);
  
  printf("Dados do cliente: \n");
  printf(infos.nome);
  putchar('\n');
  printf(infos.endereco);
  putchar('\n');
  printf(infos.cidade);
  putchar('\n');
  printf(infos.telefone);
  putchar('\n');
  printf("%d\n",infos.cep);

  =======================

struct exemplo
{
  float alpha;
  int   bravo;
  char  whiskey[30];

}charlie;

 

f_test(charlie.alpha);

  =======================

struct clock
{
  int hours;
  int minutes;

}watch;


void f1(struct clock var);


main()
{
  watch.hours   = 11;
  watch.minutes = 34;

  f1(watch);

}

void f1(struct clock var)
{
  printf("Horas:   %d\n", var.hours);
  printf("Minutos: %d\n", var.minutes);

}


=====================

struct drinks
{
  int margarita,
      dry_martini,
      caipirinha;

};

struct drinks *cheers; 


  cheers = &open_bar;

  (*cheers).margarita = 741;

  printf("%d\n",(*cheers).margarita);  


  cheers = &open_bar;

  cheers->margarita = 741;

  printf("%d\n",cheers->margarita);  



=====================================



 
struct drinks
{
  int margarita,
      dry_martini,
      caipirinha;    
       
}open_bar;

 
void barman(struct drinks *p);

 
main()
{
  
  barman(&open_bar);
  
  printf("%4d\n",open_bar.margarita);    
  printf("%4d\n",open_bar.dry_martini);  
  printf("%4d\n",open_bar.caipirinha);  
      
      
}  
 
void barman(struct drinks *p)
{
  p->margarita   =  555;
  p->dry_martini =  741;     
  p->caipirinha  = 4093;
     
}  




================================
================================


main()
{
 
  valor.val1 = 100;
  valor.val2 = 'A';
  
  printf("%hd\n",valor.val1);   
  printf("%c\n", valor.val2);   

 
  valor.val2 = 'A';
  valor.val1 = 100;
  
  printf("%hd\n",valor.val1);  
  printf("%c\n", valor.val2);   

} 


================================
================================
 
union contents
{
  unsigned short value;
  unsigned char  two_bytes[2];  
};

 
unsigned short rec(union contents *d, FILE *arq);

 
main()
{
  FILE *arq_dat;
  
  union contents wr;
  
  wr.value = 1050;  
  
  if(!rec(&wr,arq_dat))
  {
    printf("Erro ao gerar arquivo.\n");
    system("pause");                                     
  }

  printf("Sucesso!\n");
  
  system("PAUSE");	
  return 0;

}  

 
unsigned short rec(union contents *d, FILE *arq)
{
  if((arq=fopen("rec.dat","wb"))==NULL)      
    return 0;
   
  fputc(d->two_bytes[0],arq);
  fputc(d->two_bytes[1],arq);
  fclose(arq);
  return 1;
          
}  


================================
================================

enum carros
{
  ford,
  honda,
  volks,
  renault

} conc;

switch(conc)
{
  case ford:    printf("ford\n");  break;
  case honda:   printf("honda\n"); break;
  case volks:   printf("volks\n"); break;
  case renault: printf("renault\n");

}





*/
