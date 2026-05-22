# Gabarito — Trabalho Discursivo

## Questão 1 — RAD e desenvolvimento rápido de aplicações

* **Valor: 1,0 ponto**

Espera-se que o aluno explique que **RAD — Rapid Application Development** é uma abordagem de desenvolvimento que prioriza a criação rápida de versões funcionais ou protótipos do sistema, permitindo testes, feedback dos usuários e melhorias contínuas.

Uma resposta completa deve mencionar que:

* o RAD permite criar rapidamente uma primeira versão do sistema;
* os usuários participam avaliando o protótipo;
* o sistema pode ser melhorado aos poucos;
* não é necessário esperar o sistema estar totalmente pronto para começar os testes;
* essa abordagem é adequada para a escola porque os requisitos podem mudar conforme os funcionários usam o sistema.

**Exemplo de resposta esperada:**

O RAD é uma metodologia de desenvolvimento rápido de aplicações baseada na criação de protótipos e melhorias incrementais. No caso da escola, ele é adequado porque a equipe pode criar uma primeira versão simples para cadastrar e listar alunos, apresentar aos funcionários, receber sugestões e melhorar o sistema aos poucos. Isso evita desenvolver tudo de uma vez sem saber se atende bem às necessidades reais dos usuários.

---

## Questão 2 — Manipulação de dados em arquivos

* **Valor: 1,0 ponto**

Espera-se que o aluno explique que arquivos podem ser usados para salvar os dados dos alunos de forma permanente, mesmo após o programa ser encerrado.

Uma resposta completa deve mencionar:

* dados que poderiam ser salvos: nome, matrícula, telefone, e-mail, curso;
* vantagem: simplicidade, facilidade de implementação, não exigir banco de dados;
* limitação: dificuldade para pesquisar, alterar, excluir e controlar muitos registros;
* escolha justificada entre `.txt`, `.csv` ou `.json`.

**Exemplo de resposta esperada:**

A manipulação de arquivos poderia ser usada para salvar os dados dos alunos, como nome, matrícula, telefone e curso. Uma vantagem é que arquivos são simples de usar e podem ser suficientes para um sistema pequeno. Porém, quando o número de alunos aumenta, pode ser difícil pesquisar, alterar ou excluir registros. Eu escolheria o formato `.csv`, pois ele organiza os dados em linhas e colunas, sendo parecido com uma planilha e adequado para dados tabulares.

Também seria aceitável o aluno escolher `.json`, desde que justifique que ele organiza melhor dados estruturados.

---

## Questão 3 — Python com banco de dados

* **Valor: 1,0 ponto**

Espera-se que o aluno compreenda que o banco de dados organiza melhor as informações e permite operações mais eficientes.

Uma resposta completa deve mencionar:

* SQLite como banco de dados leve, local e integrado ao Python;
* tabela de alunos com campos como id, nome, matrícula, telefone, e-mail e curso;
* operações de inserir, consultar, alterar e excluir;
* melhor organização, integridade e segurança em comparação com arquivos simples.

**Exemplo de resposta esperada:**

O banco de dados é uma solução melhor porque permite armazenar os dados de forma mais organizada. O SQLite pode ser usado em Python para criar tabelas, como uma tabela de alunos com id, nome, matrícula, telefone e curso. Com o banco, é mais fácil inserir novos alunos, consultar por matrícula, alterar dados e excluir registros. Além disso, o banco reduz problemas de desorganização e facilita o crescimento do sistema.

---

## Questão 4 — Interface gráfica com Python

* **Valor: 1,0 ponto**

Espera-se que o aluno explique que a interface gráfica torna o sistema mais acessível para usuários que não sabem programar.

Uma resposta completa deve mencionar:

* a interface facilita o uso por meio de janelas, botões e campos;
* exemplos: campo para nome, botão cadastrar, botão buscar, tabela de alunos;
* diferença entre terminal e interface gráfica;
* cuidado com simplicidade, clareza e mensagens de erro amigáveis.

**Exemplo de resposta esperada:**

A interface gráfica é importante porque permite que funcionários usem o sistema sem precisar digitar comandos no terminal. A tela poderia ter campos para nome, matrícula e telefone, além de botões como cadastrar, buscar e excluir. Diferente do terminal, a interface gráfica é mais visual e intuitiva. Um cuidado importante é criar telas simples, com botões claros e mensagens que ajudem o usuário quando ocorrer algum erro.

---

## Questão 5 — Aplicando RAD no projeto completo

* **Valor: 1,0 ponto**

Espera-se que o aluno organize uma proposta de desenvolvimento em etapas, relacionando arquivos, banco de dados, interface gráfica e RAD.

Uma resposta completa deve apresentar pelo menos quatro etapas coerentes, como:

1. levantar as necessidades da escola;
2. criar um protótipo simples;
3. testar com os funcionários;
4. salvar dados inicialmente em arquivo;
5. migrar para banco de dados;
6. criar interface gráfica;
7. entregar uma versão funcional;
8. coletar feedback e melhorar o sistema.

**Exemplo de resposta esperada:**

Primeiro, a equipe deve conversar com os funcionários da escola para entender quais dados precisam ser cadastrados. Depois, pode criar um protótipo simples em Python para cadastrar e listar alunos. Em seguida, esse protótipo deve ser testado pelos usuários, que podem sugerir melhorias. Inicialmente, os dados podem ser salvos em arquivos, mas depois o sistema pode evoluir para usar SQLite. Na sequência, pode ser criada uma interface gráfica com botões e campos de texto. Essa forma de trabalho combina com RAD porque o sistema é construído em etapas, com testes, feedback e melhorias constantes.

---

## Distribuição sugerida da pontuação

| Questão   | O que avaliar                                              | Pontuação |
| --------- | ---------------------------------------------------------- | --------: |
| 1         | Conceito de RAD e aplicação ao problema                    |       1,0 |
| 2         | Uso de arquivos, vantagens, limitações e formato escolhido |       1,0 |
| 3         | Uso de banco de dados com Python/SQLite                    |       1,0 |
| 4         | Importância da interface gráfica                           |       1,0 |
| 5         | Proposta de desenvolvimento por etapas usando RAD          |       1,0 |
| **Total** |                                                            |   **5,0** |

---

## Sugestão de correção parcial por questão

Para cada questão de 1,0 ponto:

| Desempenho                                                | Pontuação sugerida |
| --------------------------------------------------------- | -----------------: |
| Resposta completa, clara e aplicada ao problema           |                1,0 |
| Resposta correta, mas pouco desenvolvida                  |                0,7 |
| Resposta parcialmente correta, com conceitos superficiais |                0,5 |
| Resposta muito incompleta ou confusa                      |                0,2 |
| Resposta em branco ou totalmente fora do tema             |                0,0 |
