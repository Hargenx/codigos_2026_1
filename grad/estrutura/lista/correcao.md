# Soluções — Estrutura de Dados

## Tema 1 — Estruturas de Dados: Conceitos e Representação

### 1. O que é uma estrutura de dados?

Uma **estrutura de dados** é uma forma organizada de armazenar, acessar e manipular dados na memória do computador.

Exemplos:

* vetor;
* matriz;
* lista;
* pilha;
* fila;
* árvore;
* grafo.

Ela é importante porque a escolha da estrutura correta pode deixar um programa mais rápido, mais organizado e mais fácil de manter.

---

### 2. Diferença entre dado, informação, variável, tipo de dado e estrutura de dados

**Dado:** valor bruto, ainda sem interpretação.
Exemplo: `18`.

**Informação:** dado com significado.
Exemplo: idade de um aluno é `18 anos`.

**Variável:** espaço na memória com nome, usado para guardar um valor.
Exemplo:

```c
int idade = 18;
```

**Tipo de dado:** define que tipo de valor uma variável pode armazenar.
Exemplo: `int`, `float`, `char`.

**Estrutura de dados:** organização de vários dados.
Exemplo: vetor, lista, pilha, fila.

---

### 3. Estruturas lineares e não lineares

**Lineares:**

* vetor;
* lista;
* pilha;
* fila.

Nelas, os dados aparecem em sequência.

**Não lineares:**

* árvore;
* grafo;
* heap.

Nelas, os dados podem ter relações hierárquicas ou múltiplas conexões.

---

### 4. Estrutura estática e dinâmica

**Estrutura estática:** possui tamanho fixo definido antes ou durante a criação.

Exemplo:

```c
int numeros[10];
```

**Estrutura dinâmica:** pode crescer ou diminuir durante a execução do programa.

Exemplo:

```c
int *numeros = malloc(10 * sizeof(int));
```

Listas encadeadas são exemplos clássicos de estruturas dinâmicas.

---

### 5. Vetor x lista encadeada

| Operação         | Vetor            | Lista encadeada           |
| ---------------- | ---------------- | ------------------------- |
| Acesso direto    | Muito rápido     | Mais lento                |
| Inserção no meio | Mais custosa     | Mais flexível             |
| Remoção no meio  | Mais custosa     | Mais flexível             |
| Uso de memória   | Menor            | Maior, pois usa ponteiros |
| Tamanho          | Normalmente fixo | Dinâmico                  |

O vetor é melhor quando precisamos acessar posições diretamente.
A lista encadeada é melhor quando precisamos inserir e remover muitos elementos.

---

### 6. Acesso fora dos limites de um vetor

Se um vetor tem 10 posições, seus índices vão de `0` até `9`.

Exemplo:

```c
int v[10];

v[0];  // válido
v[9];  // válido
v[10]; // inválido
```

Acessar uma posição fora dos limites pode causar:

* lixo de memória;
* erro de execução;
* comportamento imprevisível;
* falha de segurança.

---

### 7. Struct para armazenar dados de um aluno

```c
#include <stdio.h>

typedef struct {
    int matricula;
    char nome[50];
    int idade;
    float mediaFinal;
} Aluno;

int main() {
    Aluno aluno;

    printf("Matricula: ");
    scanf("%d", &aluno.matricula);

    printf("Nome: ");
    scanf(" %[^\n]", aluno.nome);

    printf("Idade: ");
    scanf("%d", &aluno.idade);

    printf("Media final: ");
    scanf("%f", &aluno.mediaFinal);

    printf("\nAluno cadastrado:\n");
    printf("Matricula: %d\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Media: %.2f\n", aluno.mediaFinal);

    return 0;
}
```

---

### 8. Vetor de structs para armazenar produtos

```c
#include <stdio.h>

typedef struct {
    int codigo;
    char nome[50];
    float preco;
} Produto;

int main() {
    Produto produtos[5];

    for (int i = 0; i < 5; i++) {
        printf("\nProduto %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
    }

    printf("\nProdutos cadastrados:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d - %s - R$ %.2f\n",
               produtos[i].codigo,
               produtos[i].nome,
               produtos[i].preco);
    }

    return 0;
}
```

---

### 9. Papel dos ponteiros em estruturas dinâmicas

Ponteiros permitem trabalhar diretamente com endereços de memória.

Eles são fundamentais em estruturas dinâmicas porque permitem:

* criar novos nós;
* ligar um nó ao outro;
* liberar memória;
* criar listas, pilhas, filas e árvores.

Exemplo de nó de lista:

```c
typedef struct No {
    int valor;
    struct No *proximo;
} No;
```

O campo `proximo` aponta para outro nó.

---

### 10. Alocação estática e dinâmica

**Alocação estática:**

```c
int v[10];
```

O tamanho já está definido.

**Alocação dinâmica:**

```c
int *v = malloc(10 * sizeof(int));
```

O tamanho pode ser definido em tempo de execução.

Depois de usar memória dinâmica, devemos liberar:

```c
free(v);
```

---

### 11. Ler 5 números e exibir na ordem inversa

```c
#include <stdio.h>

int main() {
    int v[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nOrdem inversa:\n");

    for (int i = 4; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    return 0;
}
```

---

### 12. Armazenar dados de 3 livros usando struct

