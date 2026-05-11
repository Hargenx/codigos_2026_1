#include <stdio.h>

int main(void) {
    int idade;
    float altura;
    char inicial;
    char resposta;

    /* Comando de saída */
    puts("=== Cadastro simples em C ===");

    /* Entrada de inteiro */
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    /* Entrada de real */
    printf("Digite sua altura (exemplo: 1.75): ");
    scanf("%f", &altura);

    /* Entrada de caractere */
    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial);

    /*
      Buffer do teclado:
      Após os scanf anteriores, pode sobrar '\n' no buffer.
      O getc(stdin) abaixo consome esse ENTER pendente.
    */
    getc(stdin);

    printf("Voce gosta de programacao? (s/n): ");
    resposta = getc(stdin);

    /* Comandos de atribuicao */
    idade = idade + 1;

    /* Saida formatada */
    printf("\n=== Resultados ===\n");
    printf("No proximo ano, voce tera %d anos.\n", idade);
    printf("Sua altura informada foi %.2f m.\n", altura);
    printf("A inicial do seu nome e %c.\n", inicial);
    printf("Sua resposta foi %c.\n", resposta);

    puts("Programa encerrado com sucesso.");

    return 0;
}