#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

struct cliente
{
    char nome[30];
    char endereco[40];
    char cidade[30];
    char telefone[11];
    int cep;

}infos;

int main(int argc, char *argv[])
{

    printf("Nome: ");
    gets(infos.nome);

    printf("Endereço: ");
    gets(infos.endereco);


    return 0;
}