```c
#include <stdio.h>

typedef struct {
    char titulo[80];
    char autor[80];
    int ano;
} Livro;

int main() {
    Livro livros[3];

    for (int i = 0; i < 3; i++) {
        printf("\nLivro %d\n", i + 1);

        printf("Titulo: ");
        scanf(" %[^\n]", livros[i].titulo);

        printf("Autor: ");
        scanf(" %[^\n]", livros[i].autor);

        printf("Ano: ");
        scanf("%d", &livros[i].ano);
    }

    printf("\nLivros cadastrados:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nTitulo: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano: %d\n", livros[i].ano);
    }

    return 0;
}
```

---

## Tema 2 — Listas e Ordenação

### 13. O que é uma lista linear?

Uma **lista linear** é uma estrutura em que os elementos estão organizados em sequência.

Exemplo real:

Uma lista de chamada de alunos:

```text
1. Ana
2. Bruno
3. Carlos
4. Diana
```

Cada elemento possui uma posição dentro da lista.

---

### 14. Lista sequencial x lista encadeada

**Lista sequencial:** usa vetor.

Vantagens:

* acesso rápido por índice;
* implementação simples.

Desvantagens:

* tamanho limitado;
* inserções e remoções podem exigir deslocamentos.

**Lista encadeada:** usa nós ligados por ponteiros.

Vantagens:

* tamanho dinâmico;
* inserções e remoções mais flexíveis.

Desvantagens:

* acesso sequencial;
* usa mais memória por causa dos ponteiros.

---

### 15 e 16. Lista sequencial com inserir, remover, listar e buscar

```c
#include <stdio.h>

#define MAX 100

typedef struct {
    int dados[MAX];
    int tamanho;
} Lista;

void inicializar(Lista *l) {
    l->tamanho = 0;
}

int inserir(Lista *l, int valor) {
    if (l->tamanho == MAX) {
        return 0;
    }

    l->dados[l->tamanho] = valor;
    l->tamanho++;

    return 1;
}

int remover(Lista *l, int valor) {
    for (int i = 0; i < l->tamanho; i++) {
        if (l->dados[i] == valor) {
            for (int j = i; j < l->tamanho - 1; j++) {
                l->dados[j] = l->dados[j + 1];
            }

            l->tamanho--;
            return 1;
        }
    }

    return 0;
}

int buscar(Lista *l, int valor) {
    for (int i = 0; i < l->tamanho; i++) {
        if (l->dados[i] == valor) {
            return i;
        }
    }

    return -1;
}

void listar(Lista *l) {
    for (int i = 0; i < l->tamanho; i++) {
        printf("%d ", l->dados[i]);
    }

    printf("\n");
}

int main() {
    Lista lista;
    inicializar(&lista);

    inserir(&lista, 10);
    inserir(&lista, 20);
    inserir(&lista, 30);

    printf("Lista: ");
    listar(&lista);

    printf("Posicao do 20: %d\n", buscar(&lista, 20));

    remover(&lista, 20);

    printf("Lista apos remocao: ");
    listar(&lista);

    return 0;
}
```

---

### 17, 18, 19, 20, 21 e 24. Lista encadeada simples

Esse código resolve:

* inserção no início;
* inserção no final;
* remoção;
* contagem de nós;
* impressão;
* maior valor da lista.

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

No* criarNo(int valor) {
    No *novo = malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro de memoria.\n");
        exit(1);
    }

    novo->valor = valor;
    novo->proximo = NULL;

    return novo;
}

void inserirInicio(No **lista, int valor) {
    No *novo = criarNo(valor);

    novo->proximo = *lista;
    *lista = novo;
}

void inserirFinal(No **lista, int valor) {
    No *novo = criarNo(valor);

    if (*lista == NULL) {
        *lista = novo;
        return;
    }

    No *atual = *lista;

    while (atual->proximo != NULL) {
        atual = atual->proximo;
    }

    atual->proximo = novo;
}

int removerValor(No **lista, int valor) {
    No *atual = *lista;
    No *anterior = NULL;

    while (atual != NULL && atual->valor != valor) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL) {
        return 0;
    }

    if (anterior == NULL) {
        *lista = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual);
    return 1;
}

int contarNos(No *lista) {
    int contador = 0;

    while (lista != NULL) {
        contador++;
        lista = lista->proximo;
    }

    return contador;
}

void imprimir(No *lista) {
    while (lista != NULL) {
        printf("%d -> ", lista->valor);
        lista = lista->proximo;
    }

    printf("NULL\n");
}

int maiorValor(No *lista) {
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return -1;
    }

    int maior = lista->valor;

    while (lista != NULL) {
        if (lista->valor > maior) {
            maior = lista->valor;
        }

        lista = lista->proximo;
    }

    return maior;
}

