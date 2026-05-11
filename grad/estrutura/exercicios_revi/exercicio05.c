#include <stdio.h>

#define TAM 5

void preencherVetor(int vetor[], int tamanho);
void mostrarVetor(int vetor[], int tamanho);

int main(void) {
  int numeros[TAM];

  preencherVetor(numeros, TAM);
  mostrarVetor(numeros, TAM);

  return 0;
}

void preencherVetor(int vetor[], int tamanho) {
  int i;

  for (i = 0; i < tamanho; i++) {
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
  }
}

void mostrarVetor(int vetor[], int tamanho) {
  int i;

  printf("\nValores do vetor:\n");

  for (i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }

  printf("\n");
}