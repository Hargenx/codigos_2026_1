#include <iostream>

// Funcao com dois ponteiros simples
void exemplo_um() {
  int a = 10, b = 20, c;
  int *p, *q;

  p = &a; // p aponta para a
  q = &b; // q aponta para b

  c = *p + *q; // soma os valores apontados

  std::cout << "Exemplo 1: Ponteiros Simples" << std::endl;
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "*p = " << *p << ", *q = " << *q << std::endl;
  std::cout << "c = *p + *q = " << c << std::endl << std::endl;
}

// Funcao com ponteiro para ponteiro
void exemplo_dois() {
  int a = 15, b = 25, c;
  int *p;
  int **r;

  p = &a; // p aponta para a
  r = &p; // r aponta para p

  c = **r + b; // soma o valor de a, acessado por **r, com b

  std::cout << "Exemplo 2: Ponteiro para Ponteiro" << std::endl;
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "*p = " << *p << ", **r = " << **r << std::endl;
  std::cout << "c = **r + b = " << c << std::endl;
}

int main() {
  exemplo_um();
  exemplo_dois();

  return 0;
}