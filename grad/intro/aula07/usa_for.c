#include <stdio.h>

int main(void) {
    int contador = 1;

    for (;;) {
        if (contador > 10) {
            break;
        }
        printf("%d\n", contador);
        contador++;
    }

    return 0;
}