# Oscilar entre duas identidades

* **framework minimalista de blocos base**
* **framework pronta para criar e executar cenários de mercado**

Você precisa escolher qual dessas é a identidade principal. Pela sua tese e pelo que você descreveu, eu acho que a melhor identidade é esta:

> **MercadoLab é uma framework para criação de cenários de mercados artificiais, baseada em componentes mínimos, extensíveis e parametrizáveis, sem impor uma única microestrutura de mercado.**

Essa formulação é forte porque junta as duas coisas que você quer:

* liberdade metodológica;
* facilidade de uso para montar cenários.

## Como definir isso na prática

### 1. Escreva a frase de identidade em 1 parágrafo

Faça um texto curto respondendo:

* o que é o MercadoLab;
* para quem ele existe;
* qual problema ele resolve;
* o que ele não pretende ser.

Modelo:

> O MercadoLab é uma framework em Python para criação, configuração e execução de cenários de mercados artificiais baseados em agentes. Seu objetivo é facilitar a modelagem experimental de diferentes estruturas de mercado, permitindo ao pesquisador definir agentes, ativos, regras de interação, mecanismos informacionais e parâmetros do ambiente, sem impor uma única microestrutura ou teoria econômica. O foco da framework não é representar um mercado “correto”, mas oferecer uma base extensível, reproduzível e comparável para construção de experimentos.

Se você conseguir fechar esse parágrafo, metade da identidade já está resolvida.

## 2. Defina o “núcleo” e o “não núcleo”

Você precisa separar o que é essencial do que é acessório.

### Núcleo do MercadoLab

Aquilo sem o qual ele deixa de ser ele mesmo:

* tipos básicos de domínio;
* agentes;
* ativos;
* tempo;
* execução/scheduler;
* parâmetros de cenário;
* mecanismo para montar cenários.

### Não núcleo

Aquilo que pode existir, mas não define a identidade:

* CLI sofisticada;
* plugins legados;
* RL;
* dashboards;
* múltiplos cenários avançados;
* integrações extras.

A pergunta é:
**se eu tivesse que defender o MercadoLab amanhã, o que obrigatoriamente precisaria existir?**

A resposta a isso define sua identidade operacional.

## 3. Escolha o nível de abstração principal

Aqui está a decisão mais importante.

O MercadoLab é principalmente:

### Opção A — biblioteca de componentes

O usuário pega peças soltas e monta tudo.

### Opção B — framework de cenários

O usuário já encontra uma estrutura pronta para criar cenários com defaults, parâmetros e extensões.

Pelo que você quer, eu escolheria claramente a **Opção B**.

Ou seja:
o MercadoLab não deve ser vendido só como “blocos mínimos”, mas como:

> **uma framework de cenários construída sobre blocos mínimos.**

Essa diferença é decisiva.

## 4. Declare explicitamente o que o MercadoLab não impõe

Isso é essencial para sua tese.

Você pode dizer que o MercadoLab:

* não impõe order book específico;
* não impõe formação de preço única;
* não impõe tipos fixos de agentes;
* não impõe uma teoria econômica única;
* não impõe uma topologia social única de difusão de informação.

Isso fortalece a contribuição científica.

## 5. Transforme a identidade em decisões de código

A identidade final não pode ficar só no texto. Ela precisa aparecer no repositório.

Se a identidade for “framework para criação de cenários”, então o código precisa refletir isso.

### A estrutura ideal seria algo como

* `mercadolab.core` ou `mercadolab.domain` → peças fundamentais
* `mercadolab.engine` → execução
* `mercadolab.scenarios` → camada principal de uso
* `mercadolab.scenarios.basic_market` → cenário padrão

Ou seja, o usuário tem que perceber imediatamente que a unidade de uso principal é o **cenário**.

## 6. Faça um teste simples de identidade

Use estas perguntas:

### Teste 1

Quando alguém entrar no repositório, em uma frase, vai entender o projeto?

### Teste 2

O README, o código e a dissertação dizem a mesma coisa?

### Teste 3

O primeiro exemplo de uso mostra a identidade real do projeto?

### Teste 4

Se alguém perguntar “qual é a contribuição do MercadoLab?”, você responde em menos de 30 segundos?

Se alguma dessas respostas for “não”, a identidade ainda não está fechada.

## 7. Minha sugestão objetiva para a sua definição

Se eu fosse consolidar a identidade final do MercadoLab hoje, eu usaria isto:

### Identidade

**Framework para criação de cenários de mercados artificiais baseados em agentes.**

### Base conceitual

**Componentes mínimos, extensíveis e parametrizáveis.**

### Diferencial

**Não impõe uma única microestrutura nem um único modelo de mercado.**

### Unidade principal de uso

**Cenários.**

### Cenário de entrada

**Um cenário padrão demonstrativo configurável.**

### Público-alvo

**Pesquisadores, estudantes e desenvolvedores interessados em simulação de mercados artificiais.**

## 8. O que você precisa decidir esta semana

Para fechar a identidade final, eu recomendo registrar explicitamente estas respostas:

1. **O que o MercadoLab é?**
2. **O que ele não é?**
3. **Quem usa?**
4. **Qual é a unidade principal de uso: componente ou cenário?**
5. **Qual é a contribuição científica?**
6. **Qual é o cenário mínimo defendível?**

Se quiser, eu posso fazer isso por você agora em formato de **documento de identidade do projeto**, com:

* missão,
* escopo,
* não escopo,
* público-alvo,
* proposta de valor,
* e frase oficial para README e dissertação.
