try:
    numero = int(input("Entre o numero: "))
    resultado = 10 / numero
except ZeroDivisionError:
    print("Error: Não pode dividir por zero!")
except ValueError:
    print("Error: Entrada invalida. por favor entre um numero.")
