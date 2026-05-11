#include <stdio.h>

int main() {
  int pares = 0, impares = 0;
  int *pPares = &pares;
  int *pImpares = &impares;

  for (int i = 0; i < 10; i++) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
      (*pPares)++;
    } else {
      (*pImpares)++;
    }
  }

  printf("Pares: %d\n", *pPares);
  printf("Impares: %d\n", *pImpares);

  return 0;
}