#include <stdio.h>

int main(void) {
  int x = 10, y = 5, z = 7, k = 7;

  printf("Os operadores relacionais sao usados para fazer comparacoes\n");
  printf("Quando o resultado da comparacao eh FALSO retornam 0 (zero)\n");
  printf("Quando o resultado da comparacao eh VERDADEIRO retornam 1 \n");

  printf("\nValor de x = %d    ", x);
  printf("Valor de y = %d \n   ", y);
  printf("Valor de z = %d   ", z);
  printf("Valor de k = %d \n", k);

  printf("\nExemplo 1: x > y : %d", x > y);   // retorna 1 pois é VERDADEIRO
  printf("\nExemplo 2: x < y : %d\n", x < y); // retorna zero pois é FALSO

  printf("\nExemplo 3: z == k : %d", z == k);   // retorna 1 pois é VERDADEIRO
  printf("\nExemplo 4: z != k : %d\n", z != k); // retorna zero pois é FALSO

  printf("\nExemplo 5: z >= x : %d", z >= x); // retorna zero pois é FALSO
  printf("\nExemplo 6: z <= k : %d", z <= k); // retorna 1 pois é VERDADEIRO

  return (0);
}