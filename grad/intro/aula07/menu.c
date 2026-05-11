#include <stdio.h>

int menu(void) {
    int valor;
    printf("Menu de opcoes:\n");
    printf("1. Cadastrar aluno\n");
    printf("2. Consultar aluno\n");
    printf("3. Excluir aluno\n");
    printf("4. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &valor);
    return valor;
}

int main(void) {
    int opcao = menu();

    switch (opcao) {
        case 1:
            printf("Opcao escolhida: Cadastrar aluno.\n");
            break;

        case 2:
            printf("Opcao escolhida: Consultar aluno.\n");
            break;

        case 3:
            printf("Opcao escolhida: Excluir aluno.\n");
            break;

        case 4:
            printf("Encerrando o programa.\n");
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}