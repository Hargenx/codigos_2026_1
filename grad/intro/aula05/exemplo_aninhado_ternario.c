#include <stdio.h>

int main() {
  float nota;
  char *resultado;

  printf("Digite a nota: ");
  scanf("%f", &nota);

  resultado = nota >= 6 ? (nota == 10 ? "Aprovado com nota maxima" : "Aprovado")
                        : "Reprovado";

  printf("%s\n", resultado);

  return 0;
}