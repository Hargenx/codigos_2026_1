from typing import Generator


def get_joelhos(*pedidos: int) -> Generator[str, None, None]:
    """Gera a string formatada de cada pedido de joelho, um por vez."""
    for pedido in pedidos:
        yield f"{pedido} joelho{'s' if pedido != 1 else ''}"


# 1. Inicializamos o gerador
gerador = get_joelhos(1, 4, 6, 8)

# 2. Usando next() pegamos apenas o PRIMEIRO item gerado
primeiro_salgado = next(gerador)
print(f"Apenas o primeiro: {primeiro_salgado}")

# 3. Podemos converter o resto do gerador em uma lista (ou usar um loop for)
resto_dos_salgados = list(gerador)
print(f"O restante dos pedidos: {resto_dos_salgados}")
