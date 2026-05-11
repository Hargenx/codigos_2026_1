#include <iostream>

int main() {
    int fatorial = 1;
    int numero = 6;

    for (int i = numero; i >= 1; i--) {
        fatorial *= i;
    }

    std::cout << fatorial << std::endl;

    return 0;
}