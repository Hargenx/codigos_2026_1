#include <stdio.h>

int main(void) {
    char conceito;

    printf("Digite o conceito do aluno: ");
    scanf(" %c", &conceito);

    switch (conceito) {
        case 'A':
            printf("Excelente.\n");
            break;

        case 'B':
            printf("Bom.\n");
            break;

        case 'C':
            printf("Regular.\n");
            break;

        case 'D':
            printf("Insuficiente.\n");
            break;

        default:
            printf("Conceito invalido.\n");
    }

    return 0;
}