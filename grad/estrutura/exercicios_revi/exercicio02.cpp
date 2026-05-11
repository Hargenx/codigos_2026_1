#include <iostream>

int main() {

    float val_dolar;
    float cot;
    float val_reais;

    std::cout << "Quantidade de dolares no cofre: ";
    std::cin >> val_dolar;

    std::cout << "Cotacao do dolar: ";
    std::cin >> cot;

    val_reais = val_dolar * cot;

    std::cout << "Valor em reais: " << val_reais << std::endl;

    return 0;
}