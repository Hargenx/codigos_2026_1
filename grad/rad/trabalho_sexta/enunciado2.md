# Trabalho — Python, RAD e Construção de Aplicações

**Valor:** 5,0 pontos
**Formato:** individual e manuscrito
**Tipo:** discursivo
**Orientação:** não é necessário escrever códigos completos. O foco é explicar decisões, analisar situações e propor soluções.

---

## Situação-problema

Uma biblioteca comunitária deseja informatizar parte do seu funcionamento. Atualmente, o controle de livros, leitores e empréstimos é feito em cadernos.

A biblioteca deseja criar uma aplicação simples em Python para:

* registrar livros disponíveis;
* cadastrar leitores;
* registrar empréstimos e devoluções;
* consultar livros por título ou autor;
* guardar os dados para uso futuro;
* permitir que voluntários usem o sistema com facilidade.

Como a biblioteca ainda não sabe exatamente todas as funcionalidades que deseja, a equipe decidiu construir o sistema aos poucos, usando protótipos e ouvindo os usuários durante o processo.

---

## Questão 1 — Escolha da abordagem de desenvolvimento

* **Valor: 1,0 ponto**

A equipe poderia seguir dois caminhos:

**Caminho A:** tentar planejar todo o sistema antes de começar a programar.
**Caminho B:** criar uma versão simples, testar com os usuários e melhorar aos poucos.

Explique qual dos dois caminhos se aproxima mais da ideia de **RAD** e justifique sua resposta.

Na sua resposta, comente:

* por que o uso de protótipos pode ajudar;
* qual é a importância do feedback dos usuários;
* por que essa abordagem pode ser útil quando os requisitos ainda não estão totalmente claros.

---

## Questão 2 — Análise de uma solução com arquivos

* **Valor: 1,0 ponto**

Um aluno sugeriu salvar os dados do sistema em três arquivos:

* `livros.csv`;
* `leitores.csv`;
* `emprestimos.csv`.

Explique se essa solução pode funcionar em uma primeira versão do sistema.

Na sua resposta, analise:

* que tipo de informação poderia ficar em cada arquivo;
* uma vantagem dessa solução inicial;
* um problema que poderia ocorrer ao controlar empréstimos usando apenas arquivos;
* em que momento seria recomendável trocar os arquivos por um banco de dados.

---

## Questão 3 — Organização dos dados em banco de dados

* **Valor: 1,0 ponto**

Depois de alguns testes, a equipe decidiu usar SQLite.

Proponha uma organização simples para o banco de dados da biblioteca.

Sua resposta deve indicar pelo menos **três tabelas** que poderiam existir no sistema e explicar a função de cada uma.

Exemplo de tabelas possíveis:

* livros;
* leitores;
* empréstimos;
* usuários;
* categorias.

Também explique por que o banco de dados facilita consultas como:

* “quais livros estão emprestados?”;
* “quem está com determinado livro?”;
* “quais livros estão disponíveis?”.

---

## Questão 4 — Avaliação da interface gráfica

* **Valor: 1,0 ponto**

Imagine que a primeira tela criada pela equipe possui apenas um menu no terminal, com opções digitadas pelo teclado:

```text
1 - Cadastrar livro
2 - Cadastrar leitor
3 - Registrar empréstimo
4 - Registrar devolução
5 - Sair
```

Explique por que essa solução pode ser suficiente para um protótipo inicial, mas limitada para usuários sem conhecimento técnico.

Depois, proponha como essa mesma funcionalidade poderia aparecer em uma **interface gráfica**.

Na sua resposta, cite exemplos de:

* botões;
* campos de texto;
* listas ou tabelas;
* mensagens para orientar o usuário.

---

## Questão 5 — Aplicação prática do RAD no projeto

* **Valor: 1,0 ponto**

A equipe decidiu criar o sistema em três versões:

**Versão 1:** cadastro de livros e leitores usando arquivos.
**Versão 2:** controle de empréstimos usando SQLite.
**Versão 3:** interface gráfica para facilitar o uso pelos voluntários.

Explique por que essa divisão em versões combina com a abordagem RAD.

Na sua resposta, comente:

* o que poderia ser testado em cada versão;
* que tipo de feedback os usuários poderiam dar;
* como a equipe poderia melhorar o sistema a cada nova versão;
* por que entregar pequenas versões pode ser melhor do que esperar o sistema completo ficar pronto.

## Observação para os alunos

O objetivo não é decorar comandos ou escrever programas completos. As respostas devem demonstrar compreensão dos conceitos e capacidade de aplicá-los em uma situação real.

Pequenos trechos, esquemas ou exemplos podem ser usados, mas a resposta principal deve ser explicativa.