int main() {
    No *lista = NULL;

    inserirInicio(&lista, 30);
    inserirInicio(&lista, 20);
    inserirFinal(&lista, 40);
    inserirFinal(&lista, 50);

    imprimir(lista);

    printf("Quantidade de nos: %d\n", contarNos(lista));
    printf("Maior valor: %d\n", maiorValor(lista));

    removerValor(&lista, 40);

    imprimir(lista);

    return 0;
}
```

---

### 22. Lista simples, dupla e circular

**Lista simplesmente encadeada:** cada nó aponta apenas para o próximo.

```text
10 -> 20 -> 30 -> NULL
```

**Lista duplamente encadeada:** cada nó aponta para o próximo e para o anterior.

```text
NULL <- 10 <-> 20 <-> 30 -> NULL
```

**Lista circular:** o último nó aponta novamente para o primeiro.

```text
10 -> 20 -> 30
^           |
|___________|
```

---

### 23. Lista duplamente encadeada com inserção no início e no final

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *anterior;
    struct No *proximo;
} No;

No* criarNo(int valor) {
    No *novo = malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro de memoria.\n");
        exit(1);
    }

    novo->valor = valor;
    novo->anterior = NULL;
    novo->proximo = NULL;

    return novo;
}

void inserirInicio(No **lista, int valor) {
    No *novo = criarNo(valor);

    if (*lista != NULL) {
        (*lista)->anterior = novo;
    }

    novo->proximo = *lista;
    *lista = novo;
}

void inserirFinal(No **lista, int valor) {
    No *novo = criarNo(valor);

    if (*lista == NULL) {
        *lista = novo;
        return;
    }

    No *atual = *lista;

    while (atual->proximo != NULL) {
        atual = atual->proximo;
    }

    atual->proximo = novo;
    novo->anterior = atual;
}

void imprimir(No *lista) {
    while (lista != NULL) {
        printf("%d <-> ", lista->valor);
        lista = lista->proximo;
    }

    printf("NULL\n");
}

int main() {
    No *lista = NULL;

    inserirInicio(&lista, 20);
    inserirInicio(&lista, 10);
    inserirFinal(&lista, 30);
    inserirFinal(&lista, 40);

    imprimir(lista);

    return 0;
}
```

---

### 25. Funcionamento do Bubble Sort

O **Bubble Sort** compara elementos vizinhos e troca quando estão fora de ordem.

Exemplo:

```text
Vetor inicial: 5 3 1

Compara 5 e 3: troca
3 5 1

Compara 5 e 1: troca
3 1 5
```

O maior valor vai “subindo” para o final do vetor a cada passada.

Complexidade média e pior caso:

```text
O(n²)
```

---

### 26. Bubble Sort em C

```c
#include <stdio.h>

void bubbleSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}

int main() {
    int v[] = {5, 3, 8, 1, 2};
    int n = 5;

    bubbleSort(v, n);

    imprimir(v, n);

    return 0;
}
```

---

### 27. Funcionamento do Selection Sort

O **Selection Sort** procura o menor elemento e coloca na primeira posição. Depois procura o segundo menor e coloca na segunda posição, e assim por diante.

Exemplo:

```text
Vetor: 5 3 8 1

Menor valor: 1
Troca com a primeira posição:

1 3 8 5
```

Complexidade:

```text
O(n²)
```

---

### 28. Selection Sort em C

```c
#include <stdio.h>

void selectionSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int menor = i;

        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }

        if (menor != i) {
            int temp = v[i];
            v[i] = v[menor];
            v[menor] = temp;
        }
    }
}

void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}

int main() {
    int v[] = {9, 4, 6, 2, 8};
    int n = 5;

    selectionSort(v, n);

    imprimir(v, n);

    return 0;
}
```

---

### 29. Funcionamento do Insertion Sort

O **Insertion Sort** constrói a ordenação aos poucos.

Ele pega um elemento e o insere na posição correta entre os elementos anteriores.

Exemplo:

```text
Vetor: 5 3 8 1

Pega o 3 e compara com 5:
3 5 8 1

Depois o 8 já está no lugar.
Depois pega o 1 e move para o início:
1 3 5 8
```

Complexidade média e pior caso:

```text
O(n²)
```

---

### 30. Insertion Sort em C

```c
#include <stdio.h>

void insertionSort(int v[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = chave;
    }
}

void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}

int main() {
    int v[] = {7, 3, 5, 1, 9};
    int n = 5;

    insertionSort(v, n);

    imprimir(v, n);

    return 0;
}
```

---

### 31. Comparação entre Bubble, Selection e Insertion

| Algoritmo      |                      Comparações |    Trocas | Melhor uso didático                         |
| -------------- | -------------------------------: | --------: | ------------------------------------------- |
| Bubble Sort    |                           Muitas |    Muitas | Fácil de entender                           |
| Selection Sort |                           Muitas |    Poucas | Quando queremos reduzir trocas              |
| Insertion Sort | Menos em vetores quase ordenados | Moderadas | Bom para listas pequenas ou quase ordenadas |

Resumo:

* Bubble Sort é simples, mas pouco eficiente.
* Selection Sort faz poucas trocas.
* Insertion Sort é bom quando os dados já estão quase ordenados.

---

### 32. Duas passagens do Bubble Sort

Usando o vetor:

```text
5 3 8 4 2 7 1 10 6 9
```

Primeira passagem:

```text
3 5 4 2 7 1 8 6 9 10
```

O maior valor, `10`, foi para o final.

Segunda passagem:

```text
3 4 2 5 1 7 6 8 9 10
```

Agora os dois maiores valores já estão próximos do final ordenado.

---

### 33. Ler 10 números, ordenar e exibir

