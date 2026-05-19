#include <stdio.h>

int main(void) {
    float valorCompra, valorFinal;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    if (valorCompra >= 200) {
        valorFinal = valorCompra * 0.90;
    } else {
        valorFinal = valorCompra;
    }

    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}