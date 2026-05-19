#include <stdio.h>

int main(void) {
    char nome[50];

    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin);

    printf("Nome: %s", nome);

    return 0;
}