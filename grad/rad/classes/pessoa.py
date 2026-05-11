from abc import ABC, abstractmethod

class Pessoa(ABC):
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    @abstractmethod
    def falar(self):
        pass

    def __str__(self):
        return f"{self.nome} tem {self.idade} anos"

    def __repr__(self):
        return f"{self.nome} tem {self.idade} anos"