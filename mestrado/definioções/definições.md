# Documento de Identidade do Projeto — MercadoLab

## 1. Nome do projeto

### **MercadoLab**

## 2. Definição oficial do projeto

O **MercadoLab** é uma **framework em Python para criação, configuração e execução de cenários de mercados artificiais baseados em agentes**. Seu objetivo é facilitar a modelagem experimental de ambientes de mercado, permitindo ao usuário definir agentes, ativos, mecanismos informacionais, regras de interação e parâmetros do ambiente sem impor uma única microestrutura ou teoria econômica.

## 3. Missão

Oferecer uma base **extensível, parametrizável e reproduzível** para a construção de cenários de mercados artificiais, apoiando pesquisa, ensino e experimentação computacional em simulação baseada em agentes.

## 4. Visão

Tornar-se uma framework acadêmica e didática de referência para prototipação e comparação de cenários de mercados artificiais, conciliando:

* simplicidade de uso;
* flexibilidade metodológica;
* clareza arquitetural;
* utilidade para pesquisa e ensino.

## 5. Problema que o MercadoLab resolve

Pesquisadores e estudantes que desejam modelar mercados artificiais frequentemente precisam escolher entre duas opções ruins:

* implementar tudo do zero, com alto custo técnico e baixa padronização;
* usar ferramentas excessivamente fechadas, que impõem estruturas, teorias ou mecanismos específicos.

O MercadoLab surge para reduzir esse problema, oferecendo uma base comum que:

* evita a necessidade de reconstruir elementos essenciais a cada estudo;
* facilita a criação de cenários comparáveis;
* preserva liberdade para definir regras específicas do mercado analisado.

## 6. Proposta de valor

A principal proposta de valor do MercadoLab é:

> **facilitar a criação de cenários de mercados artificiais sem aprisionar o usuário a uma única microestrutura de mercado.**

Em termos práticos, isso significa:

* oferecer blocos fundamentais reutilizáveis;
* permitir a configuração de cenários por parâmetros;
* disponibilizar um cenário padrão de referência;
* manter abertura para diferentes mecanismos de decisão, interação e formação de preços.

## 7. Público-alvo

O MercadoLab é voltado principalmente para:

* **pesquisadores** em simulação baseada em agentes, mercados artificiais e sistemas complexos;
* **estudantes** de graduação e pós-graduação que precisem construir ou entender cenários de mercado simulados;
* **docentes** que desejem usar simulação de mercados em contextos didáticos;
* **desenvolvedores** interessados em prototipar ambientes de mercado configuráveis.

## 8. Escopo do projeto

O escopo do MercadoLab inclui:

* representação de elementos básicos de domínio de mercado;
* criação e parametrização de agentes e ativos;
* suporte à execução de cenários;
* construção de cenários configuráveis;
* disponibilização de um cenário padrão de demonstração;
* suporte à experimentação comparativa e reprodutível.

## 9. Não escopo

O MercadoLab **não** tem como objetivo principal:

* representar fielmente um mercado real específico;
* impor uma teoria econômica única;
* impor um único modelo de formação de preços;
* impor um único tipo de order book;
* impor um único tipo de agente;
* substituir plataformas completas de produção financeira;
* resolver, por si só, validação empírica de mercados reais.

Essa seção é importante porque protege a sua tese de cobranças indevidas.

## 10. Unidade principal de uso

A unidade principal de uso do MercadoLab deve ser o **cenário**.

Ou seja, embora a framework seja construída sobre componentes fundamentais, a experiência do usuário deve girar em torno de algo como:

* criar um cenário;
* configurar parâmetros;
* executar o cenário;
* observar resultados.

Isso significa que o projeto não deve ser apresentado apenas como uma biblioteca de classes isoladas, mas como uma **framework para construção de cenários baseada em componentes**.

## 11. Núcleo conceitual do MercadoLab

O núcleo conceitual do projeto é formado por três camadas:

### a) Componentes fundamentais

Elementos mínimos e reutilizáveis, como:

* agentes;
* ativos;
* tempo;
* ordens/intenções;
* transações;
* tipos auxiliares.

### b) Mecanismo de execução

Camada responsável por:

* orquestrar a simulação;
* coordenar ciclos/ticks;
* acionar decisões dos agentes;
* aplicar regras do cenário.

### c) Cenários

Camada principal de uso, responsável por:

* combinar componentes fundamentais;
* expor parâmetros;
* definir o ambiente experimental;
* permitir replicação e comparação.

## 12. Diferencial científico

O principal diferencial científico do MercadoLab é:

> **separar a infraestrutura de simulação da teoria específica do mercado.**