```c
#include <stdio.h>

void bubbleSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    int v[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    bubbleSort(v, 10);

    printf("\nVetor ordenado:\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
```

---

### 34. Ordenar produtos pelo preço

```c
#include <stdio.h>

typedef struct {
    int codigo;
    char nome[50];
    float preco;
} Produto;

void ordenarPorPreco(Produto produtos[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int menor = i;

        for (int j = i + 1; j < n; j++) {
            if (produtos[j].preco < produtos[menor].preco) {
                menor = j;
            }
        }

        if (menor != i) {
            Produto temp = produtos[i];
            produtos[i] = produtos[menor];
            produtos[menor] = temp;
        }
    }
}

int main() {
    Produto produtos[3] = {
        {1, "Mouse", 50.0},
        {2, "Teclado", 120.0},
        {3, "Cabo USB", 25.0}
    };

    ordenarPorPreco(produtos, 3);

    for (int i = 0; i < 3; i++) {
        printf("%s - R$ %.2f\n", produtos[i].nome, produtos[i].preco);
    }

    return 0;
}
```

---

## Tema 3 — Pilhas e Filas

### 35. Conceito de pilha e LIFO

Uma **pilha** é uma estrutura de dados em que o último elemento inserido é o primeiro a sair.

Esse comportamento é chamado de **LIFO**:

```text
Last In, First Out
```

Ou seja:

```text
Último que entra, primeiro que sai.
```

Exemplo:

```text
Pilha de pratos.
```

O último prato colocado no topo é o primeiro a ser retirado.

---

### 36. Exemplos reais de pilha

Exemplos:

1. Pilha de pratos.
2. Botão “desfazer” em editores de texto.
3. Histórico de chamadas de funções em programação.
4. Navegação entre páginas usando botão “voltar”.
5. Avaliação de expressões matemáticas.

---

### 37, 38 e 39. Pilha usando vetor

Esse código inclui:

* `push`;
* `pop`;
* listar;
* verificar se está vazia;
* verificar se está cheia.

```c
#include <stdio.h>

#define MAX 5

typedef struct {
    int dados[MAX];
    int topo;
} Pilha;

void inicializar(Pilha *p) {
    p->topo = -1;
}

int estaVazia(Pilha *p) {
    return p->topo == -1;
}

int estaCheia(Pilha *p) {
    return p->topo == MAX - 1;
}

int push(Pilha *p, int valor) {
    if (estaCheia(p)) {
        return 0;
    }

    p->topo++;
    p->dados[p->topo] = valor;

    return 1;
}

int pop(Pilha *p, int *valor) {
    if (estaVazia(p)) {
        return 0;
    }

    *valor = p->dados[p->topo];
    p->topo--;

    return 1;
}

void listar(Pilha *p) {
    for (int i = p->topo; i >= 0; i--) {
        printf("%d\n", p->dados[i]);
    }
}

int main() {
    Pilha p;
    int valor;

    inicializar(&p);

    push(&p, 10);
    push(&p, 20);
    push(&p, 30);

    printf("Pilha:\n");
    listar(&p);

    if (pop(&p, &valor)) {
        printf("Removido: %d\n", valor);
    }

    printf("Pilha atual:\n");
    listar(&p);

    return 0;
}
```

---

### 40. Pilha usando lista encadeada

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

void push(No **topo, int valor) {
    No *novo = malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro de memoria.\n");
        exit(1);
    }

    novo->valor = valor;
    novo->proximo = *topo;
    *topo = novo;
}

int pop(No **topo, int *valor) {
    if (*topo == NULL) {
        return 0;
    }

    No *remover = *topo;
    *valor = remover->valor;
    *topo = remover->proximo;

    free(remover);

    return 1;
}

void listar(No *topo) {
    while (topo != NULL) {
        printf("%d\n", topo->valor);
        topo = topo->proximo;
    }
}

int main() {
    No *pilha = NULL;
    int valor;

    push(&pilha, 10);
    push(&pilha, 20);
    push(&pilha, 30);

    listar(pilha);

    if (pop(&pilha, &valor)) {
        printf("Removido: %d\n", valor);
    }

    return 0;
}
```

---

### 41. Inverter uma palavra usando pilha

```c
#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char dados[MAX];
    int topo;
} Pilha;

void inicializar(Pilha *p) {
    p->topo = -1;
}

void push(Pilha *p, char c) {
    if (p->topo < MAX - 1) {
        p->topo++;
        p->dados[p->topo] = c;
    }
}

char pop(Pilha *p) {
    if (p->topo >= 0) {
        char c = p->dados[p->topo];
        p->topo--;
        return c;
    }

    return '\0';
}

int main() {
    Pilha p;
    char palavra[MAX];

    inicializar(&p);

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; i < strlen(palavra); i++) {
        push(&p, palavra[i]);
    }

    printf("Palavra invertida: ");

    while (p.topo >= 0) {
        printf("%c", pop(&p));
    }

    return 0;
}
```

---

### 42. Conceito de fila e FIFO

Uma **fila** é uma estrutura em que o primeiro elemento inserido é o primeiro a sair.

Esse comportamento é chamado de **FIFO**:

```text
First In, First Out
```

Ou seja:

```text
Primeiro que entra, primeiro que sai.
```

Exemplo:

```text
Fila de banco.
```

A primeira pessoa que chega deve ser a primeira atendida.

---

### 43. Exemplos reais de fila

Exemplos:

1. Fila de banco.
2. Fila de impressão.
3. Fila de atendimento em suporte técnico.
4. Fila de processos no sistema operacional.
5. Fila de mensagens em aplicativos.

---

### 44. Fila usando vetor

```c
#include <stdio.h>

