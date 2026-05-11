#include <stdio.h>

int busca_sequencial(int vetor[], int tamanho, int chave);

int main(){
    int vetor[9] = {3, 15, 20, 21, 31, 37, 38, 41, 50};
    int elemento = 31;
    int posicao = busca_sequencial(vetor, 9, elemento);

    printf("Posição do elemento %d: %d\n", elemento, posicao);

    return 0;
}

int busca_sequencial(int vetor[], int tamanho, int chave){
    int inferior = 0;
    int superior = tamanho - 1;
    int medio;

    while (inferior <= superior) {
        medio = (inferior + superior) / 2;
        if (vetor[medio] == chave) {
            return medio;
        } else if (vetor[medio] > chave) {
            superior = medio - 1;
        } else {
            inferior = medio + 1;
        }
    }
    return -1;
}