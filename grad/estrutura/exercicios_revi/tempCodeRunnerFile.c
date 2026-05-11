#include <stdio.h>

float media(float n1, float n2, float n3) { return (n1 + n2 + n3) / 3; }

int main() {

  float n1, n2, n3;

  printf("Digite a primeira nota: ");
  scanf("%f", &n1);

  printf("Digite a segunda nota: ");
  scanf("%f", &n2);

  printf("Digite a terceira nota: ");
  scanf("%f", &n3);

  float resultado = media(n1, n2, n3);

  printf("Media: %.2f\n", resultado);

  return 0;
}