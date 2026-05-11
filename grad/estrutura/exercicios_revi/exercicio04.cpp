#include <iostream>

void contar(int v[], int tamanho) {

  int pares = 0;
  int impares = 0;

  for (int i = 0; i < tamanho; i++) {
    if (v[i] % 2 == 0)
      pares++;
    else
      impares++;
  }

  std::cout << "Quantidade de pares: " << pares << std::endl;
  std::cout << "Quantidade de impares: " << impares << std::endl;
}

int main() {

  int numeros[10];

  for (int i = 0; i < 10; i++) {
    std::cout << "Digite um numero: ";
    std::cin >> numeros[i];
  }

  contar(numeros, 10);

  return 0;
}