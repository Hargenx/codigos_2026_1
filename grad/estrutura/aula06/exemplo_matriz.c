#include <stdio.h>

int main() {
    int i, j;
    int mat[3][3] = {{2, -6, 8}, {-9, -1, 3}, {-1, -8, 9}};
    printf("Tabela da Matriz original\n\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d][%d]=%d\t", i, j, mat[i][j]);
            if (mat[i][j] < 0) {
                mat[i][j] = mat[i][j] * -1;
            }
        }
    }

    printf("Tabela da matriz positiva:\n\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d][%d]=%d\t", i, j, mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}