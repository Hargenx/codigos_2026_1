# Trabalho — Estrutura de Dados

**Valor:** 3,0 pontos
**Formato:** individual e manuscrito
**Disciplina:** Estrutura de Dados
**Orientação:** o objetivo é avaliar compreensão, escolha de estruturas e raciocínio lógico. Somente a **Questão 2** exige escrita de algoritmo/código.

---

## Questão 1 — Conceitos e representação de estruturas de dados

* **Valor: 0,6 ponto**

Uma loja deseja armazenar os dados de seus produtos em um sistema. Cada produto possui:

* código;
* nome;
* preço;
* quantidade em estoque.

Explique como esses dados poderiam ser representados em uma estrutura de dados.

Na sua resposta, comente:

a) por que seria adequado usar um `struct` ou registro para representar um produto;
b) como vários produtos poderiam ser armazenados em um vetor ou lista;
c) uma vantagem e uma limitação do uso de vetor para esse caso.

---

## Questão 2 — Pilhas e validação de expressão

* **Valor: 1,0 ponto**

Apresente um algoritmo, em **C, C++ ou pseudocódigo estruturado**, para verificar se uma expressão formada pelos símbolos `(` e `)` está bem formada.

Considere que os símbolos da expressão estão armazenados em um vetor `E`, das posições `0` até `n - 1`.

A assinatura do método/função pode ser:

```c
int testar(char E[], int n);
```

A função deve retornar:

* `1`, se a expressão estiver bem formada;
* `0`, se a expressão estiver mal formada.

Exemplos:

| Expressão | Resultado esperado |
| --------- | ------------------ |
| `()`      | bem formada        |
| `(())`    | bem formada        |
| `(()())`  | bem formada        |
| `)(`      | mal formada        |
| `(()`     | mal formada        |
| `())(`    | mal formada        |

A resposta deve obrigatoriamente usar o conceito de **pilha** ou simular seu comportamento.

---

## Questão 3 — Listas e ordenação

* **Valor: 0,7 ponto**

Um professor possui uma lista de alunos com suas respectivas notas. Ele deseja organizar essa lista em ordem decrescente de nota, da maior para a menor.

Explique como um algoritmo de ordenação poderia ser aplicado nesse caso.

Na sua resposta, comente:

a) qual campo seria usado como critério de ordenação;
b) o que significa ordenar em ordem decrescente;
c) por que a ordenação facilita a análise dos dados;
d) cite um algoritmo de ordenação que poderia ser usado, como Bubble Sort, Selection Sort, Insertion Sort ou outro conhecido.

Não é necessário escrever o código da ordenação.

---

## Questão 4 — Algoritmos avançados e escolha da estrutura adequada

* **Valor: 0,7 ponto**

Um sistema de atendimento de uma clínica precisa controlar pacientes que chegam para consulta. Os pacientes comuns são atendidos por ordem de chegada, mas pacientes prioritários devem ser atendidos antes.

Analise a situação e responda:

a) que estrutura de dados poderia representar o atendimento por ordem de chegada;
b) por que uma fila comum pode não ser suficiente nesse problema;
c) que ideia de algoritmo ou estrutura mais avançada poderia ser usada para tratar prioridades;
d) explique, com suas palavras, como o sistema decidiria quem será o próximo paciente atendido.

Não é necessário escrever código.

---

## Observação

Nas questões discursivas, não é necessário decorar código. O importante é explicar corretamente a escolha das estruturas de dados e demonstrar entendimento da aplicação prática.

Somente a Questão 2 exige a construção de um algoritmo ou função.
