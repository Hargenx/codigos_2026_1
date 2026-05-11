#include <iostream>

const int TAM = 5;

void preencherVetor(int vetor[], int tamanho);
void mostrarVetor(int vetor[], int tamanho);

int main() {
    int numeros[TAM];

    preencherVetor(numeros, TAM);
    mostrarVetor(numeros, TAM);

    return 0;
}

void preencherVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Digite um numero: ";
        std::cin >> vetor[i];
    }
}

void mostrarVetor(int vetor[], int tamanho) {
    std::cout << "\nValores do vetor:\n";

    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " ";
    }

    std::cout << "\n";
}