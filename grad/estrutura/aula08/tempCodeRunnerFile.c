#include <stdio.h>

int main(void) {
    int total_count, counter, counter1, swap_var;
    int array[20];

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &total_count);

    if (total_count <= 0 || total_count > 20) {
        printf("Quantidade invalida. Digite um valor entre 1 e 20.\n");
        return 1;
    }

    printf("Digite %d numeros inteiros:\n", total_count);

    for (counter = 0; counter < total_count; counter++) {
        scanf("%d", &array[counter]);
    }

    for (counter = 0; counter < total_count - 1; counter++) {
        for (counter1 = 0; counter1 < total_count - counter - 1; counter1++) {
            if (array[counter1] > array[counter1 + 1]) {
                swap_var = array[counter1];
                array[counter1] = array[counter1 + 1];
                array[counter1 + 1] = swap_var;
            }
        }
    }

    printf("Lista em ordem crescente:\n");

    for (counter = 0; counter < total_count; counter++) {
        printf("%d\n", array[counter]);
    }

    return 0;
}