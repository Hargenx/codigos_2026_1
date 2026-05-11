lista = [2, 7, 21, 10, 13, 40]

def inserirEncadeada(novo_valor, lista, topo, tamanho):
    if topo == tamanho:
        print("Lista cheia!")
    else:
        topo += 1
        lista[topo] = novo_valor

def removerEncadeada(lista, topo, tamanho):
    if topo == 0:
        print("Lista vazia!")
        return -1
    else:
        valor = lista[topo]
        topo -= 1
        return valor

def removerEncadeada2(L, t, M):
    if t != 0:
        valor = L[t]
        if t == M:
            t = 0
        else:
            t = (t % M) + 1
        return valor
    else:
        print("Lista vazia!")

def inserirEncadeada2(L, t, M, novo_valor):
    prox = (t % M) + 1
    if prox != t:
        t = prox
        L[t] = novo_valor
    else:
        print("Lista cheia!")

if __name__ == "__main__":
    print("Lista inicial:", lista)
    lista = [0] * 10
    print("Lista inicializada:", lista)
    topo = 0
    valor = removerEncadeada(lista, topo, 10)
    print("Valor removido:", valor)

    valor = removerEncadeada(lista, topo, 10)
    print("Valor removido:", valor)

    valor = removerEncadeada(lista, topo, 10)
    print("Valor removido:", valor)

    print(removerEncadeada(lista, topo, 10))
    inserirEncadeada(1, lista, topo, 10)
    inserirEncadeada(2, lista, topo, 10)
    inserirEncadeada(3, lista, topo, 10)
    inserirEncadeada(4, lista, topo, 10)
    inserirEncadeada(5, lista, topo, 10)
    print(removerEncadeada2(lista, topo, 10))
    print(removerEncadeada2(lista, topo, 10))