# Gabarito sugerido

## Questão 1

Resposta esperada:

```text
a) Entradas: valor do produto e quantidade comprada.
b) Processamento: multiplicar o valor do produto pela quantidade.
c) Saída: valor total da compra.
```

---

## Questão 2

Resposta esperada:

```text
A expressão será falsa.
```

Justificativa:

```text
idade >= 18 é verdadeiro.
media >= 6.0 é verdadeiro.
faltas <= 10 é falso, pois faltas vale 12.

Como a expressão usa &&, todas as condições precisam ser verdadeiras.
Portanto, o resultado final é falso.
```

---

## Questão 3

Exemplo de resposta:

```c
#include <stdio.h>

int main(void) {
    char nome[50];
    float salario;

    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    printf("Funcionario: %s\n", nome);
    printf("Salario atual: R$ %.2f\n", salario);

    return 0;
}
```

---

## Questão 4

Exemplo de resposta:

```c
#include <stdio.h>

int main(void) {
    float nota;

    printf("Digite a nota do candidato: ");
    scanf("%f", &nota);

    if (nota >= 7.0) {
        printf("Aprovado para entrevista\n");
    } else {
        printf("Nao aprovado\n");
    }

    return 0;
}
```

---

## Questão 5

Exemplo de resposta:

```c
#include <stdio.h>

int main(void) {
    float notas[5];
    float soma = 0;
    float media;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite a nota do candidato %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 5;

    printf("Media final: %.2f\n", media);

    return 0;
}
```

---

## Distribuição dos temas

| Tema                                                    | Questão   |
| ------------------------------------------------------- | --------- |
| Solução de problemas e pensamento computacional         | Questão 1 |
| Tipos de dados, expressões, operadores e tabela verdade | Questão 2 |
| Comandos de entrada e saída                             | Questão 3 |
| Estruturas de decisão                                   | Questão 4 |
| Estruturas de repetição                                 | Questão 5 |
| Vetores e matrizes                                      | Questão 5 |
