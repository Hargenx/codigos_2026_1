#include <iostream>

int main(void) {
    int vet[10];
    vet[0] = 5;
    vet[1] = 6;
    vet[3] = 8;
    vet[4] = 12;
    vet[5] = 18;
    vet[6] = 22;
    vet[7] = 34;
    vet[8] = 78;
    vet[9] = 45;

    std::cout << "Posicao 1 do vetor: " << vet[1] << std::endl;

    vet[4] = 90;

    std::cin >> vet[7];

    std::cout << "Posicao 7 do vetor: " << vet[7] << std::endl;

    char cadeia[20] = "Hello World!";
    std::cout << "Cadeia: " << cadeia << std::endl;

    int num;
    std::cin >> num;
    vet[7] = num;


    return 0;
}