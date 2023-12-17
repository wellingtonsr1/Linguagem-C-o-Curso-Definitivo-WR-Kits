#include <stdio.h>

// Função para encontrar a substring em uma string
int encontrarSubstring(const char *str, const char *substring) {
    int i, j;

    for (i = 0; str[i] != '\0'; ++i) {
        j = 0;

        // Verifica se a substring ocorre a partir da posição i
        while (substring[j] != '\0' && str[i + j] == substring[j]) {
            ++j;
        }

        // Se a substring foi encontrada, retorna a posição inicial
        if (substring[j] == '\0') {
            return i;
        }
    }

    // Se a substring não foi encontrada, retorna -1
    return -1;
}

int main() {
    char str[] = "Esta é uma string de exemplo";
    char substring[] = "exemplo";

    // Encontrar a substring na string usando a função personalizada
    int posicao = encontrarSubstring(str, substring);

    if (posicao != -1) {
        printf("Substring encontrada é na posição %d: %s\n", posicao, &str[posicao]);
    } else {
        printf("Substring não encontrada\n");
    }

    return 0;
}

