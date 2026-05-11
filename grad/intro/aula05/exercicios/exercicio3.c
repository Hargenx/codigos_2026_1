#include <stdio.h>

float entrada(float av, float simulado1, float simulado2, float notaFinal) {
  printf("Digite a nota da AV: ");
  scanf("%f", &av);

  printf("Digite a nota do Simulado 1 (0 a 1): ");
  scanf("%f", &simulado1);

  printf("Digite a nota do Simulado 2 (0 a 1): ");
  scanf("%f", &simulado2);

  notaFinal = av + simulado1 + simulado2;

  return notaFinal;
}

int main() {
  float av;
  float simulado1;
  float simulado2;
  float notaFinal;

  notaFinal = entrada(av, simulado1, simulado2, notaFinal);
  
  notaFinal = (notaFinal > 10) ? 10 : notaFinal;

  printf("Nota final: %.1f\n", notaFinal);

  return 0;
}