# Gabarito — Trabalho Discursivo

## Python, RAD e Construção de Aplicações

**Valor total:** 5,0 pontos

---

## Questão 1 — Escolha da abordagem de desenvolvimento

* **Valor: 1,0 ponto**

### Resposta esperada

O caminho que mais se aproxima do RAD é o **Caminho B**, pois o RAD valoriza a criação rápida de versões iniciais ou protótipos, o teste com usuários e a melhoria contínua do sistema.

O aluno deve explicar que, como a biblioteca ainda não sabe exatamente todas as funcionalidades necessárias, faz sentido criar uma versão simples, apresentar aos usuários, receber sugestões e ajustar o sistema ao longo do desenvolvimento.

### Pontos que devem aparecer na resposta

* O RAD trabalha com protótipos e entregas rápidas.
* O feedback dos usuários ajuda a corrigir e melhorar o sistema.
* A abordagem é útil quando os requisitos ainda não estão totalmente definidos.
* O sistema pode evoluir em etapas, sem esperar tudo ficar pronto de uma vez.

### Exemplo de resposta adequada

O Caminho B se aproxima mais do RAD, pois propõe criar uma versão simples do sistema, testar com os usuários e melhorar aos poucos. Essa abordagem é adequada para a biblioteca porque os voluntários podem experimentar o protótipo e indicar o que está bom ou o que precisa mudar. Como os requisitos ainda não estão totalmente claros, o feedback dos usuários ajuda a equipe a construir um sistema mais útil e adequado à realidade da biblioteca.

### Distribuição sugerida

| Critério                                 | Pontuação |
| ---------------------------------------- | --------: |
| Identifica corretamente o Caminho B      |       0,2 |
| Explica a relação com protótipos         |       0,3 |
| Comenta a importância do feedback        |       0,3 |
| Relaciona com requisitos pouco definidos |       0,2 |
| **Total**                                |   **1,0** |

---

## Questão 2 — Análise de uma solução com arquivos

* **Valor: 1,0 ponto**

### 2Resposta esperada

O aluno deve explicar que a solução com arquivos pode funcionar em uma primeira versão simples do sistema, especialmente para cadastro e consulta básica. Porém, deve reconhecer que controlar empréstimos apenas com arquivos pode gerar dificuldades conforme o sistema cresce.

### 2Pontos que devem aparecer na resposta

* `livros.csv` poderia guardar título, autor, código, ano, categoria e disponibilidade.
* `leitores.csv` poderia guardar nome, telefone, e-mail, matrícula ou código do leitor.
* `emprestimos.csv` poderia guardar código do livro, código do leitor, data do empréstimo, data prevista de devolução e status.
* Uma vantagem é a simplicidade da implementação.
* Uma limitação é a dificuldade para alterar, consultar, manter consistência e evitar duplicidade.
* A troca para banco de dados seria recomendável quando houver muitos registros, necessidade de buscas frequentes, controle de histórico e maior segurança.

### 2Exemplo de resposta adequada

A solução com arquivos pode funcionar em uma primeira versão. O arquivo `livros.csv` poderia guardar dados como código, título, autor e disponibilidade. O arquivo `leitores.csv` poderia guardar nome, contato e identificação do leitor. Já o arquivo `emprestimos.csv` poderia registrar qual livro foi emprestado, para quem, em qual data e se já foi devolvido. A vantagem é que arquivos CSV são simples e fáceis de entender. Porém, quando o sistema crescer, pode ficar difícil alterar dados, controlar devoluções e garantir que um mesmo livro não seja emprestado duas vezes. Nesse momento, seria melhor usar um banco de dados.

### 2Distribuição sugerida

| Critério                                 | Pontuação |
| ---------------------------------------- | --------: |
| Explica dados possíveis em cada arquivo  |       0,3 |
| Aponta uma vantagem dos arquivos         |       0,2 |
| Aponta uma limitação relevante           |       0,3 |
| Indica quando migrar para banco de dados |       0,2 |
| **Total**                                |   **1,0** |

---

## Questão 3 — Organização dos dados em banco de dados

* **Valor: 1,0 ponto**

### 3Resposta esperada

O aluno deve propor uma organização simples e coerente para o banco de dados, apresentando pelo menos três tabelas. A resposta deve demonstrar que ele entende que o banco organiza melhor os dados e facilita consultas.

### Tabelas possíveis

Uma resposta completa poderia apresentar:

| Tabela        | Função                                                                                                |
| ------------- | ----------------------------------------------------------------------------------------------------- |
| `livros`      | Armazenar informações dos livros, como código, título, autor, categoria e disponibilidade.            |
| `leitores`    | Armazenar dados das pessoas cadastradas, como código, nome, telefone e e-mail.                        |
| `emprestimos` | Registrar os empréstimos, relacionando livro, leitor, data de empréstimo, data de devolução e status. |

Também poderiam ser aceitas tabelas como `usuarios`, `categorias`, `funcionarios` ou `historico_emprestimos`, desde que justificadas corretamente.

### 3Exemplo de resposta adequada

O banco de dados poderia ter uma tabela `livros`, com informações como código, título, autor e disponibilidade; uma tabela `leitores`, com nome, telefone e identificação do leitor; e uma tabela `emprestimos`, registrando qual livro foi emprestado, para qual leitor e em quais datas. Essa organização facilita consultas, pois o sistema pode buscar rapidamente quais livros estão disponíveis, quais estão emprestados e quem está com determinado livro. O banco também ajuda a evitar dados repetidos e melhora a organização do sistema.

