#include <chrono>
#include <iostream>

static const long long numInt = 100000000;

int main() {
  auto inicio = std::chrono::system_clock::now();

  for (long long i = 0; i < numInt; ++i) {
    int *tmp(new int(i));
    delete tmp;

    // std::shared_ptr<int> tmp(new int(i));
    // std::shared_ptr<int> tmp(std::make_shared<int>(i));
    // std::unique_ptr<int> tmp(new int(i));
    // std::unique_ptr<int> tmp(std::make_unique<int>(i));
  }

  std::chrono::duration<double> duracao =
      std::chrono::system_clock::now() - inicio;

  std::cout << "Tempo nativo: " << duracao.count() << " segundos" << std::endl;
}