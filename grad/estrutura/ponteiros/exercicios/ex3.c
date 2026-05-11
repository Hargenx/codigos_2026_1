#include <stdio.h>

int main() {
  int n;
  int *pN = &n;

  do {
    printf("Digite um numero entre 1 e 10: ");
    scanf("%d", pN); // usando ponteiro diretamente
  } while (*pN < 1 || *pN > 10);

  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", *pN, i, (*pN) * i);
  }

  return 0;
}