#define MAX 5

typedef struct {
    int dados[MAX];
    int inicio;
    int fim;
    int tamanho;
} Fila;

void inicializar(Fila *f) {
    f->inicio = 0;
    f->fim = -1;
    f->tamanho = 0;
}

int estaVazia(Fila *f) {
    return f->tamanho == 0;
}

int estaCheia(Fila *f) {
    return f->tamanho == MAX;
}

int inserir(Fila *f, int valor) {
    if (estaCheia(f)) {
        return 0;
    }

    f->fim++;
    f->dados[f->fim] = valor;
    f->tamanho++;

    return 1;
}

int remover(Fila *f, int *valor) {
    if (estaVazia(f)) {
        return 0;
    }

    *valor = f->dados[f->inicio];
    f->inicio++;
    f->tamanho--;

    return 1;
}

void listar(Fila *f) {
    for (int i = f->inicio; i <= f->fim; i++) {
        printf("%d ", f->dados[i]);
    }

    printf("\n");
}

int main() {
    Fila f;
    int valor;

    inicializar(&f);

    inserir(&f, 10);
    inserir(&f, 20);
    inserir(&f, 30);

    listar(&f);

    if (remover(&f, &valor)) {
        printf("Removido: %d\n", valor);
    }

    listar(&f);

    return 0;
}
```

Observação: essa fila é simples. Depois de muitas remoções, o início anda para frente. Para reaproveitar posições, usamos fila circular.

---

### 45. Fila circular usando vetor

```c
#include <stdio.h>

#define MAX 5

typedef struct {
    int dados[MAX];
    int inicio;
    int fim;
    int tamanho;
} FilaCircular;

void inicializar(FilaCircular *f) {
    f->inicio = 0;
    f->fim = 0;
    f->tamanho = 0;
}

int estaVazia(FilaCircular *f) {
    return f->tamanho == 0;
}

int estaCheia(FilaCircular *f) {
    return f->tamanho == MAX;
}

int inserir(FilaCircular *f, int valor) {
    if (estaCheia(f)) {
        return 0;
    }

    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % MAX;
    f->tamanho++;

    return 1;
}

int remover(FilaCircular *f, int *valor) {
    if (estaVazia(f)) {
        return 0;
    }

    *valor = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % MAX;
    f->tamanho--;

    return 1;
}

void listar(FilaCircular *f) {
    int pos = f->inicio;

    for (int i = 0; i < f->tamanho; i++) {
        printf("%d ", f->dados[pos]);
        pos = (pos + 1) % MAX;
    }

    printf("\n");
}

int main() {
    FilaCircular f;
    int valor;

    inicializar(&f);

    inserir(&f, 10);
    inserir(&f, 20);
    inserir(&f, 30);
    inserir(&f, 40);

    listar(&f);

    remover(&f, &valor);
    printf("Removido: %d\n", valor);

    inserir(&f, 50);

    listar(&f);

    return 0;
}
```

---

### 46. Fila usando lista encadeada

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct {
    No *inicio;
    No *fim;
} Fila;

void inicializar(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

void inserir(Fila *f, int valor) {
    No *novo = malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro de memoria.\n");
        exit(1);
    }

    novo->valor = valor;
    novo->proximo = NULL;

    if (f->fim == NULL) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->proximo = novo;
        f->fim = novo;
    }
}

int remover(Fila *f, int *valor) {
    if (f->inicio == NULL) {
        return 0;
    }

    No *remover = f->inicio;
    *valor = remover->valor;

    f->inicio = remover->proximo;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(remover);

    return 1;
}

void listar(Fila *f) {
    No *atual = f->inicio;

    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }

    printf("\n");
}

int main() {
    Fila f;
    int valor;

    inicializar(&f);

    inserir(&f, 10);
    inserir(&f, 20);
    inserir(&f, 30);

    listar(&f);

    remover(&f, &valor);
    printf("Removido: %d\n", valor);

    listar(&f);

    return 0;
}
```

---

### 47. Simulação de fila de atendimento bancário

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Cliente {
    char nome[50];
    struct Cliente *proximo;
} Cliente;

typedef struct {
    Cliente *inicio;
    Cliente *fim;
} Fila;

void inicializar(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

void adicionarCliente(Fila *f, char nome[]) {
    Cliente *novo = malloc(sizeof(Cliente));

    if (novo == NULL) {
        printf("Erro de memoria.\n");
        exit(1);
    }

    strcpy(novo->nome, nome);
    novo->proximo = NULL;

    if (f->fim == NULL) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->proximo = novo;
        f->fim = novo;
    }
}

int atenderCliente(Fila *f) {
    if (f->inicio == NULL) {
        printf("Fila vazia.\n");
        return 0;
    }

    Cliente *remover = f->inicio;

    printf("Atendendo cliente: %s\n", remover->nome);

    f->inicio = remover->proximo;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(remover);

    return 1;
}

