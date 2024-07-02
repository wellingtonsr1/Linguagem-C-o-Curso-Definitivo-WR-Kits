#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 6
#define COLS 4
#define MAX_LEN 100

void calculate_column_widths(char table[ROWS][COLS][MAX_LEN], int column_widths[COLS]) {
    int i, j;
    for (j = 0; j < COLS; j++) {
        column_widths[j] = 0;
        for (i = 0; i < ROWS; i++) {
            int len = strlen(table[i][j]);
            if (len > column_widths[j]) {
                column_widths[j] = len;
            }
        }
        column_widths[j] += 2;  // Adiciona espaço extra
    }
}

void print_separator(int column_widths[COLS]) {
    int j, k;
    printf("+");
    for (j = 0; j < COLS; j++) {
        for (k = 0; k < column_widths[j]; k++) {
            printf("-");
        }
        printf("+");
    }
    printf("\n");
}

void print_table(char table[ROWS][COLS][MAX_LEN], int column_widths[COLS]) {
    int i, j;
    print_separator(column_widths);
    for (i = 0; i < ROWS; i++) {
        printf("|");
        for (j = 0; j < COLS; j++) {
            printf(" %-*s |", column_widths[j] - 2, table[i][j]);
        }
        printf("\n");
        print_separator(column_widths);
    }
}

int main() {
    char table[ROWS][COLS][MAX_LEN] = {
        {"Header1", "Header2", "Header3", "Header4"},
        {"Row1Col1", "Row1Col2", "Row1Col3", "Row1Col4 Row1Col4"},
        {"Row2Col1", "Row2Col2", "Row2Col3", "Row2Col4"},
        {"Row3Col1", "Row3Col2", "Row3Col3 Row1Col4 Row1Col4", "Row3Col4"},
        {"Row4Col1", "Row4Col2", "Row4Col3", "Row4Col4"},
        {"Row5Col1", "Row5Col2", "Row5Col3", "Row5Col4"}
    };

    int column_widths[COLS];
    calculate_column_widths(table, column_widths);
    print_table(table, column_widths);

    return 0;
}

