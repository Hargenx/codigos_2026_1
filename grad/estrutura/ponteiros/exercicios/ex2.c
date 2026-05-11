#include <stdio.h>

int main() {
  int idade;
  int soma = 0, qtd = 0;

  int *pSoma = &soma;
  int *pQtd = &qtd;

  while (1) {
    printf("Digite uma idade (-1 para sair): ");
    scanf("%d", &idade);

    if (idade == -1)
      break;

    *pSoma += idade;
    (*pQtd)++;
  }

  if (*pQtd > 0) {
    float media = (float)(*pSoma) / (*pQtd);
    printf("Media das idades: %.2f\n", media);
  } else {
    printf("Nenhuma idade foi informada.\n");
  }

  return 0;
}