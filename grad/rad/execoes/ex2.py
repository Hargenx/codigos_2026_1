def define_idade(idade):
    if idade < 0:
        # Ativa um erro manualmente.
        raise ValueError("Idade não pode ser negativa.")
    return idade
