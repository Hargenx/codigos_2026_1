import re


def ocultar_emails(texto: str) -> str:
    """
    Substitui endereços de e-mail em um texto pela tag [email oculto].
    Utiliza um padrão Regex mais abrangente para e-mails reais.
    """
    # Padrão melhorado: aceita pontos, traços e sinais de mais antes do @,
    # e hífens ou domínios compostos (.com.br) depois do @.
    padrao = r"[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}"

    return re.sub(padrao, "[email oculto]", texto)


if __name__ == "__main__":
    texto_original = (
        "Meus e-mails são joao_123@email.com e ana.silva@empresa-nova.com.br."
    )

    texto_seguro = ocultar_emails(texto_original)

    print("--- Antes ---")
    print(texto_original)
    print("\n--- Depois ---")
    print(texto_seguro)
