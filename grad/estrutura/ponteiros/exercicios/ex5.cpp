#include <iostream>

int main() {
  int i = 1;
  int *p = &i;

  while (*p <= 50) {
    std::cout << *p << std::endl;
    (*p)++;
  }

  return 0;
}