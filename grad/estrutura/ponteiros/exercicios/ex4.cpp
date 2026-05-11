#include <iostream>

int main() {
  float *notas = new float[3];

  for (int i = 0; i < 3; i++) {
    std::cout << "Digite a nota " << (i + 1) << ": ";
    std::cin >> *(notas + i);
  }

  float soma = 0;
  for (int i = 0; i < 3; i++) {
    soma += *(notas + i);
  }

  float media = soma / 3;
  std::cout << "Media: " << media << std::endl;

  delete[] notas;
  return 0;
}