from pessoa import Pessoa

class Aluno(Pessoa):
    def __init__(self, nome, idade, nota):
        super().__init__(nome, idade)
        self.nota = nota

    def falar(self):
        print(f"Olá {self.nome}, você tem {self.nota} na sua nota")