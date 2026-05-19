#include <iostream>
#include <string>

int main() {
    std::string nome;

    std::cout << "Digite seu nome completo: ";
    std::getline(std::cin, nome);

    std::cout << "Nome: " << nome << std::endl;

    return 0;
}