#include <stdio.h>

void contar(int v[], int tamanho) {

  int pares = 0;
  int impares = 0;

  for (int i = 0; i < tamanho; i++) {
    if (v[i] % 2 == 0)
      pares++;
    else
      impares++;
  }

  printf("Quantidade de pares: %d\n", pares);
  printf("Quantidade de impares: %d\n", impares);
}

int main() {

  int numeros[10];

  for (int i = 0; i < 10; i++) {
    printf("Digite um numero: ");
    scanf("%d", &numeros[i]);
  }

  contar(numeros, 10);

  return 0;
}