#include <iostream>

double media(double a, double b, double c) { return (a + b + c) / 3; }

int main() {
  double a, b, c;
  std::cin >> a >> b >> c;
  std::cout << media(a, b, c);
}