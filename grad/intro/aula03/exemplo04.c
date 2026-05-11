/*
    Programa : Contagem de números
    Autor    : Raphael Mauricio Sanches de Jesus
    Disciplina: Introdução à Programação Estruturada em C
    Versão   : 00.02
    Data     : 26/03/2026

    Descrição:
    Este programa realiza a leitura do nome do usuário e de quatro notas reais,
    calcula a média aritmética dos valores informados e, ao final, exibe
    a situação do aluno de acordo com a média obtida.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(void) {
  char nome[MAX];
  float n1, n2, n3, n4, media;

  printf("Digite o nome do aluno: ");
  fgets(nome, MAX, stdin); // fgets() é uma função que lê a entrada do usuário e armazena em uma string, garantindo que não haja estouro de buffer.

  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);

  printf("Digite o segundo numero: ");
  scanf("%f", &n2);

  printf("Digite o terceiro numero: ");
  scanf("%f", &n3);

  printf("Digite o quarto numero: ");
  scanf("%f", &n4);

  media = (n1 + n2 + n3 + n4) / 4;

  printf("\nNome: %s", nome);
  printf("Numeros digitados: %.2f, %.2f, %.2f, %.2f\n", n1, n2, n3, n4);
  printf("Media: %.2f\n", media);

  return 0;
}