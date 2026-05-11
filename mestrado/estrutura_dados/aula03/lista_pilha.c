#include <stdio.h>

void inserirPilha(int novo_valor, int pilha[], int *topo, int tamanho) {
    if (*topo == tamanho) {
        printf("Pilha cheia!\n");
    } else {
        pilha[(*topo)++] = novo_valor;
    }
}

int removerPilha(int pilha[], int *topo, int tamanho) {
    if (*topo == 0) {
        printf("Pilha vazia!\n");
        return -1;
    } else {
        return pilha[--(*topo)];
    }
}


int main(void) {
    int pilha[10];
    int topo = 0;
    int valor;

    inserirPilha(1, pilha, &topo, 10);
    inserirPilha(2, pilha, &topo, 10);
    inserirPilha(3, pilha, &topo, 10);
    inserirPilha(4, pilha, &topo, 10);
    inserirPilha(5, pilha, &topo, 10);

    valor = removerPilha(pilha, &topo, 10);
    printf("Valor removido: %d\n", valor);

    valor = removerPilha(pilha, &topo, 10);
    printf("Valor removido: %d\n", valor);

    valor = removerPilha(pilha, &topo, 10);
    printf("Valor removido: %d\n", valor);

    printf("Pilha vazia: %d\n", removerPilha(pilha, &topo, 10));

    return 0;
}