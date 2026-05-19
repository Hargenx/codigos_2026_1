#include <iostream>

int main() {
    int matriz[2][3];

    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            std::cout << "Digite o valor da posicao ["
                      << linha << "][" << coluna << "]: ";
            std::cin >> matriz[linha][coluna];
        }
    }

    std::cout << "\nMatriz digitada:\n";

    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            std::cout << matriz[linha][coluna] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}