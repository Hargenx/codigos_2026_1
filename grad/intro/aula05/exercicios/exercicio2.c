#include <stdio.h>

int main() {
  float nota;

  printf("Digite a nota: ");
  scanf("%f", &nota);

  if (nota >= 6) {
    printf("Aluno aprovado\n");
  } else {
    printf("Aluno reprovado\n");
  }

  return 0;
}