void listarFila(Fila *f) {
    Cliente *atual = f->inicio;

    printf("Fila atual:\n");

    while (atual != NULL) {
        printf("- %s\n", atual->nome);
        atual = atual->proximo;
    }
}

int main() {
    Fila fila;

    inicializar(&fila);

    adicionarCliente(&fila, "Ana");
    adicionarCliente(&fila, "Bruno");
    adicionarCliente(&fila, "Carlos");

    listarFila(&fila);

    atenderCliente(&fila);

    listarFila(&fila);

    return 0;
}
```

---

### 48. Comparação entre pilha e fila

| Estrutura | Regra | Exemplo         |
| --------- | ----- | --------------- |
| Pilha     | LIFO  | Pilha de pratos |
| Fila      | FIFO  | Fila de banco   |

**Pilha:** usada quando o último elemento precisa ser o primeiro a sair.
Exemplo: desfazer ações.

**Fila:** usada quando o primeiro elemento precisa ser o primeiro a sair.
Exemplo: atendimento por ordem de chegada.

---

## Tema 4 — Algoritmos Avançados

### 49. Conceitos de árvore

Uma **árvore** é uma estrutura de dados não linear formada por nós.

Principais conceitos:

**Raiz:** nó principal da árvore.

```text
        10
```

Nesse exemplo, `10` é a raiz.

**Nó:** cada elemento da árvore.

```text
        10
       /  \
      5    20
```

`10`, `5` e `20` são nós.

**Folha:** nó que não possui filhos.

```text
5 e 20 são folhas.
```

**Grau:** quantidade de filhos de um nó.

```text
O nó 10 tem grau 2.
```

**Altura:** maior distância da raiz até uma folha.

Exemplo:

```text
        10
       /  \
      5    20
```

A altura pode ser considerada `1` ou `2`, dependendo da convenção usada pelo professor. Em muitas disciplinas introdutórias, considera-se altura como número de níveis.

---

### 50. Árvore binária de busca com inserir, buscar e imprimir em ordem

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *esquerda;
    struct No *direita;
} No;

No* criarNo(int valor) {
    No *novo = malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro de memoria.\n");
        exit(1);
    }

    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;

    return novo;
}

No* inserir(No *raiz, int valor) {
    if (raiz == NULL) {
        return criarNo(valor);
    }

    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->direita = inserir(raiz->direita, valor);
    }

    return raiz;
}

No* buscar(No *raiz, int valor) {
    if (raiz == NULL || raiz->valor == valor) {
        return raiz;
    }

    if (valor < raiz->valor) {
        return buscar(raiz->esquerda, valor);
    }

    return buscar(raiz->direita, valor);
}

void imprimirEmOrdem(No *raiz) {
    if (raiz != NULL) {
        imprimirEmOrdem(raiz->esquerda);
        printf("%d ", raiz->valor);
        imprimirEmOrdem(raiz->direita);
    }
}

int main() {
    No *raiz = NULL;

    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    printf("Valores em ordem crescente:\n");
    imprimirEmOrdem(raiz);

    printf("\n");

    int valorBuscado = 40;

    if (buscar(raiz, valorBuscado) != NULL) {
        printf("Valor %d encontrado.\n", valorBuscado);
    } else {
        printf("Valor %d nao encontrado.\n", valorBuscado);
    }

    return 0;
}
```

### 51. Por que a impressão em ordem de uma árvore binária de busca exibe os valores em ordem crescente?

Em uma **árvore binária de busca**, para cada nó:

* os valores menores ficam na subárvore esquerda;
* os valores maiores ficam na subárvore direita.

A impressão em ordem segue esta sequência:

```text
1. Visita a subárvore esquerda
2. Imprime o nó atual
3. Visita a subárvore direita
```

Exemplo:

```text
        50
       /  \
     30    70
    /  \   / \
  20   40 60 80
```

Percurso em ordem:

```text
20 30 40 50 60 70 80
```

Por isso, os valores aparecem em ordem crescente.

---

### 52. Função para contar a quantidade de nós de uma árvore binária

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *esquerda;
    struct No *direita;
} No;

int contarNos(No *raiz) {
    if (raiz == NULL) {
        return 0;
    }

    return 1 + contarNos(raiz->esquerda) + contarNos(raiz->direita);
}
```

A lógica é:

```text
Quantidade de nós = 1 nó atual + nós da esquerda + nós da direita
```

---

### 53. Encontrar o menor e o maior valor em uma árvore binária de busca

Em uma árvore binária de busca:

* o menor valor está no nó mais à esquerda;
* o maior valor está no nó mais à direita.

```c
int encontrarMenor(No *raiz) {
    if (raiz == NULL) {
        printf("Arvore vazia.\n");
        return -1;
    }

    while (raiz->esquerda != NULL) {
        raiz = raiz->esquerda;
    }

    return raiz->valor;
}

int encontrarMaior(No *raiz) {
    if (raiz == NULL) {
        printf("Arvore vazia.\n");
        return -1;
    }

    while (raiz->direita != NULL) {
        raiz = raiz->direita;
    }

    return raiz->valor;
}
```

---

### 54. O que é uma árvore AVL?

Uma **árvore AVL** é uma árvore binária de busca que se mantém balanceada automaticamente.

Ela tenta resolver o problema de árvores muito desbalanceadas.

Exemplo de árvore desbalanceada:

```text
10
  \
   20
     \
      30
        \
         40
