#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];

    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin);

    nome[strcspn(nome, "\n")] = '\0';

    printf("Nome: %s\n", nome);

    return 0;
}