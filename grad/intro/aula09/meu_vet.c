#include <stdio.h>

int main(void) {
    int vet[10];
    vet[0] = 5;
    vet[1] = 6;
    vet[3] = 8;
    vet[4] = 12;
    vet[5] = 18;
    vet[6] = 22;
    vet[7] = 34;
    vet[8] = 78;
    vet[9] = 45;

    printf("Posicao 1 do vetor: %d", vet[1]);

    vet[4] = 90;

    scanf("%d", &vet[7]);

    printf("Posicao 7 do vetor: %d", vet[7]);

    char cadeia[20] = "Hello World!";
    printf("Cadeia: %s", cadeia);

    int num;
    scanf("%d", &num);
    vet[2] = num;
    return 0;
}