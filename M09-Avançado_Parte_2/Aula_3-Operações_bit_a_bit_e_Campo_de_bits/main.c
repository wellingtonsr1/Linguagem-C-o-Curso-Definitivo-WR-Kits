/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 9 Aula 3
    Operadores bit a bit e Campo de bits
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

struct out1
{
  unsigned po0 : 1;
  unsigned po1 : 1;
  unsigned po2 : 1;
  unsigned po3 : 1;
  unsigned po4 : 1;
  unsigned po5 : 1;
  unsigned po6 : 1;
  unsigned po7 : 1;

} PORT1;

void print_bin(unsigned char reg);


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  
  unsigned char outp;
         
  PORT1.po0 = 1;
  PORT1.po6 = 1;
  
  outp = PORT1.po0      |
         PORT1.po1 << 1 |
         PORT1.po2 << 2 |
         PORT1.po3 << 3 |
         PORT1.po4 << 4 |
         PORT1.po5 << 5 |
         PORT1.po6 << 6 |
         PORT1.po7 << 7;
         
  printf("%Xh\n",outp);   
  
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


void print_bin(unsigned char reg)
{
  register int i;   
                     
                      
  for(i=7;i>=0;i--)
    (reg>>i)&1 ? putchar('1') : putchar('0');
    
  putchar('b');
  putchar('\n');
     
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
  
  =========================
  COMPLEMENTO ~
  
  unsigned char registro1 = 0x48,
                registro2;
  
  registro2 = ~registro1;
  
  printf("reg1: %X\n", registro1);
  printf("reg2: %X\n", registro2);


  =========================
  SHIFT RIGHT >> E LEFT <<

  unsigned char registro1 = 0x35,
                registro2,
                registro3;
  
  registro2 = registro1 >> 1;
  
  registro3 = registro1 << 2;
  
  printf("reg1: %X\n", registro1);
  printf("reg2: %X\n", registro2);
  printf("reg3: %X\n", registro3);


  =========================
  AND, XOR, OR
  
  
  unsigned char registro1 = 0xC3,
                registro2 = 0x6B,
                registro3,
                registro4,
                registro5;
  
  registro3 = registro1&registro2;
  registro4 = registro1^registro2;
  registro5 = registro1|registro2;
   
  printf("reg1: %X\n", registro1);
  printf("reg2: %X\n", registro2);
  printf("reg3: %X\n", registro3);
  printf("reg4: %X\n", registro4);
  printf("reg5: %X\n", registro5); 


  ==========================
  CONVERSÃO hex para bin

  void print_bin(unsigned char reg)
  {
    register int i;
  
    for(i=7;i>=0;i--)
      (reg>>i)&1 ? putchar('1') : putchar('0');
    
    putchar('b');
    putchar('\n');
     
  }
  
  
  =======================
  MÁSCARA AND
  
  unsigned char registro1 = 0x32;
  
  print_bin(registro1);  
  registro1 &= 0xF0;
  print_bin(registro1);
  
  
  =======================
  MÁSCARA OR 
  
  unsigned char byte1, byte2, byte3;
  
  
  byte1 = 0x45;
  byte2 = 0x6E;
  puts("Bytes originais:");
  printf("byte1: ");
  print_bin(byte1);
  printf("byte2: ");
  print_bin(byte2); 
  
  byte1 &= 0x0F;
  byte2 &= 0xF0;
  puts("Bytes depois da marcara:");
  printf("byte1: ");
  print_bin(byte1);
  printf("byte2: ");
  print_bin(byte2); 
  
  byte3 = byte1|byte2;
  puts("Bytes concatenados:");
  printf("byte3: ");
  print_bin(byte3);
  printf("byte3: %Xh\n",byte3);


  =======================
  MÁSCARA XOR

  unsigned char reg = 0xAB;
  
  printf("\n%Xh\n",reg);
  printf("reg: ");
  print_bin(reg);
  
  reg ^= 0x04; 
  
  printf("\n%Xh\n",reg);
  printf("reg: ");
  print_bin(reg); 
  
  
  ==========================
  
  struct sensor
{
  float analog;
  short digital;
  unsigned ready : 1;

} light;


struct reg
{
  unsigned     : 4; 
  unsigned RX  : 1;
  unsigned TX  : 1;
  unsigned bps : 2;

} UART;

struct out1
{
  unsigned po0 : 1;
  unsigned po1 : 1;
  unsigned po2 : 1;
  unsigned po3 : 1;
  unsigned po4 : 1;
  unsigned po5 : 1;
  unsigned po6 : 1;
  unsigned po7 : 1;

} PORT1;



  unsigned char outp;
  register int i;    
      
  PORT1.po0 = 1;
  PORT1.po6 = 1;
  
  outp = PORT1.po0      |
         PORT1.po1 << 1 |
         PORT1.po2 << 2 |
         PORT1.po3 << 3 |
         PORT1.po4 << 4 |
         PORT1.po5 << 5 |
         PORT1.po6 << 6 |
         PORT1.po7 << 7;
         
  printf("%Xh\n",outp);



*/
