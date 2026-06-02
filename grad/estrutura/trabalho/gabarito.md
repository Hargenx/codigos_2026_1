# Gabarito — Trabalho Discursivo de Estrutura de Dados

**Valor total:** 3,0 pontos

---

## Questão 1 — Conceitos e representação de estruturas de dados

* **Valor: 0,6 ponto**

### Resposta esperada 1

O aluno deve explicar que cada produto pode ser representado por uma estrutura composta, como um `struct` em C/C++ ou um registro em pseudocódigo, pois o produto possui vários dados relacionados entre si.

Um exemplo conceitual seria:

```c
struct Produto {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
};
```

Depois, vários produtos poderiam ser armazenados em um vetor:

```c
Produto produtos[100];
```

Ou em uma lista, caso o número de produtos possa variar durante a execução.

### O que deve aparecer na resposta

| Critério                                                            | Pontuação |
| ------------------------------------------------------------------- | --------: |
| Explica que um produto possui vários dados relacionados             |      0,15 |
| Justifica o uso de `struct` ou registro                             |      0,15 |
| Explica que vários produtos podem ser armazenados em vetor ou lista |      0,15 |
| Aponta uma vantagem e uma limitação do vetor                        |      0,15 |
| **Total**                                                           |   **0,6** |

### Exemplo de resposta adequada

Um produto pode ser representado por um `struct`, pois possui informações diferentes, como código, nome, preço e quantidade, mas todas pertencem ao mesmo objeto. Para armazenar vários produtos, poderia ser usado um vetor de produtos, em que cada posição guarda um produto diferente. Uma vantagem do vetor é o acesso direto por posição, por exemplo, acessar rapidamente o produto na posição 5. Uma limitação é que o tamanho do vetor normalmente precisa ser definido previamente, dificultando o crescimento da quantidade de produtos.

---

## Questão 2 — Pilhas e validação de expressão

* **Valor: 1,0 ponto**

### Resposta esperada 2

O aluno deve apresentar um algoritmo que use o conceito de **pilha** para verificar se os parênteses estão balanceados.

A lógica principal é:

1. Percorrer a expressão da esquerda para a direita.
2. Ao encontrar `(`, empilhar.
3. Ao encontrar `)`, verificar se existe algum `(` disponível na pilha.
4. Se aparecer `)` e a pilha estiver vazia, a expressão está mal formada.
5. Ao final, se a pilha estiver vazia, está bem formada.
6. Se sobrou algum `(` na pilha, está mal formada.

### Código exemplo em C

```c
int testar(char E[], int n) {
    char pilha[n];
    int topo = -1;

    for (int i = 0; i < n; i++) {
        if (E[i] == '(') {
            topo++;
            pilha[topo] = E[i];
        } 
        else if (E[i] == ')') {
            if (topo == -1) {
                return 0;
            }
            topo--;
        }
    }

    if (topo == -1) {
        return 1;
    } else {
        return 0;
    }
}
```

### Versão alternativa usando apenas contador

Também pode ser aceita uma solução que **simula o comportamento da pilha** com contador, desde que o aluno explique corretamente a ideia.

```c
int testar(char E[], int n) {
    int pilha = 0;

    for (int i = 0; i < n; i++) {
        if (E[i] == '(') {
            pilha++;
        } 
        else if (E[i] == ')') {
            if (pilha == 0) {
                return 0;
            }
            pilha--;
        }
    }

    return pilha == 0;
}
```

Essa segunda versão não cria uma pilha real, mas funciona porque a expressão só possui `(` e `)`. O contador representa quantos parênteses abertos ainda precisam ser fechados.

### O que deve aparecer na resposta 2

| Critério                                         | Pontuação |
| ------------------------------------------------ | --------: |
| Percorre corretamente a expressão                |      0,15 |
| Empilha ou conta os parênteses de abertura `(`   |       0,2 |
| Trata corretamente o fechamento `)`              |      0,25 |
| Detecta erro quando aparece `)` sem `(` anterior |       0,2 |
| Verifica ao final se a pilha ficou vazia         |       0,2 |
| **Total**                                        |   **1,0** |

### Exemplos de avaliação

