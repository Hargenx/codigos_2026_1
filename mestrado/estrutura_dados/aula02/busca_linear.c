#include <stdio.h>

int busca_linear(int vetor[], int tamanho, int chave);


int main(void) {
    int vetor[9] = {3, 15, 20, 21, 31, 37, 38, 41, 50};
    int chave = 5;
    int posicao = busca_linear(vetor, 9, chave);

    printf("Posição do elemento %d: %d\n", chave, posicao);

    return 0;
}

int busca_linear(int vetor[], int tamanho, int chave) {
    int i;

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == chave) {
            return i;
        }
    }
    return -1;
}