### 3Distribuição sugerida

| Critério                                      | Pontuação |
| --------------------------------------------- | --------: |
| Apresenta pelo menos três tabelas coerentes   |       0,3 |
| Explica a função das tabelas                  |       0,3 |
| Relaciona as tabelas com consultas do sistema |       0,3 |
| Demonstra entendimento da vantagem do banco   |       0,1 |
| **Total**                                     |   **1,0** |

---

## Questão 4 — Avaliação da interface gráfica

* **Valor: 1,0 ponto**

### 4Resposta esperada

O aluno deve explicar que um menu no terminal pode ser suficiente para um protótipo inicial, pois permite testar a lógica principal do sistema sem gastar muito tempo com a aparência. Porém, também deve reconhecer que o terminal pode ser pouco intuitivo para usuários sem conhecimento técnico.

### 4Pontos que devem aparecer na resposta

* O terminal é útil para testar rapidamente a lógica do sistema.
* Para usuários iniciantes, uma interface gráfica é mais fácil de usar.
* A interface poderia ter botões como “Cadastrar livro”, “Cadastrar leitor”, “Registrar empréstimo” e “Registrar devolução”.
* Poderia ter campos de texto para título, autor, nome do leitor e código do livro.
* Poderia ter tabelas ou listas mostrando livros disponíveis e empréstimos ativos.
* Mensagens de erro e confirmação ajudam o usuário.

### 4Exemplo de resposta adequada

O menu no terminal pode ser suficiente em um protótipo inicial, porque permite testar rapidamente se as funcionalidades principais funcionam. No entanto, para voluntários sem conhecimento técnico, digitar opções no terminal pode ser confuso. Em uma interface gráfica, as mesmas funções poderiam aparecer como botões, por exemplo: “Cadastrar livro”, “Registrar empréstimo” e “Registrar devolução”. Também poderiam existir campos de texto para preencher título, autor e nome do leitor, além de uma tabela mostrando os livros disponíveis. Mensagens como “empréstimo registrado com sucesso” ou “livro não encontrado” ajudariam o usuário a entender o que aconteceu.

### 4Distribuição sugerida

| Critério                                                | Pontuação |
| ------------------------------------------------------- | --------: |
| Explica por que o terminal serve para protótipo         |       0,2 |
| Aponta limitações do terminal para usuários iniciantes  |       0,2 |
| Propõe elementos de interface gráfica                   |       0,3 |
| Cita mensagens, listas, tabelas ou campos de orientação |       0,2 |
| Relaciona a interface à facilidade de uso               |       0,1 |
| **Total**                                               |   **1,0** |

---

## Questão 5 — Aplicação prática do RAD no projeto

* **Valor: 1,0 ponto**

### 5Resposta esperada

O aluno deve explicar que dividir o sistema em versões combina com RAD porque permite entregar partes funcionais rapidamente, testar com usuários e melhorar o sistema com base no feedback recebido.

### 5Pontos que devem aparecer na resposta

* A Versão 1 permite testar cadastro básico de livros e leitores.
* A Versão 2 permite testar o controle de empréstimos e devoluções com SQLite.
* A Versão 3 permite avaliar a facilidade de uso com interface gráfica.
* Os usuários podem sugerir melhorias a cada versão.
* A equipe pode corrigir problemas antes de avançar.
* Pequenas entregas reduzem risco e tornam o desenvolvimento mais próximo da necessidade real dos usuários.

### 5Exemplo de resposta adequada

Essa divisão combina com RAD porque o sistema é construído em partes, com entregas rápidas e melhorias constantes. Na Versão 1, a equipe pode testar se o cadastro de livros e leitores funciona usando arquivos. Na Versão 2, pode melhorar o sistema usando SQLite para controlar empréstimos e devoluções de forma mais organizada. Na Versão 3, a interface gráfica pode ser testada pelos voluntários da biblioteca. A cada versão, os usuários podem dar feedback, permitindo que a equipe corrija erros e melhore o sistema. Isso é melhor do que esperar o sistema completo ficar pronto, pois reduz o risco de desenvolver algo que não atenda bem aos usuários.

### 5Distribuição sugerida

| Critério                                 | Pontuação |
| ---------------------------------------- | --------: |
| Relaciona divisão em versões com RAD     |      0,25 |
| Explica o que testar em cada versão      |       0,3 |
| Comenta o papel do feedback dos usuários |      0,25 |
| Explica a vantagem de pequenas entregas  |       0,2 |
| **Total**                                |   **1,0** |

---

# 5Critério geral de correção

| Desempenho do aluno                                              | Pontuação sugerida por questão |
| ---------------------------------------------------------------- | -----------------------------: |
| Resposta completa, clara, aplicada ao problema e bem justificada |                            1,0 |
| Resposta correta, mas com pouca explicação ou poucos exemplos    |                            0,7 |
| Resposta parcialmente correta, mas superficial                   |                            0,5 |
| Resposta confusa, incompleta ou com vários problemas conceituais |                            0,2 |
| Resposta em branco ou fora do tema                               |                            0,0 |

---

## Observação para correção

Não é necessário que o aluno use exatamente os mesmos termos do gabarito. A resposta deve ser considerada correta quando demonstrar compreensão dos conceitos e aplicação coerente ao caso da biblioteca.

Também é aceitável que o aluno proponha outras tabelas, formatos de arquivo ou elementos de interface, desde que a justificativa esteja correta e relacionada ao problema.
