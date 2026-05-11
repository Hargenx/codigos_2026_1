#include <stdio.h>

#define MAX 10

typedef struct {
    int chave;
} Item;

typedef struct {
    Item dados[MAX];
    int n;
} Lista;

void inicializar(Lista *L) {
    L->n = 0;
}

int buscar(const Lista *L, int chave) {
    for (int i = 0; i < L->n; i++) {
        if (L->dados[i].chave == chave) {
            return i;
        }
    }

    return -1;
}

int inserir(Lista *L, Item novo_elemento) {
    if (L->n == MAX) {
        return -2; // lista cheia
    }

    if (buscar(L, novo_elemento.chave) == -1) {
        L->dados[L->n] = novo_elemento;
        L->n++;
        return 1; // inserido com sucesso
    }

    return -1; // chave já existe
}

int remover(Lista *L, int chave) {
    if (L->n == 0) {
        return -2; // lista vazia
    }

    int pos = buscar(L, chave);

    if (pos == -1) {
        return -1; // elemento não encontrado
    }

    for (int i = pos; i < L->n - 1; i++) {
        L->dados[i] = L->dados[i + 1];
    }

    L->n--;
    return 1; // removido com sucesso
}

void imprimir(const Lista *L) {
    printf("Lista: ");

    for (int i = 0; i < L->n; i++) {
        printf("%d ", L->dados[i].chave);
    }

    printf("\n");
}

int main(void) {
    Lista L;
    inicializar(&L);

    inserir(&L, (Item){10});
    inserir(&L, (Item){20});
    inserir(&L, (Item){30});

    imprimir(&L);

    printf("Removendo 20...\n");
    remover(&L, 20);

    imprimir(&L);

    printf("Tentando inserir 30 novamente...\n");
    int resultado = inserir(&L, (Item){30});

    if (resultado == -1) {
        printf("Erro: chave ja existente.\n");
    }

    imprimir(&L);

    return 0;
}