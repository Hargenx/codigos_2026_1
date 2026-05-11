#include <iostream>

struct No {
  int chave;
  No *ant;
  No *post;

  No(int valor = 0) : chave(valor), ant(nullptr), post(nullptr) {}
};

class ListaDuplaOrdenada {
private:
  No *ptlista;

public:
  ListaDuplaOrdenada() {
    ptlista = new No();
    ptlista->ant = ptlista;
    ptlista->post = ptlista;
  }

  No *busca_dup(int x) {
    if (ptlista->post == ptlista) {
      return ptlista;
    }

    No *ultimo = ptlista->ant;

    if (x <= ultimo->chave) {
      No *pont = ptlista->post;
      while (pont->chave < x) {
        pont = pont->post;
      }
      return pont;
    } else {
      return ptlista;
    }
  }

  void inserir_ordenado(int chave) {
    No *novo = new No(chave);

    if (ptlista->post == ptlista) {
      novo->ant = ptlista;
      novo->post = ptlista;
      ptlista->post = novo;
      ptlista->ant = novo;
      return;
    }

    No *pos = busca_dup(chave);

    if (pos == ptlista) {
      No *ultimo = ptlista->ant;
      novo->ant = ultimo;
      novo->post = ptlista;
      ultimo->post = novo;
      ptlista->ant = novo;
    } else {
      No *anterior = pos->ant;
      novo->ant = anterior;
      novo->post = pos;
      anterior->post = novo;
      pos->ant = novo;
    }
  }

  void mostrar() const {
    No *atual = ptlista->post;

    while (atual != ptlista) {
      std::cout << atual->chave;
      if (atual->post != ptlista) {
        std::cout << " <-> ";
      }
      atual = atual->post;
    }
    std::cout << '\n';
  }

  No *cabecalho() const { return ptlista; }
};

int main() {
  ListaDuplaOrdenada lista;

  lista.inserir_ordenado(10);
  lista.inserir_ordenado(20);
  lista.inserir_ordenado(30);
  lista.inserir_ordenado(40);

  lista.mostrar();

  int buscas[] = {30, 25, 50};

  for (int x : buscas) {
    No *resultado = lista.busca_dup(x);

    if (resultado == lista.cabecalho()) {
      std::cout << "Busca " << x << ": retornou ptlista (iria para o final)\n";
    } else {
      std::cout << "Busca " << x << ": retornou nó com chave "
                << resultado->chave << '\n';
    }
  }

  return 0;
}