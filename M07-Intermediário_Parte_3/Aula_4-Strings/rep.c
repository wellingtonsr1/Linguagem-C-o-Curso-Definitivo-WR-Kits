#include <stdio.h>
#include <string.h>

void removeCaracteresNaoRepetidos(char *str) {
    int i, j, len;
    len = strlen(str);

    for (i = 0; str[i] != '\0'; ++i) {
        int repetido = 0;
        for (j = 0; str[j] != '\0'; ++j) {
            if (i != j && str[i] == str[j]) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            // Se o caractere não se repete, remova-o
            int k;
            for (k = i; str[k] != '\0'; ++k) {
                str[k] = str[k + 1];
            }
            str[len - 1] = '\0';
            --len;
            --i; // Volte uma posição para verificar novamente o caractere atual.
        }
    }
}

int main() {
    char minhaString[] = "teste";
    printf("String original: %s\n", minhaString);

    removeCaracteresNaoRepetidos(minhaString);

    printf("String sem caracteres não repetidos: %s\n", minhaString);

    return 0;
}

