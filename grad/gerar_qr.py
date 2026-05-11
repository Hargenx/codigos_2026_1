import qrcode

def gerar_qrcode(texto: str, nome_arquivo: str = "qrcode2.png") -> None:
    qr = qrcode.QRCode(
        version=1,  # controla o tamanho do QR Code
        error_correction=qrcode.constants.ERROR_CORRECT_M,
        box_size=10,  # tamanho de cada quadradinho
        border=4      # espessura da borda
    )

    qr.add_data(texto)
    qr.make(fit=True)

    imagem = qr.make_image(fill_color="black", back_color="white")
    imagem.save(nome_arquivo)

    print(f"QR Code salvo como: {nome_arquivo}")


if __name__ == "__main__":
    conteudo = input("Digite o texto ou link para gerar o QR Code: ")
    gerar_qrcode(conteudo)