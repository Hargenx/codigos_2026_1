def inserirFila(novo_valor, fila, topo, tamanho):
    if topo == tamanho:
        print("Fila cheia!")
    else:
        fila[topo] = novo_valor
        topo += 1

def removerFila(fila, topo, tamanho):
    if topo == 0:
        print("Fila vazia!")
        return -1
    else:
        valor = fila[topo - 1]
        topo -= 1
        return valor
    
def removerFila2(F, f, r):
    if f != 0:
        valor = F[f]
        if f == r:
            r = 0
        else:
            f = (f % r) + 1
        return valor
    else:
        print("Fila vazia!")

def inserirFila2(F, f, r, M, novo_valor):
    prox = (r % M) + 1
    if prox != f:
        r = prox
        F[r] = novo_valor
        if f == 0:
            f = 1
    else:
        print("Fila cheia!")

if __name__ == "__main__":
    fila = [0] * 10
    topo = 0
    valor = removerFila(fila, topo, 10)
    print("Valor removido:", valor)

    valor = removerFila(fila, topo, 10)
    print("Valor removido:", valor)

    valor = removerFila(fila, topo, 10)
    print("Valor removido:", valor)

    print(removerFila(fila, topo, 10))
    inserirFila(1, fila, topo, 10)
    inserirFila(2, fila, topo, 10)
    inserirFila(3, fila, topo, 10)
    inserirFila(4, fila, topo, 10)
    inserirFila(5, fila, topo, 10)
    print(removerFila2(fila, topo, 10))
    print(removerFila2(fila, topo, 10))