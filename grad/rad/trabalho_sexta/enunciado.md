# Trabalho — Desenvolvimento Rápido de Aplicações com Python

**Valor:** 5,0 pontos
**Formato:** individual e manuscrito
**Tema geral:** RAD, arquivos, banco de dados, interface gráfica e aplicação prática em Python.

## Situação-problema

Uma pequena escola de cursos livres deseja criar um sistema simples para controlar seus alunos e inscrições em cursos.

Atualmente, os dados são anotados em planilhas e arquivos soltos, o que causa problemas como perda de informações, dificuldade de atualização e demora na busca por alunos cadastrados.

A escola deseja um sistema simples, feito em Python, que permita:

* cadastrar alunos;
* listar alunos cadastrados;
* salvar os dados de forma permanente;
* consultar alunos pelo nome ou matrícula;
* futuramente permitir inscrição em cursos;
* possuir uma interface gráfica simples para facilitar o uso por funcionários sem conhecimento técnico.

A equipe decidiu usar uma abordagem de **RAD — Rapid Application Development**, criando protótipos rápidos, testando com os usuários e melhorando o sistema aos poucos.

---

## Questão 1 — RAD e desenvolvimento rápido de aplicações

* **Valor: 1,0 ponto**

Explique, com suas palavras, o que é RAD e por que essa abordagem pode ser adequada para o sistema da escola descrito na situação-problema.

Na sua resposta, comente pelo menos três aspectos, como:

* prototipação;
* participação do usuário;
* desenvolvimento incremental;
* rapidez na entrega;
* ajustes durante o processo.

---

## Questão 2 — Manipulação de dados em arquivos

* **Valor: 1,0 ponto**

Antes de usar banco de dados, a equipe pensou em salvar os alunos em um arquivo `.txt`, `.csv` ou `.json`.

Explique como a manipulação de arquivos poderia ser usada nesse sistema.

Na sua resposta, comente:

* que tipo de informação poderia ser salva;
* uma vantagem de usar arquivos;
* uma limitação ou problema de usar arquivos quando o sistema começa a crescer;
* qual formato você escolheria entre `.txt`, `.csv` ou `.json`, justificando sua escolha.

---

## Questão 3 — Python com banco de dados

* **Valor: 1,0 ponto**

Depois de alguns testes, a equipe percebeu que usar apenas arquivos poderia dificultar buscas, alterações e organização dos dados. Por isso, decidiu usar um banco de dados SQLite com Python.

Explique por que o banco de dados pode ser uma solução melhor do que arquivos nesse caso.

Na sua resposta, comente:

* o papel do SQLite;
* exemplos de dados que poderiam estar em uma tabela de alunos;
* uma vantagem de usar comandos como inserir, consultar, alterar e excluir registros;
* por que o banco de dados ajuda na organização e segurança dos dados.

---

## Questão 4 — Interface gráfica com Python

* **Valor: 1,0 ponto**

O sistema será usado por funcionários da escola que não sabem programar. Por isso, a equipe decidiu criar uma interface gráfica simples usando Python.

Explique a importância da interface gráfica nesse sistema.

Na sua resposta, comente:

* como uma interface gráfica facilita o uso do sistema;
* exemplos de elementos que poderiam aparecer na tela, como botões, campos de texto, tabelas ou mensagens;
* a diferença entre usar o sistema pelo terminal e usar uma janela gráfica;
* um cuidado importante ao criar uma interface para usuários iniciantes.

---

## Questão 5 — Aplicando RAD no projeto completo

* **Valor: 1,0 ponto**

Imagine que você faz parte da equipe responsável por desenvolver esse sistema usando RAD.

Descreva uma proposta de desenvolvimento em etapas para esse projeto.

Sua resposta deve apresentar pelo menos quatro etapas, por exemplo:

1. levantamento inicial das necessidades da escola;
2. criação de um protótipo simples;
3. teste com os usuários;
4. melhoria do sistema;
5. troca de arquivos por banco de dados;
6. criação da interface gráfica;
7. entrega de uma versão funcional;
8. coleta de feedback para uma próxima versão.

Explique também por que essa forma de desenvolver combina com a ideia de RAD.

## Observação

Não é necessário escrever códigos completos. O objetivo do trabalho é avaliar se você compreendeu os conceitos e consegue aplicá-los em uma situação real de desenvolvimento de software. Trechos curtos de exemplo podem ser usados, mas a resposta principal deve ser explicativa.
