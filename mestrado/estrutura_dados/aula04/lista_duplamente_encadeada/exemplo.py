class No:
    def __init__(self, chave=None):
        self.chave = chave
        self.ant = None
        self.post = None


class ListaDuplaOrdenada:
    def __init__(self):
        # nó cabeçalho
        self.ptlista = No()

        # lista circular inicialmente vazia
        self.ptlista.ant = self.ptlista
        self.ptlista.post = self.ptlista

    def inserir_ordenado(self, chave):
        novo = No(chave)

        # lista vazia
        if self.ptlista.post == self.ptlista:
            novo.ant = self.ptlista
            novo.post = self.ptlista
            self.ptlista.post = novo
            self.ptlista.ant = novo
            return

        # encontrar posição
        pos = self.busca_dup(chave)

        # se pos == ptlista, inserir no final
        if pos == self.ptlista:
            ultimo = self.ptlista.ant

            novo.ant = ultimo
            novo.post = self.ptlista
            ultimo.post = novo
            self.ptlista.ant = novo
        else:
            anterior = pos.ant

            novo.ant = anterior
            novo.post = pos
            anterior.post = novo
            pos.ant = novo

    def busca_dup(self, x):
        # lista vazia
        if self.ptlista.post == self.ptlista:
            return self.ptlista

        ultimo = self.ptlista.ant

        if x <= ultimo.chave:
            pont = self.ptlista.post
            while pont.chave < x:
                pont = pont.post
            return pont
        else:
            return self.ptlista

    def mostrar(self):
        atual = self.ptlista.post
        valores = []

        while atual != self.ptlista:
            valores.append(str(atual.chave))
            atual = atual.post

        print(" <-> ".join(valores))


# Exemplo de uso
lista = ListaDuplaOrdenada()

for valor in [10, 20, 30, 40]:
    lista.inserir_ordenado(valor)

lista.mostrar()

for x in [30, 25, 50]:
    resultado = lista.busca_dup(x)

    if resultado == lista.ptlista:
        print(f"Busca {x}: retornou ptlista (iria para o final)")
    else:
        print(f"Busca {x}: retornou nó com chave {resultado.chave}")
