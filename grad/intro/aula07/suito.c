#include <stdio.h>

int main(void) {
    int opcao;

    printf("Digite uma opcao de 1 a 3: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Voce escolheu a opcao 1.\n");
            break;

        case 2:
            printf("Voce escolheu a opcao 2.\n");
            break;

        case 3:
            printf("Voce escolheu a opcao 3.\n");
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}