#include <stdio.h>

void desejo(int num);

int main(void){
    int num;
    printf("Qual seu desejo: ");
    scanf("%d", &num);
    desejo(num);
    return 0;
}

void desejo(int num){
    char desejado[3];
    if (num == 1){
        printf("Estah realizado!");
    }else{
        printf("Nao estah realizado!");
    }
}