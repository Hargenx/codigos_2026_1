#include <stdio.h>

int main(void) {
  int i;
  int *p;

  i = 1234;
  p = &i;

  printf("*p = %d\n", *p);         // valor armazenado em i
  printf(" p = %p\n", (void *)p);  // endereco de i
  printf("&i = %p\n", (void *)&i); // endereco de i
  printf("&p = %p\n", (void *)&p); // endereco da variavel ponteiro p

  return 0;
}