/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 9 Aula 1
    Arquivos (Parte 2)
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  FILE *arq_bin;
 
  arq_bin = fopen("arch3.bin","wb");

  if(arq_bin==NULL)
  {
    printf("ERRO\n");
    system("pause");
    exit(2);
  }
 
  fputc(0xBC,arq_bin);
  fputc(0x3C,arq_bin);
  
  fseek(arq_bin,0x45,SEEK_SET);
  
  fputc(0xA1,arq_bin);
  fputc(0x73,arq_bin);
  fputc(0xA2,arq_bin);
  fputc(0x74,arq_bin);
  fputc(0xA3,arq_bin);
  fputc(0x75,arq_bin);
  fputc(0xA4,arq_bin);
  fputc(0x76,arq_bin);
  
  fseek(arq_bin,-20,SEEK_CUR);
  
  fputc(0xFF,arq_bin);
  
  fclose(arq_bin);
  
  
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


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

  FILE  *arq;

  char vec[10] = {8,4,3,1,2,0,3,4,9,4};

  arq = fopen("info.dat","wb");  

  if(arq==NULL)
  {
    printf("ERRO\n");
    exit(1);

  }

  fwrite(vec, sizeof(char),10,arq); 

  fclose(arq);  
  


  =======================
  
  FILE  *arq;
  register int i;
  char vec[10];
   
  arq = fopen("info.dat","rb"); 

  if(arq==NULL)
  {
    printf("ERRO\n");
    exit(1);

  }

  fread(vec, sizeof(char),10,arq); 
 
  for(i=0;i<10;i++)
    printf("%d ",vec[i]);
 
  fclose(arq);  
  
  =======================
  
  FILE *arq_dat, *arq_bin;
  int ch;

  arq_dat = fopen("info.dat","rb");
  
  if(arq_dat==NULL)
  {
    printf("ERRO\n");
    exit(1);
  }

  arq_bin = fopen("arch.bin","wb");

  if(arq_bin==NULL)
  {
    printf("ERRO\n");
    exit(2);
  }

  while(!feof(arq_dat))
  {
    ch = fgetc(arq_dat);
    
    if(!feof(arq_dat))
      fputc(ch,arq_bin);

  }

  fclose(arq_dat);
  fclose(arq_bin);

  printf("Arquivo copiado com sucesso\n");
  
  
  =============================
  
  FILE *arq_dat, *arq_bin;
  int ch;

   

  arq_bin = fopen("arch2.bin","wb");

  if(arq_bin==NULL)
  {
    printf("ERRO\n");
    exit(2);
  }
 
                         
  fputc(0xAA,arq_bin);    
  fputc(0xAB,arq_bin);    
  fputc(0xAC,arq_bin);   
  fputc(0xAD,arq_bin);   
  
 
  printf("End.Atual: %ld\n",ftell(arq_bin));


  ================================
  
  FILE *arq_bin;
 
  arq_bin = fopen("arch.bin","rb");

  if(arq_bin==NULL)
  {
    printf("ERRO\n");
    exit(2);
  }
 
  fseek(arq_bin,0,SEEK_END);
  
  printf("%ld bytes\n",ftell(arq_bin));
  
  fclose(arq_bin);
  
  
  ================================
  
  FILE *arq_bin;
 
  arq_bin = fopen("arch3.bin","wb");

  if(arq_bin==NULL)
  {
    printf("ERRO\n");
    exit(2);
  }
 
  fputc(0xBC,arq_bin);
  fputc(0x3C,arq_bin);
  
  fseek(arq_bin,0x0B,SEEK_SET);
  
  fputc(0xA1,arq_bin);
  fputc(0x73,arq_bin);
  
  fclose(arq_bin);





*/
