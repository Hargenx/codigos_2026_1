#include <stdio.h>

int main() {

  float val_dolar;
  float cot;
  float val_reais;

  printf("Quantidade de dolares no cofre: ");
  scanf("%f", &val_dolar);

  printf("Cotacao do dolar: ");
  scanf("%f", &cot);

  val_reais = val_dolar * cot;

  printf("Valor em reais: %.2f\n", val_reais);

  return 0;
}