#include <stdio.h>

int main() {
  float nota;

  printf("Digite a nota: ");
  scanf("%f", &nota);

  if (nota >= 6) {
    if (nota == 10) {
      printf("Aprovado com nota maxima\n");
    } else {
      printf("Aprovado\n");
    }
  } else {
    printf("Reprovado\n");
  }

  return 0;
}