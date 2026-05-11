#include <iostream>

bool ehPar(int x) { return x % 2 == 0; }

int main() {
  bool (*pFunc)(int) = ehPar;

  for (int i = 1; i <= 100; i++) {
    if (pFunc(i)) {
      std::cout << i << std::endl;
    }
  }

  return 0;
}