Isso quer dizer que a framework oferece os meios para construir cenários, mas evita embutir como obrigatórios:

* uma única microestrutura;
* um único mecanismo de negociação;
* uma única dinâmica informacional;
* uma única lógica de formação de preço.

Esse ponto é muito forte para a dissertação.

## 13. Diferencial técnico

O diferencial técnico do MercadoLab é combinar:

* arquitetura modular;
* parametrização;
* extensibilidade;
* possibilidade de cenários padrão e customizados;
* reprodutibilidade experimental.

## 14. Cenário padrão de referência

O MercadoLab deve possuir um **cenário padrão demonstrativo**, com o objetivo de:

* permitir ao usuário compreender rapidamente a framework;
* demonstrar as capacidades básicas do sistema;
* servir de baseline para comparação com outros cenários.

Esse cenário padrão pode incluir, por exemplo:

* 100 agentes por default;
* 3 ativos por default;
* compra e venda;
* ruído;
* notícias;
* confiança entre agentes;
* parametrização opcional.

Importante: esse cenário padrão deve ser tratado como **cenário de referência**, não como definição obrigatória do núcleo da framework.

## 15. Princípios de projeto

Os princípios centrais do MercadoLab devem ser:

### Extensibilidade

O usuário pode modificar ou substituir elementos do cenário.

### Parametrização

O comportamento do ambiente pode ser alterado por configuração.

### Neutralidade metodológica

A framework não impõe uma teoria única de mercado.

### Reprodutibilidade

Os cenários devem poder ser executados novamente sob condições controladas.

### Clareza arquitetural

README, código e dissertação devem expressar a mesma identidade.

### Usabilidade acadêmica

O projeto deve ser simples o suficiente para ser explicado, usado e defendido em contexto de pesquisa.

## 16. Declaração curta de identidade

Essa é a frase curta que eu sugiro para você usar como definição oficial:

> **MercadoLab é uma framework em Python para criação de cenários de mercados artificiais baseados em agentes, construída sobre componentes mínimos, extensíveis e parametrizáveis, sem impor uma única microestrutura de mercado.**

## 17. Declaração curta para README

Versão mais direta para abertura do repositório:

> **MercadoLab is a Python framework for building agent-based artificial market scenarios. It provides extensible core components and configurable scenario layers, allowing researchers and students to prototype, compare and analyze different market structures without being restricted to a single market microstructure.**

## 18. Declaração para a dissertação

Versão mais acadêmica:

> O MercadoLab é proposto como uma framework para criação e execução de cenários de mercados artificiais baseados em agentes. Diferentemente de abordagens que incorporam pressupostos rígidos de microestrutura, a proposta busca separar os componentes fundamentais da simulação das escolhas teóricas específicas de cada cenário, favorecendo extensibilidade, parametrização e reprodutibilidade experimental.

## 19. Escopo mínimo defendível do projeto

Para a dissertação, o mínimo defendível do MercadoLab deve ser:

* componentes fundamentais definidos;
* mecanismo de execução funcional;
* um cenário padrão operacional;
* parametrização básica;
* exemplos de uso;
* experimentos demonstrativos.

Isso basta para sustentar a identidade do projeto sem exigir um ecossistema completo.

## 20. Critério prático para tomada de decisão

Toda decisão futura sobre código, README ou dissertação deve passar por esta pergunta:

> **Isso reforça o MercadoLab como framework para criação de cenários de mercado, ou o afasta dessa identidade?**

Se reforça, entra.
Se afasta, sai ou vai para trabalho futuro.

---

## Resumo executivo

## O que o MercadoLab é

Uma framework para criação de cenários de mercados artificiais baseados em agentes.

## Como ele faz isso

Por meio de componentes mínimos, extensíveis e parametrizáveis.

## O que ele evita

Impor uma única microestrutura, um único tipo de agente ou uma única teoria econômica.

## Qual é sua unidade principal de uso

O cenário.

## Qual é o papel do cenário padrão

Demonstrar a framework e servir como baseline.

---

## Formulação final recomendada

Se eu tivesse que condensar toda a identidade em uma única formulação, eu deixaria assim:

> **MercadoLab é uma framework em Python para criação, configuração e execução de cenários de mercados artificiais baseados em agentes, oferecendo componentes fundamentais reutilizáveis e uma camada de cenários parametrizáveis, de modo a apoiar pesquisa, ensino e experimentação sem impor uma única microestrutura de mercado.**

Posso, no próximo passo, transformar isso em três coisas prontas para uso: **texto de README**, **seção da introdução da dissertação** e **seção “objetivo geral e objetivos específicos”**.