| Expressão | Resultado   |
| --------- | ----------- |
| `()`      | retorna `1` |
| `(())`    | retorna `1` |
| `(()())`  | retorna `1` |
| `)(`      | retorna `0` |
| `(()`     | retorna `0` |
| `())(`    | retorna `0` |

---

## Questão 3 — Listas e ordenação

* **Valor: 0,7 ponto**

### Resposta esperada

O aluno deve explicar que a lista de alunos pode ser ordenada usando o campo **nota** como critério. Como a ordem desejada é decrescente, os alunos com maiores notas devem aparecer antes dos alunos com menores notas.

Não é necessário escrever código.

### O que deve aparecer na resposta 3

| Critério                                             | Pontuação |
| ---------------------------------------------------- | --------: |
| Identifica a nota como critério de ordenação         |      0,15 |
| Explica corretamente ordem decrescente               |      0,15 |
| Explica que a ordenação facilita a análise dos dados |       0,2 |
| Cita um algoritmo de ordenação adequado              |       0,2 |
| **Total**                                            |   **0,7** |

### Exemplo de resposta adequada 3

A lista de alunos poderia ser ordenada usando a nota como critério. Como a ordem solicitada é decrescente, o aluno com maior nota deve aparecer primeiro, seguido pelos demais até chegar à menor nota. Essa ordenação facilita a análise porque permite identificar rapidamente os melhores desempenhos, os alunos com notas mais baixas e a posição de cada aluno na turma. Um algoritmo que poderia ser usado é o Bubble Sort, comparando as notas de dois alunos e trocando suas posições quando estiverem fora da ordem desejada.

Também podem ser aceitos: Selection Sort, Insertion Sort, Merge Sort, Quick Sort ou outro algoritmo de ordenação corretamente justificado.

---

## Questão 4 — Algoritmos avançados e escolha da estrutura adequada

* **Valor: 0,7 ponto**

### Resposta esperada 4

O aluno deve reconhecer que o atendimento comum segue a lógica de **fila**, isto é, o primeiro paciente que chega deve ser o primeiro a ser atendido. Porém, como existem pacientes prioritários, uma fila simples pode não resolver completamente o problema.

A resposta deve indicar alguma forma de tratar prioridade, como:

* fila de prioridade;
* duas filas, uma para prioritários e outra para comuns;
* heap;
* lista ordenada por prioridade;
* algoritmo que verifica primeiro os prioritários e depois os comuns.

### O que deve aparecer na resposta 4

| Critério                                               | Pontuação |
| ------------------------------------------------------ | --------: |
| Identifica a fila como estrutura para ordem de chegada |      0,15 |
| Explica por que a fila comum não é suficiente          |       0,2 |
| Sugere estrutura ou estratégia com prioridade          |       0,2 |
| Explica como escolher o próximo paciente               |      0,15 |
| **Total**                                              |   **0,7** |

### Exemplo de resposta adequada 4

O atendimento por ordem de chegada pode ser representado por uma fila, pois o primeiro paciente que chega deve ser o primeiro a ser atendido. Porém, uma fila comum não é suficiente porque pacientes prioritários precisam ser atendidos antes dos pacientes comuns. Uma solução seria usar uma fila de prioridade ou duas filas separadas: uma para pacientes prioritários e outra para pacientes comuns. O sistema verificaria primeiro se existe algum paciente prioritário aguardando. Se existir, atende o primeiro da fila prioritária. Caso contrário, atende o primeiro da fila comum.

---

## Critério geral de correção

| Desempenho do aluno                             |      Pontuação sugerida |
| ----------------------------------------------- | ----------------------: |
| Resposta completa, clara e aplicada ao problema |         100% da questão |
| Resposta correta, mas com pouca explicação      | cerca de 70% da questão |
| Resposta parcialmente correta                   | cerca de 50% da questão |
| Resposta muito incompleta ou confusa            | cerca de 20% da questão |
| Resposta em branco ou fora do tema              |                       0 |

---

## Observação para correção

Na Questão 2, o aluno não precisa escrever exatamente o mesmo código do gabarito. Deve ser considerado correto qualquer algoritmo que:

* percorra a expressão;
* controle os parênteses abertos;
* rejeite fechamento sem abertura;
* verifique se todos os parênteses foram fechados ao final.

Nas demais questões, o foco é avaliar se o aluno entendeu **qual estrutura usar**, **por que usar** e **qual problema ela resolve**.
