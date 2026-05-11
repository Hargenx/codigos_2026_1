import re


def validar_email(email: str) -> bool:
    """
    Verifica se a string fornecida é um endereço de e-mail válido.
    Retorna True se for válido, ou False caso contrário.
    """
    padrao = r"^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$"

    # Em vez de if/else, retornamos diretamente o resultado booleano da verificação
    return bool(re.match(padrao, email))


if __name__ == "__main__":
    exemplos_emails = ["usuario@email.com", "outro@email.co.uk", "invalido@.com", "sem_arroba.com", "joao.silva@empresa.com.br"]

    print("--- Verificação de E-mails ---")
    for email in exemplos_emails:
        if validar_email(email):
            print(f"[VÁLIDO]   {email}")
        else:
            print(f"[INVÁLIDO] {email}")
