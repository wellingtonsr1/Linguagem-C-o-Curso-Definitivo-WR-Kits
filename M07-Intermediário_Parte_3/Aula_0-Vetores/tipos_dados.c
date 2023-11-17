
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 








int main(int argc, char *argv[])										                /* windows */
{
	putchar('\n');
	puts("------------------------------------------");
	puts("            Tipos de dados                ");
	puts("------------------------------------------");
	printf("Tamanho do int                : %d byte(s)\n", sizeof(int));				 /* Tamanho do int                : 4  (-2147483648 a 2147483647) */
	printf("Tamanho do char               : %d byte(s)\n", sizeof(char));				 /* Tamanho do char               : 1  (-128 a 127)*/
	printf("Tamanho do float              : %d byte(s)\n", sizeof(float));				 /* Tamanho do float              : 4 */
	printf("Tamanho do double             : %d byte(s)\n", sizeof(double));				 /* Tamanho do double             : 8 */
	
	putchar('\n');
	
	printf("Tamanho do signed int         : %d byte(s)\n", sizeof(signed int));		     /* Tamanho do signed int         : 4  (-2147483648 a 2147483647) */
	printf("Tamanho do unsigned int       : %d byte(s)\n", sizeof(unsigned int));		 /* Tamanho do unsigned int       : 4  (0 a 4294967296) */
	printf("Tamanho do unsigned char      : %d byte(s)\n", sizeof(unsigned char));       /* Tamanho do unsigned char      : 1  (0 a 255)*/
	
	putchar('\n');
	
	printf("Tamanho do short int          : %d byte(s)\n", sizeof(short int));		     /* Tamanho do short int          : 2  (-32768 a 32767) */
	printf("Tamanho do long int           : %d byte(s)\n", sizeof(long int));			 /* Tamanho do long int           : 4 */
	printf("Tamanho do long long          : %d byte(s)\n", sizeof(long long));			 /* Tamanho do long long          : 8 */
	
	printf("Tamanho do unsigned short int : %d byte(s)\n", sizeof(unsigned short int));	 /* Tamanho do unsigned short int : 2 (0 a 65535)*/
	printf("Tamanho do unsigned long int  : %d byte(s)\n", sizeof(unsigned long int));	 /* Tamanho do unsigned long int  : 4 */
	
	
	puts("------------------------------------------");
	
	return 0;	
	
} /* end main */
