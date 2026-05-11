def get_coxinhas(*pedidos: int) -> list[str]:
    """Recebe quantidades de pedidos e formata para singular ou plural."""
    return [
        f"{pedido} {'coxinha' if pedido == 1 else 'coxinhas'}" 
        for pedido in pedidos
    ]

salgados = get_coxinhas(1, 4, 6, 8)
print(salgados)
# Saída: ['1 coxinha', '4 coxinhas', '6 coxinhas', '8 coxinhas']