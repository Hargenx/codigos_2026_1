# 1. MercadoLab

## Versão em português

**MercadoLab** é uma framework em Python para criação, configuração e execução de cenários de mercados artificiais baseados em agentes. A proposta do projeto é oferecer uma base extensível, parametrizável e reproduzível para que pesquisadores, estudantes e desenvolvedores possam modelar diferentes estruturas de mercado sem ficar restritos a uma única microestrutura ou teoria econômica.

A framework é construída sobre componentes fundamentais reutilizáveis, como agentes, ativos, mecanismos de execução e parâmetros de cenário, e organiza sua experiência principal em torno da construção de cenários. Dessa forma, o usuário pode tanto utilizar um cenário padrão de referência para compreender rapidamente as funcionalidades básicas do sistema quanto definir cenários customizados, ajustando elementos como quantidade de agentes, ativos, ruído, notícias, confiança e outras regras de interação.

O principal diferencial do MercadoLab é separar a infraestrutura de simulação das escolhas teóricas específicas de cada experimento. Em vez de impor uma única forma de mercado, a framework busca facilitar a criação, comparação e análise de múltiplos cenários artificiais, apoiando atividades de pesquisa, ensino e prototipação computacional.

## Versão em inglês

**MercadoLab** is a Python framework for creating, configuring and executing agent-based artificial market scenarios. Its goal is to provide an extensible, parameterizable and reproducible foundation for researchers, students and developers who want to model different market structures without being constrained by a single market microstructure or economic theory.

The framework is built on reusable core components, such as agents, assets, execution mechanisms and scenario parameters, while organizing the main user experience around scenario construction. This allows users both to run a default reference scenario for quickly understanding the framework’s basic capabilities and to define custom scenarios by adjusting elements such as number of agents, assets, noise, news, trust and other interaction rules.

MercadoLab’s main contribution is the separation between simulation infrastructure and the theoretical assumptions of each experiment. Instead of imposing a single market model, the framework is designed to support the creation, comparison and analysis of multiple artificial market scenarios for research, teaching and computational prototyping.

---

## 2. Seção para a introdução da dissertação

## Texto sugerido

A simulação baseada em agentes tem sido amplamente utilizada na investigação de mercados artificiais, especialmente em contextos nos quais se deseja representar heterogeneidade de agentes, interações locais, difusão de informação e dinâmicas emergentes. No entanto, muitos estudos e implementações acabam sendo desenvolvidos de forma fortemente acoplada a um único cenário experimental, a uma microestrutura específica ou a um conjunto rígido de pressupostos teóricos, o que dificulta a reutilização, a comparação entre experimentos e a replicação de resultados.

Nesse contexto, esta dissertação propõe o **MercadoLab**, uma framework em Python voltada à criação, configuração e execução de cenários de mercados artificiais baseados em agentes. A proposta central da framework é oferecer uma infraestrutura de simulação organizada em torno de componentes fundamentais reutilizáveis e de uma camada de cenários parametrizáveis, permitindo ao usuário construir diferentes ambientes de mercado sem ficar restrito a uma única forma de negociação, a um único mecanismo informacional ou a uma única teoria econômica.

Diferentemente de abordagens que já embutem no próprio núcleo do sistema uma determinada microestrutura de mercado, o MercadoLab busca separar a infraestrutura computacional das escolhas teóricas específicas de cada experimento. Essa separação pretende favorecer extensibilidade, clareza arquitetural, reprodutibilidade e flexibilidade metodológica, aspectos importantes tanto para pesquisa acadêmica quanto para uso didático e prototipação.

Assim, a contribuição deste trabalho não está em propor um mercado artificial único ou um modelo econômico fechado, mas em estruturar uma framework capaz de facilitar a construção, a configuração e a comparação de cenários de mercados artificiais. Para isso, o projeto combina componentes mínimos reutilizáveis, mecanismos de execução e um cenário padrão de referência, que serve como ponto de entrada para o uso da framework e como base inicial para análises comparativas.

---

## 3. Objetivo geral e objetivos específicos

## Objetivo geral

Desenvolver uma framework em Python para criação, configuração e execução de cenários de mercados artificiais baseados em agentes, de modo a oferecer uma base extensível, parametrizável e reproduzível para pesquisa, ensino e experimentação computacional, sem impor uma única microestrutura de mercado.

## Objetivos específicos

* Definir uma arquitetura modular para representar os componentes fundamentais de cenários de mercados artificiais baseados em agentes.
* Estruturar mecanismos de execução capazes de coordenar a dinâmica dos agentes e do ambiente de simulação.
* Implementar uma camada de cenários parametrizáveis, permitindo a construção e adaptação de diferentes configurações de mercado.
* Disponibilizar um cenário padrão de referência que demonstre as funcionalidades básicas da framework.
* Permitir a configuração de elementos relevantes do cenário, como quantidade de agentes, ativos, ruído, notícias, confiança e regras de interação.
* Apoiar a comparação entre diferentes cenários por meio de uma base comum de modelagem e execução.
* Avaliar o uso da framework em experimentos demonstrativos que evidenciem sua flexibilidade e aplicabilidade.

---

## 4. Versão mais acadêmica dos objetivos específicos, caso queira algo mais formal

* Propor uma arquitetura de software orientada à construção de cenários de mercados artificiais baseados em agentes.
* Identificar e abstrair os componentes fundamentais necessários à modelagem de cenários de mercado artificial.
* Implementar uma infraestrutura computacional que permita a parametrização e execução de diferentes cenários.
* Construir um cenário padrão de referência como baseline de uso e demonstração da framework.
* Investigar, por meio de experimentos computacionais, o potencial da framework para apoiar comparação, extensibilidade e reprodutibilidade em simulações de mercado artificial.

---

## 5. Versão curta para colocar no início do capítulo do projeto

O **MercadoLab** é uma framework em Python proposta para apoiar a criação de cenários de mercados artificiais baseados em agentes. Seu foco não é impor um modelo único de mercado, mas oferecer uma base modular e parametrizável para que diferentes estruturas de interação, informação e negociação possam ser configuradas e analisadas em um ambiente comum de simulação.

Se você quiser, o próximo passo pode ser eu montar isso já no formato de **capítulo de introdução da dissertação**, com problema, justificativa, objetivo geral, objetivos específicos e organização do trabalho.
