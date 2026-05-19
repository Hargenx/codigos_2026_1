#include <iostream>
#include <algorithm>

struct No {
    int chave;
    int altura;
    No* esquerda;
    No* direita;
};

int altura(No* no) {
    if (no == nullptr) {
        return 0;
    }

    return no->altura;
}

int fatorBalanceamento(No* no) {
    if (no == nullptr) {
        return 0;
    }

    return altura(no->esquerda) - altura(no->direita);
}

No* criarNo(int chave) {
    No* novo = new No;

    novo->chave = chave;
    novo->altura = 1;
    novo->esquerda = nullptr;
    novo->direita = nullptr;

    return novo;
}

No* rotacaoDireita(No* y) {
    No* x = y->esquerda;
    No* subArvore = x->direita;

    x->direita = y;
    y->esquerda = subArvore;

    y->altura = 1 + std::max(altura(y->esquerda), altura(y->direita));
    x->altura = 1 + std::max(altura(x->esquerda), altura(x->direita));

    return x;
}

No* rotacaoEsquerda(No* x) {
    No* y = x->direita;
    No* subArvore = y->esquerda;

    y->esquerda = x;
    x->direita = subArvore;

    x->altura = 1 + std::max(altura(x->esquerda), altura(x->direita));
    y->altura = 1 + std::max(altura(y->esquerda), altura(y->direita));

    return y;
}

No* inserir(No* raiz, int chave) {
    if (raiz == nullptr) {
        return criarNo(chave);
    }

    if (chave < raiz->chave) {
        raiz->esquerda = inserir(raiz->esquerda, chave);
    } else if (chave > raiz->chave) {
        raiz->direita = inserir(raiz->direita, chave);
    } else {
        return raiz;
    }

    raiz->altura = 1 + std::max(altura(raiz->esquerda), altura(raiz->direita));

    int balanceamento = fatorBalanceamento(raiz);

    // Caso 1: esquerda-esquerda
    if (balanceamento > 1 && chave < raiz->esquerda->chave) {
        return rotacaoDireita(raiz);
    }

    // Caso 2: direita-direita
    if (balanceamento < -1 && chave > raiz->direita->chave) {
        return rotacaoEsquerda(raiz);
    }

    // Caso 3: esquerda-direita
    if (balanceamento > 1 && chave > raiz->esquerda->chave) {
        raiz->esquerda = rotacaoEsquerda(raiz->esquerda);
        return rotacaoDireita(raiz);
    }

    // Caso 4: direita-esquerda
    if (balanceamento < -1 && chave < raiz->direita->chave) {
        raiz->direita = rotacaoDireita(raiz->direita);
        return rotacaoEsquerda(raiz);
    }

    return raiz;
}

void emOrdem(No* raiz) {
    if (raiz != nullptr) {
        emOrdem(raiz->esquerda);
        std::cout << raiz->chave << " ";
        emOrdem(raiz->direita);
    }
}

void imprimirArvore(No* raiz, int espaco = 0) {
    if (raiz == nullptr) {
        return;
    }

    espaco += 5;

    imprimirArvore(raiz->direita, espaco);

    std::cout << "\n";
    for (int i = 5; i < espaco; i++) {
        std::cout << " ";
    }

    std::cout << raiz->chave << "\n";

    imprimirArvore(raiz->esquerda, espaco);
}

void liberarArvore(No* raiz) {
    if (raiz != nullptr) {
        liberarArvore(raiz->esquerda);
        liberarArvore(raiz->direita);
        delete raiz;
    }
}

int main() {
    No* raiz = nullptr;

    int valores[] = {30, 20, 10, 40, 50, 25};

    for (int valor : valores) {
        std::cout << "\nInserindo: " << valor << "\n";
        raiz = inserir(raiz, valor);

        std::cout << "Arvore atual:\n";
        imprimirArvore(raiz);
        std::cout << "\n-------------------------\n";
    }

    std::cout << "\nPercurso em ordem:\n";
    emOrdem(raiz);

    std::cout << "\n";

    liberarArvore(raiz);

    return 0;
}