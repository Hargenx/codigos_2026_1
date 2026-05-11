#include <stdio.h>

int main() {
  float L, C;
  float area, perimetro;

  printf("Digite a largura da sala: ");
  scanf("%f", &L);

  printf("Digite o comprimento da sala: ");
  scanf("%f", &C);

  area = L * C;
  perimetro = 2 * (L + C);

  printf("Area da sala: %.2f\n", area);
  printf("Perimetro da sala: %.2f\n", perimetro);

  return 0;
}