```

Nesse caso, a árvore fica parecida com uma lista, e a busca perde eficiência.

A AVL controla o balanceamento usando a diferença de altura entre a subárvore esquerda e a direita.

Essa diferença é chamada de **fator de balanceamento**.

```text
Fator de balanceamento = altura da esquerda - altura da direita
```

Em uma AVL, esse fator deve ser:

```text
-1, 0 ou 1
```

---

### 55. Caso de rotação simples à direita em uma AVL

A rotação simples à direita acontece no caso **esquerda-esquerda**.

Exemplo de inserção:

```text
Inserir: 30, 20, 10
```

Antes da rotação:

```text
        30
       /
     20
    /
  10
```

A árvore ficou pesada para a esquerda.

Depois da rotação à direita:

```text
      20
     /  \
   10    30
```

O nó `20` sobe, o `30` desce para a direita e a árvore fica balanceada.

---

### 56. Caso de rotação simples à esquerda em uma AVL

A rotação simples à esquerda acontece no caso **direita-direita**.

Exemplo de inserção:

```text
Inserir: 10, 20, 30
```

Antes da rotação:

```text
  10
    \
     20
       \
        30
```

A árvore ficou pesada para a direita.

Depois da rotação à esquerda:

```text
      20
     /  \
   10    30
```

O nó `20` sobe, o `10` desce para a esquerda e a árvore fica balanceada.

---

### 57. O que é recursão e por que ela é usada em árvores?

**Recursão** é uma técnica em que uma função chama a si mesma para resolver um problema menor.

Exemplo simples:

```c
void contar(int n) {
    if (n == 0) {
        return;
    }

    printf("%d\n", n);
    contar(n - 1);
}
```

Ela é muito usada em árvores porque uma árvore é naturalmente dividida em subárvores.

Exemplo:

```text
        raiz
       /    \
 esquerda  direita
```

Ao trabalhar com uma árvore, normalmente fazemos:

```text
1. Processa o nó atual
2. Chama a função para a esquerda
3. Chama a função para a direita
```

Isso combina muito bem com recursão.

---

### 58. Função recursiva para calcular o fatorial

```c
#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * fatorial(n - 1);
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Fatorial de %d = %d\n", n, fatorial(n));

    return 0;
}
```

Exemplo:

```text
5! = 5 * 4 * 3 * 2 * 1 = 120
```

---

### 59. Função recursiva para somar os elementos de um vetor

```c
#include <stdio.h>

int somarVetor(int v[], int n) {
    if (n == 0) {
        return 0;
    }

    return v[n - 1] + somarVetor(v, n - 1);
}

int main() {
    int v[] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Soma = %d\n", somarVetor(v, n));

    return 0;
}
```

A lógica é:

```text
soma dos 5 elementos = último elemento + soma dos 4 anteriores
```

---

### 60. Conceito de busca binária

A **busca binária** é um algoritmo usado para procurar um valor em um vetor ordenado.

Ela funciona dividindo o vetor ao meio a cada passo.

Exemplo:

```text
Vetor: 10 20 30 40 50 60 70

Buscar: 50
```

Passos:

```text
Meio = 40
50 é maior que 40, então procura na metade direita.

Nova parte: 50 60 70
Meio = 60
50 é menor que 60, então procura na metade esquerda.

Nova parte: 50
Valor encontrado.
```

Condição importante:

```text
A busca binária só funciona corretamente se o vetor estiver ordenado.
```

---

### 61. Implementação da busca binária em C

```c
#include <stdio.h>

int buscaBinaria(int v[], int n, int valor) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (v[meio] == valor) {
            return meio;
        }

        if (valor < v[meio]) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    return -1;
}

