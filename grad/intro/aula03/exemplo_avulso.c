// Include faz a inclusão de uma biblioteca.
/*
std == standard
io == inoput/output
*/
#include <stdio.h>

#include <stdlib.h>

// Fubnção principal do C, sempre retorna um int.
int main(int argc, char *argv[]) {
  char nome[15];
  int numero1, numero2;
  numero1 = 8 + 9 * 2 / 4;
  printf("%d \tHello\bWorld\n\7", numero1);
  printf("\tDigite o seu nome: ");
  scanf("%c", &nome);
  printf("%c", nome);
  return 0;
}