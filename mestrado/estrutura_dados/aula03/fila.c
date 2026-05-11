#include <stdio.h>

void inserirFila(int novo_valor, int fila[], int *topo, int tamanho) {
    if (*topo == tamanho) {
        printf("Fila cheia!\n");
    } else {
        fila[(*topo)++] = novo_valor;
    }
}

int removerFila(int fila[], int *topo, int tamanho) {
    if (*topo == 0) {
        printf("Fila vazia!\n");
        return -1;
    } else {
        return fila[--(*topo)];
    }
}


int main(void) {
    int fila[10];
    int topo = 0;
    int valor;

    inserirFila(1, fila, &topo, 10);
    inserirFila(2, fila, &topo, 10);
    inserirFila(3, fila, &topo, 10);
    inserirFila(4, fila, &topo, 10);
    inserirFila(5, fila, &topo, 10);

    valor = removerFila(fila, &topo, 10);
    printf("Valor removido: %d\n", valor);

    valor = removerFila(fila, &topo, 10);
    printf("Valor removido: %d\n", valor);

    valor = removerFila(fila, &topo, 10);
    printf("Valor removido: %d\n", valor);

    printf("Fila vazia: %d\n", removerFila(fila, &topo, 10));

    return 0;
}