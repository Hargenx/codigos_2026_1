#include <stdio.h>
#include <stdbool.h>

bool busca1(int x, int n, int v[]){
    int i = 1;
    bool encontrado = 0;
    while (i <= n && x != v[i]){
        i = i + 1;
    }
    if (i <= n){
        encontrado = 1;
    }
    return encontrado;
}

int main(){
    int x, n;
    scanf("%d %d", &x, &n);
    int v[n + 1];
    for (int i = 1; i <= n; i++){
        scanf("%d", &v[i]);
    }
    if (busca1(x, n, v)){
        printf("Elemento encontrado\n");
    } else {
        printf("Elemento nao encontrado\n");
    }
}