#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int chave;
  struct No *ant;
  struct No *post;
} No;

No *criar_cabecalho() {
  No *ptlista = (No *)malloc(sizeof(No));
  ptlista->ant = ptlista;
  ptlista->post = ptlista;
  return ptlista;
}

No *criar_no(int chave) {
  No *novo = (No *)malloc(sizeof(No));
  novo->chave = chave;
  novo->ant = NULL;
  novo->post = NULL;
  return novo;
}

void inserir_ordenado(No *ptlista, int chave) {
  No *novo = criar_no(chave);

  /* lista vazia */
  if (ptlista->post == ptlista) {
    novo->ant = ptlista;
    novo->post = ptlista;
    ptlista->post = novo;
    ptlista->ant = novo;
    return;
  }

  No *pos;
  No *ultimo = ptlista->ant;

  if (chave <= ultimo->chave) {
    pos = ptlista->post;
    while (pos->chave < chave) {
      pos = pos->post;
    }

    No *anterior = pos->ant;
    novo->ant = anterior;
    novo->post = pos;
    anterior->post = novo;
    pos->ant = novo;
  } else {
    novo->ant = ultimo;
    novo->post = ptlista;
    ultimo->post = novo;
    ptlista->ant = novo;
  }
}

No *busca_dup(No *ptlista, int x) {
  /* lista vazia */
  if (ptlista->post == ptlista) {
    return ptlista;
  }

  No *ultimo = ptlista->ant;

  if (x <= ultimo->chave) {
    No *pont = ptlista->post;
    while (pont->chave < x) {
      pont = pont->post;
    }
    return pont;
  } else {
    return ptlista;
  }
}

void mostrar(No *ptlista) {
  No *atual = ptlista->post;

  while (atual != ptlista) {
    printf("%d", atual->chave);
    if (atual->post != ptlista) {
      printf(" <-> ");
    }
    atual = atual->post;
  }
  printf("\n");
}

int main() {
  No *lista = criar_cabecalho();

  inserir_ordenado(lista, 10);
  inserir_ordenado(lista, 20);
  inserir_ordenado(lista, 30);
  inserir_ordenado(lista, 40);

  mostrar(lista);

  int buscas[] = {30, 25, 50};
  int i;

  for (i = 0; i < 3; i++) {
    No *resultado = busca_dup(lista, buscas[i]);

    if (resultado == lista) {
      printf("Busca %d: retornou ptlista (iria para o final)\n", buscas[i]);
    } else {
      printf("Busca %d: retornou nó com chave %d\n", buscas[i],
             resultado->chave);
    }
  }

  return 0;
}