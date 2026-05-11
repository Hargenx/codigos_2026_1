#include <stdio.h>

int main() {
  float nota;

  printf("Digite a nota: ");
  scanf("%f", &nota);

  printf("%s\n", nota >= 6 ? "Aprovado" : "Reprovado");

  return 0;
}