int main() {
    int v[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int valor = 50;

    int posicao = buscaBinaria(v, n, valor);

    if (posicao != -1) {
        printf("Valor encontrado na posicao %d.\n", posicao);
    } else {
        printf("Valor nao encontrado.\n");
    }

    return 0;
}
```

---

### 62. Busca linear x busca binária

| Característica             | Busca linear                   | Busca binária          |
| -------------------------- | ------------------------------ | ---------------------- |
| Precisa de vetor ordenado? | Não                            | Sim                    |
| Estratégia                 | Verifica elemento por elemento | Divide o vetor ao meio |
| Melhor caso                | O valor está no início         | O valor está no meio   |
| Pior caso                  | Percorre todo o vetor          | Divide várias vezes    |
| Complexidade               | `O(n)`                         | `O(log n)`             |

Exemplo:

Em um vetor com 1.000 elementos:

* a busca linear pode precisar verificar até 1.000 posições;
* a busca binária precisa de aproximadamente 10 divisões.

---

### 63. Conceito de complexidade usando notação O

A **notação O** descreve como o tempo de execução ou o uso de memória de um algoritmo cresce conforme aumenta o tamanho da entrada.

Exemplo:

```text
O(1)
```

Tempo constante. O algoritmo demora praticamente o mesmo tempo independentemente do tamanho da entrada.

```text
O(n)
```

Tempo linear. Se a entrada dobra, o trabalho tende a dobrar.

```text
O(n²)
```

Tempo quadrático. Se a entrada dobra, o trabalho pode crescer muito mais.

Exemplo de `O(n)`:

```c
for (int i = 0; i < n; i++) {
    printf("%d\n", i);
}
```

Exemplo de `O(n²)`:

```c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        printf("%d %d\n", i, j);
    }
}
```

---

### 64. Complexidade dos casos apresentados

| Caso                   | Complexidade |
| ---------------------- | -----------: |
| Acesso direto em vetor |       `O(1)` |
| Busca linear           |       `O(n)` |
| Busca binária          |   `O(log n)` |
| Bubble Sort            |      `O(n²)` |

Explicação:

* **Acesso direto em vetor**

```c
v[5];
```

O acesso é direto pela posição, então é `O(1)`.

* **Busca linear**

```c
for (int i = 0; i < n; i++) {
    if (v[i] == valor) {
        return i;
    }
}
```

Pode precisar percorrer todo o vetor, então é `O(n)`.

* **Busca binária**

Divide o vetor ao meio a cada passo, então é `O(log n)`.

* **Bubble Sort**

Possui dois laços aninhados, então é `O(n²)`.

---

### 65. Funcionamento básico do Quick Sort

O **Quick Sort** é um algoritmo de ordenação baseado na ideia de divisão.

Ele escolhe um elemento chamado **pivô** e reorganiza o vetor:

* valores menores que o pivô ficam de um lado;
* valores maiores que o pivô ficam do outro lado.

Depois, o mesmo processo é aplicado nas duas partes.

Exemplo:

```text
Vetor: 8 3 5 1 9 2

Escolhendo pivô = 5
Menores: 3 1 2
Pivô: 5
Maiores: 8 9
```

Resultado parcial:

```text
3 1 2 | 5 | 8 9
```

Depois o algoritmo ordena:

```text
3 1 2
```

e

```text
8 9
```

Complexidade média:

```text
O(n log n)
```

Pior caso:

```text
O(n²)
```

---

### 66. Funcionamento básico do Merge Sort

O **Merge Sort** também usa a estratégia de divisão.

Ele divide o vetor em partes menores até chegar a vetores de um elemento. Depois, vai juntando essas partes de forma ordenada.

Exemplo:

```text
Vetor inicial:
8 3 5 1
```

Divisão:

```text
8 3    5 1
8  3   5  1
```

Junção ordenada:

```text
3 8    1 5
```

Junção final:

```text
1 3 5 8
```

Complexidade:

```text
O(n log n)
```

O Merge Sort é eficiente, mas costuma usar memória extra para fazer as junções.

---

### 67. Comparação entre Quick Sort, Merge Sort e Bubble Sort

| Algoritmo   | Complexidade média |    Pior caso | Observação                     |
| ----------- | -----------------: | -----------: | ------------------------------ |
| Bubble Sort |            `O(n²)` |      `O(n²)` | Simples, mas pouco eficiente   |
| Quick Sort  |       `O(n log n)` |      `O(n²)` | Muito eficiente na prática     |
| Merge Sort  |       `O(n log n)` | `O(n log n)` | Estável, mas usa memória extra |

Resumo:

* **Bubble Sort** é bom para fins didáticos, mas ruim para grandes volumes.
* **Quick Sort** costuma ser muito rápido na prática.
* **Merge Sort** tem desempenho previsível e é muito usado quando estabilidade é importante.

---

### 68. Programa para cadastrar números em uma árvore binária de busca e exibir em ordem crescente

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *esquerda;
    struct No *direita;
} No;

No* criarNo(int valor) {
    No *novo = malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;

    return novo;
}

No* inserir(No *raiz, int valor) {
    if (raiz == NULL) {
        return criarNo(valor);
    }

    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->direita = inserir(raiz->direita, valor);
    } else {
        printf("Valor repetido nao inserido: %d\n", valor);
    }

    return raiz;
}

void imprimirEmOrdem(No *raiz) {
    if (raiz != NULL) {
        imprimirEmOrdem(raiz->esquerda);
        printf("%d ", raiz->valor);
        imprimirEmOrdem(raiz->direita);
    }
}

void liberarArvore(No *raiz) {
    if (raiz != NULL) {
        liberarArvore(raiz->esquerda);
        liberarArvore(raiz->direita);
        free(raiz);
    }
}

int main() {
    No *raiz = NULL;
    int opcao;
    int valor;

    do {
        printf("\n\n--- ARVORE BINARIA DE BUSCA ---\n");
        printf("1 - Inserir numero\n");
        printf("2 - Exibir em ordem crescente\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                raiz = inserir(raiz, valor);
                break;

            case 2:
                printf("Valores em ordem crescente:\n");
                imprimirEmOrdem(raiz);
                printf("\n");
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida.\n");
                break;
        }

    } while (opcao != 0);

    liberarArvore(raiz);

    return 0;
}
```

Esse programa permite:

* cadastrar números;
* armazená-los em uma árvore binária de busca;
* exibir os valores em ordem crescente;
* liberar a memória ao final.

A impressão em ordem crescente funciona porque a árvore binária de busca mantém os menores valores à esquerda e os maiores à direita.
