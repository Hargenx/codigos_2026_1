#include <stdio.h>
#include <string.h>

typedef struct {
  char titulo[100];
  char autor[100];
  int ano;
  int paginas;
  float preco;
} Livro;

static void le_linha(char *texto, int tamanho) {
  fgets(texto, tamanho, stdin);
  texto[strcspn(texto, "\n")] = '\0';
}

int main(void) {
  Livro livro;

  printf("Titulo: ");
  le_linha(livro.titulo, sizeof(livro.titulo));

  printf("Autor: ");
  le_linha(livro.autor, sizeof(livro.autor));

  printf("Ano de publicacao: ");
  scanf("%d", &livro.ano);

  printf("Numero de paginas: ");
  scanf("%d", &livro.paginas);

  printf("Preco: ");
  scanf("%f", &livro.preco);

  printf("\n--- Dados do Livro ---\n");
  printf("Titulo: %s\n", livro.titulo);
  printf("Autor: %s\n", livro.autor);
  printf("Ano: %d\n", livro.ano);
  printf("Paginas: %d\n", livro.paginas);
  printf("Preco: R$ %.2f\n", livro.preco);

  return 0;
}