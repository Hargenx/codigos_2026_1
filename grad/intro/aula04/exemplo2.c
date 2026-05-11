#include <stdio.h>

void funcao(int valor);

int main(void){
    int num = 5;
    funcao(num);
    return 0;
}

void funcao(int valor){
    if (valor > 0){
        printf("Valor positivo!");
    }else{
        printf("Valor negativo!");
    }
}