import re

def extrair_telefone_eua(texto: str) -> str | None:
    """
    Busca um número de telefone no formato (XXX) XXX-XXXX dentro de um texto.
    Retorna a string do número encontrado ou None caso não encontre.
    """
    padrao = r'\(\d{3}\) \d{3}-\d{4}'
    resultado = re.search(padrao, texto)
    
    if resultado:
        return resultado.group()
    
    return None

if __name__ == "__main__":
    texto_exemplo = "O número de telefone de Raphael é (123) 456-7890."
    
    # Utilizando o Walrus Operator (:=) para atribuir e verificar ao mesmo tempo
    if numero_encontrado := extrair_telefone_eua(texto_exemplo):
        print(f"Número de telefone encontrado: {numero_encontrado}")
    else:
        print("Número de telefone não encontrado.")