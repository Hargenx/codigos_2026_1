#include <stdio.h>

void troca(int *i, int *j) {
  int temp = *i;
  *i = *j;
  *j = temp;
}

int main(void) {
  int a = 5;
  int b = 9;

  printf("Antes: a = %d, b = %d\n", a, b);

  troca(&a, &b);

  printf("Depois: a = %d, b = %d\n", a, b);

  return 0;
}