#include <stdio.h>

void bubble_sort(int* v, int n) {
    int i, fim, aux;

    for (fim = n - 1; fim > 0; --fim) {
        for (i = 0; i < fim; ++i) {
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }
}

int main(void) {
    int valores[] = {5, 3, 8, 1, 2};
    int n = 5;
    int i;

    bubble_sort(valores, n);

    printf("Vetor ordenado:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }

    printf("\n");

    return 0;
}
