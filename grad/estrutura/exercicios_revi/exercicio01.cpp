#include <iostream>

int main() {
  float L, C;

  std::cout << "Digite a largura da sala: ";
  std::cin >> L;

  std::cout << "Digite o comprimento da sala: ";
  std::cin >> C;

  float area = L * C;
  float perimetro = 2 * (L + C);

  std::cout << "Area: " << area << std::endl;
  std::cout << "Perimetro: " << perimetro << std::endl;

  return 0;
}