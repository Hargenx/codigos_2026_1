#include <iostream>

double media(double n1, double n2, double n3) { return (n1 + n2 + n3) / 3; }

int main() {

  double n1, n2, n3;

  std::cout << "Digite a primeira nota: ";
  std::cin >> n1;

  std::cout << "Digite a segunda nota: ";
  std::cin >> n2;

  std::cout << "Digite a terceira nota: ";
  std::cin >> n3;

  double resultado = media(n1, n2, n3);

  std::cout << "Media: " << resultado << std::endl;

  return 0;
}