#include <stdio.h>

int main(void) {
  float matriz[4][4];
  float somaImpares = 0.0;
  float somaPares = 0.0;
  int qtdPares = 0;

  printf("Digite os valores da matriz 4x4:\n");

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("Elemento [%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);

      if (j % 2 == 0) { // 1ª e 3ª colunas
        somaImpares += matriz[i][j];
      } else { // 2ª e 4ª colunas
        somaPares += matriz[i][j];
        qtdPares++;
      }
    }
  }

  printf("\nSoma das colunas impares: %.2f\n", somaImpares);
  printf("Media das colunas pares: %.2f\n", somaPares / qtdPares);

  return 0;
}