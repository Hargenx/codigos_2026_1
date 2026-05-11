#include <stdio.h>

int main(void){
int a = 8, b= 2, c;
int *p, *q;
p = &a;
q = &b;
c = *p  + *q;

printf("Valor de c: %d\n", c);

return 0;
}

