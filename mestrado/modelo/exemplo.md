# Revisão dirigida do texto da dissertação

## 1. Resumo

### Trecho atual

O resumo diz que o MercadoLab é um framework “para simular investimentos em mercados financeiros”, com “microestrutura explícita”, “plano de simulação”, “protocolo de análise quantitativa alinhado a fatos estilizados”, “resultados preliminares” e “protocolo de validação quantitativa”.

### Problema

Aqui o texto mistura duas promessas diferentes:

* desenvolver uma **framework**
* validar um **mercado artificial** por propriedades estatísticas

Para o estado conceitual que você quer defender agora, isso pesa demais para o lado de “simulador de mercado”. O resumo passa a impressão de que a contribuição principal é gerar séries coerentes com literatura financeira, quando a contribuição principal deveria ser o **artefato de software**.

### Como enquadrar

O resumo precisa dizer que:

* o MercadoLab é uma **infraestrutura reutilizável**;
* o foco é **apoiar a construção de mercados artificiais**;
* os cenários servem para **demonstrar uso e capacidade da framework**;
* a avaliação principal é sobre **modularidade, extensibilidade, reprodutibilidade e apoio à modelagem**.

### Sugestão de reescrita

```md
Este trabalho apresenta o MercadoLab, um framework de Modelagem Baseada em Agentes (ABM) voltado ao apoio à construção de mercados artificiais no domínio financeiro. A proposta central não consiste em validar quantitativamente um mercado específico, mas em oferecer uma infraestrutura de software modular, extensível, reutilizável e reprodutível para apoiar pesquisadores e estudantes na definição de agentes, regras de interação, cenários e mecanismos de execução.

O framework organiza abstrações centrais do domínio e fornece pontos de extensão para a criação e adaptação de modelos, priorizando clareza arquitetural, separação de responsabilidades e facilidade de evolução. Sua avaliação concentra-se em sua atuação como framework de domínio, considerando aspectos como consistência estrutural, modularidade, extensibilidade, reuso e reprodutibilidade experimental.

Assim, o MercadoLab busca contribuir como infraestrutura metodológica e computacional para pesquisa e ensino em simulação baseada em agentes aplicada a mercados artificiais.
```

---

## 2. Problema de pesquisa

### Trecho atual (resumo)

O problema fala em carência de um framework ABM para mercado financeiro com microestrutura explícita, parametrização externa/CLI e protocolo de validação alinhado a fatos estilizados.

### Problema (resumo)

A abertura está boa, mas o final volta a empurrar a pesquisa para uma lógica de validação de mercado por resultados quantitativos. O núcleo do problema deveria estar na **falta de infraestrutura de software reutilizável**, não na ausência de um gerador de mercados que reproduza fatos estilizados.

### Como enquadrar (resumo)

O problema deveria ser:

* implementações ad hoc são comuns;
* falta uma arquitetura clara e extensível;
* falta um artefato reutilizável para construção de modelos;
* falta apoio à reprodutibilidade e à evolução de cenários.

### Sugestão de reescrita (resumo)

```md
Apesar do avanço da ABM aplicada a finanças, ainda há carência de uma infraestrutura de software reutilizável que organize, de forma modular e extensível, os principais elementos necessários à construção de mercados artificiais. Em muitos estudos, os modelos são implementados de forma ad hoc, com baixo potencial de reuso, limitada clareza arquitetural e pouca facilidade de extensão.

Diante disso, este trabalho propõe o MercadoLab como um framework de domínio para apoiar a construção, execução e evolução de modelos baseados em agentes no contexto de mercados artificiais financeiros, com ênfase em modularidade, extensibilidade, reprodutibilidade e apoio à pesquisa e ao ensino.
```

---

## 3. Objetivo geral

### Trecho atual (objetivo geral)

> “Desenvolver um framework computacional baseado em agentes (...) para a simulação de investimentos no mercado financeiro...”

### Problema  (objetivo geral)

“Para a simulação de investimentos” ainda faz o trabalho soar como um simulador pronto. Para o posicionamento atual, o mais adequado é falar em **apoio à construção de modelos**.

### Como enquadrar (objetivo geral)

O objetivo geral deve enfatizar:

* framework de domínio;
* infraestrutura conceitual e computacional;
* construção e execução de modelos;
* modularidade, reuso, extensão.

### Sugestão de reescrita (objetivo geral)

```md
Desenvolver um framework computacional baseado em agentes, denominado MercadoLab, para apoiar a construção, execução e evolução de mercados artificiais no domínio financeiro, com ênfase em modularidade, extensibilidade, reutilização e reprodutibilidade.
```

---

## 4. Objetivos específicos

### Trecho atual (objetivos específicos)

Os objetivos incluem modelar um mercado artificial com microestrutura explícita, disponibilizar agentes heterogêneos, prover CLI e parâmetros, definir protocolo de validação alinhado a fatos estilizados e documentar uso/extensão.

### Problema (objetivos específicos)

Esses objetivos ainda partem de um framework que já incorpora um mercado específico e um protocolo quantitativo de validação de mercado. Para uma framework, os objetivos precisam mirar mais na **arquitetura** e menos na **hipótese econômica**.

### Como enquadrar (objetivos específicos)

Os objetivos específicos deveriam priorizar:

* abstrações centrais;
* núcleo extensível;
* composição de cenários;
* reprodutibilidade;
* documentação;
* demonstração de uso.

### Sugestão de reescrita (objetivos específicos)

```md
- Definir uma arquitetura modular para representação de agentes, ambiente, regras de interação e execução.
- Implementar componentes reutilizáveis que permitam compor diferentes modelos de mercados artificiais.
- Disponibilizar pontos de extensão para inclusão de novos agentes, estratégias, mecanismos e estruturas de mercado.
- Prover mecanismos de configuração e execução reprodutível de cenários experimentais.
- Documentar diretrizes de uso, extensão e organização arquitetural do framework.
- Demonstrar a viabilidade do framework por meio de cenários exemplificativos construídos sobre seu núcleo.
- Avaliar o framework quanto à modularidade, extensibilidade, reuso, consistência arquitetural e reprodutibilidade.
```

---

## 5. Delimitação do trabalho

### Trecho atual (delimitação)

A delimitação fixa um único ativo, um livro de ordens contínuo e três perfis iniciais de agentes, com foco em coerência interna, comportamento emergente e estabilidade sistêmica.

### Problema (delimitação)

Isso delimita um **modelo de mercado específico**, não a framework enquanto artefato. Pode ser mantido como exemplo, mas não como essência do trabalho.

### Como enquadrar (delimitação)

A delimitação deveria separar:

* o que é **núcleo da framework**
* o que é **cenário demonstrativo**
* o que é **fora do escopo**

### Sugestão de reescrita (delimitação)

```md
Nesta fase, o trabalho se limita à definição e implementação do núcleo arquitetural do framework e à sua demonstração por meio de cenários exemplificativos no domínio de mercados artificiais financeiros. Esses cenários têm caráter instrumental e demonstrativo, sendo utilizados para evidenciar a capacidade do framework de suportar a construção de modelos baseados em agentes, e não para validar empiricamente um mercado específico.
```

---

## 6. Escopo de validação

### Trecho atual (escopo de validação)

O texto mistura verificação de software, coerência interna de agentes/microestrutura e verificação de propriedades emergentes esperadas em mercados artificiais, como fatos estilizados e recorrência.

### Problema (escopo de validação)

Esse é um dos pontos mais importantes. Você já percebeu corretamente: para uma framework, não faz sentido o eixo central da validação ser “reproduzir fatos estilizados”. Isso pode até aparecer em um cenário construído **sobre** a framework, mas não como principal critério de sucesso da framework em si.

### Como enquadrar (escope de validação)

O escopo de validação deve ficar centrado em:

* consistência arquitetural;
* modularidade;
* extensibilidade;
* reuso;
* reprodutibilidade;
* adequação ao propósito de apoiar construção de modelos ABM.

### Sugestão de reescrita (escopo de validação)

```md
Por se tratar de um framework, a validação nesta qualificação concentra-se na avaliação do artefato de software enquanto infraestrutura reutilizável para modelagem baseada em agentes. Assim, consideram-se: (i) a consistência arquitetural do núcleo implementado; (ii) a modularidade e a separação de responsabilidades entre os componentes; (iii) a extensibilidade para criação de novos agentes, estratégias e cenários; (iv) a reprodutibilidade das execuções configuradas; e (v) a capacidade do framework de apoiar a construção de diferentes mercados artificiais no domínio financeiro.

Os cenários implementados nesta fase têm caráter demonstrativo, servindo para evidenciar o funcionamento e a utilidade do framework, e não para validar quantitativamente um mercado específico frente a propriedades estilizadas da literatura.
```

---

## 7. Posicionamento e contribuição

### Trecho atual (posicionamento e contribuição)

O texto diz que o MercadoLab integra arquitetura modular, ontologia, plano de simulação fatorial e protocolo de análise quantitativa alinhado a fatos estilizados, posicionando-se como plataforma de referência para estudos em mercados artificiais.

### Problema (posicionamento e contribuição)

De novo, a contribuição fica dividida entre “framework” e “protocolo de validação de mercado”. Isso enfraquece a clareza do argumento.

### Como enquadrar (posicionamento e contribuição)

A contribuição principal deveria ser:

* infraestrutura de software;
* organização conceitual do domínio;
* base comum para múltiplos modelos;
* apoio à pesquisa e ao ensino;
* redução de implementações ad hoc.

### Sugestão de reescrita (posicionamento e contribuição)

```md
Ao integrar uma arquitetura de software modular, uma modelagem conceitual do domínio e mecanismos de configuração e extensão, o MercadoLab busca se posicionar como uma infraestrutura metodológica e computacional para a construção de mercados artificiais baseados em agentes no contexto financeiro. Sua principal contribuição está em oferecer uma base reutilizável, extensível e reprodutível para pesquisa e ensino, reduzindo a necessidade de implementações ad hoc e favorecendo a evolução de modelos construídos sobre um núcleo comum.
```

---

## 8. Estrutura do trabalho

### Trecho atual (estrutura do trabalho)

O Capítulo 5 é “Metodologia de Simulação e Validação”, e o Capítulo 6 apresenta “resultados das simulações, análises estatísticas e discussão dos achados”.

### Problema (estrutura do trabalho)

Essa estrutura ainda está organizada como se a dissertação fosse concluir com um estudo quantitativo de mercado. Para o posicionamento atual, o texto deveria destacar **desenvolvimento e avaliação do framework**.

### Como enquadrar (estrutura do trabalho)

Uma estrutura mais coerente seria algo como:

* proposta do framework;
* metodologia de desenvolvimento e avaliação;
* demonstração de uso e análise do artefato.

### Sugestão de reescrita (estrutura do trabalho)

```md
O Capítulo 5 apresenta a metodologia de desenvolvimento e avaliação do framework, descrevendo os critérios adotados para examinar sua consistência arquitetural, modularidade, extensibilidade, reprodutibilidade e capacidade de apoiar a construção de cenários baseados em agentes.

O Capítulo 6 apresenta a demonstração de uso do MercadoLab por meio de cenários exemplificativos e discute os resultados obtidos sob a perspectiva do artefato de software, enfatizando seu potencial de reuso, extensão e apoio metodológico à pesquisa e ao ensino.
```

---

## 9. Fundamentação teórica — foco do framework

### Trecho atual (fundamentação teórica — foco do framework)

A fundamentação teórica está boa no que diz respeito à definição de framework, ABM, domínio, white-box/black-box e framework híbrido. Mas o subtópico “Foco do MercadoLab neste trabalho” ainda fala em microestrutura explícita, coleta estruturada de métricas e estudos sobre estabilidade sistêmica, validação empírica e aprendizado de máquina.

### Problema (fundamentação teórica — foco do framework)

Esse trecho ainda apresenta o framework como se ele viesse carregado de teoria de mercado e de um conjunto de compromissos analíticos específicos.

### Como enquadrar (fundamentação teórica — foco do framework)

Essa seção deveria dizer que o framework:

* organiza o núcleo arquitetural;
* oferece extensibilidade;
* permite cenários distintos;
* não precisa impor uma teoria única de mercado.

### Sugestão de reescrita (fundamentação teórica — foco do framework)

```md
O MercadoLab foi concebido para fornecer uma arquitetura estável e extensível para modelos de mercados artificiais baseados em agentes, organizando os principais elementos do domínio em componentes reutilizáveis. Seu foco está em padronizar a estrutura de construção dos modelos, apoiar sua configuração e execução reprodutível e permitir a evolução do sistema por meio da inclusão de novos componentes, regras e cenários.
```

---

## 10. Ontologia e modelo conceitual do domínio

### Trecho atual (ontologia e modelo conceitual do domínio)

A ontologia apresentada assume como centrais entidades como `Mercado`, `Ordem`, `Transacao`, `Carteira` e `Posicao`, tratadas como parte do núcleo do framework.

### Problema (ontologia e modelo conceitual do domínio)

Esse é um ponto conceitual delicado. Se a framework atual não quer mais impor microestrutura ao core, então essa ontologia precisa deixar de tratar certas entidades como **núcleo obrigatório** e passar a tratá-las como **possíveis especializações do domínio**.

### Como enquadrar (ontologia e modelo conceitual do domínio)

A ontologia pode ser dividida em duas camadas:

* **núcleo mínimo**: agente, ativo/instrumento, tempo, decisão/interação
* **camada de especialização**: ordem, transação, carteira, LOB, mercado contínuo etc.

### Sugestão de reescrita (ontologia e modelo conceitual do domínio)

```md
A modelagem conceitual do MercadoLab deve distinguir entre um núcleo ontológico mínimo, necessário à modelagem baseada em agentes, e conceitos especializados que podem ser adotados em instâncias específicas do framework. Assim, entidades como agente, instrumento e tempo compõem o núcleo mais geral, enquanto elementos como ordem, transação, carteira e estruturas específicas de mercado passam a ser tratados como extensões ou especializações possíveis, conforme o modelo implementado sobre o framework.
```

---

## 11. RSL — conexão com o MercadoLab

### Trecho atual (RSL — conexão com o MercadoLab)

A conexão com o MercadoLab diz que as lacunas da literatura motivam um framework com microestrutura explícita, extensível a agentes com aprendizado e apoiado por protocolo de validação quantitativa transparente e reprodutível.

### Problema (RSL — conexão com o MercadoLab)

Essa conexão ainda está muito presa à ideia de framework + validação quantitativa de mercado.

### Como enquadrar (RSL — conexão com o MercadoLab)

A RSL deveria justificar mais claramente:

* falta de reprodutibilidade;
* falta de código;
* falta de modularidade;
* falta de infraestrutura reutilizável.

### Sugestão de reescrita (RSL — conexão com o MercadoLab)

```md
As lacunas observadas na literatura não motivam apenas novos modelos de mercado, mas também a necessidade de melhores infraestruturas de software para construí-los. Nesse sentido, o MercadoLab é proposto como um framework de domínio capaz de organizar, reutilizar e tornar extensíveis os componentes centrais de modelos ABM aplicados a mercados artificiais, favorecendo reprodutibilidade, clareza metodológica e evolução arquitetural.
```

---

## 12. Metodologia — tipificação do estudo

### Trecho atual (metodologia — tipificação do estudo)

A tipificação como pesquisa aplicada e exploratória está boa e conversa com “ferramenta tecnológica”.

### Problema (metodologia — tipificação do estudo)

Quase não há problema aqui. O ajuste é mais fino: evitar que a continuação da metodologia escorregue para “teste de realismo de mercado”.

### Como enquadrar (metodologia — tipificação do estudo)

Essa parte pode ser mantida com pequenas adaptações.

### Sugestão de reescrita (metodologia — tipificação do estudo)

```md
Quanto à sua natureza, este estudo é classificado como pesquisa aplicada, pois visa gerar conhecimento com aplicação prática no desenvolvimento de uma ferramenta tecnológica. Quanto aos objetivos, trata-se de pesquisa exploratória, por investigar uma abordagem arquitetural e metodológica para apoiar a construção de mercados artificiais baseados em agentes no domínio financeiro.
```

---

## 13. Metodologia — questões de pesquisa e hipóteses

### Trecho atual (metodologia — questões de pesquisa e hipóteses)

As QPs perguntam se o framework reproduz fatos estilizados, se a heterogeneidade aumenta volatilidade/volume e se DRL altera a estabilidade do mercado.

### Problema (metodologia — questões de pesquisa e hipóteses)

Essas questões são típicas de um **estudo experimental de mercado**, não de uma dissertação cujo objeto central é uma **framework**.

### Como enquadrar (metodologia — questões de pesquisa e hipóteses)

As perguntas deveriam tratar de:

* adequação arquitetural;
* extensibilidade;
* reuso;
* reprodutibilidade;
* capacidade de apoiar construção de cenários.

### Sugestão de substituição

```md
QP1: O MercadoLab oferece uma arquitetura modular e coerente para apoiar a construção de modelos de mercados artificiais baseados em agentes?

QP2: O framework permite extensão por meio da inclusão de novos agentes, estratégias, regras e componentes sem necessidade de alteração estrutural do núcleo?

QP3: O MercadoLab favorece reprodutibilidade e reuso na definição e execução de cenários experimentais?

QP4: O uso do framework demonstra capacidade de apoiar a construção de diferentes instâncias de mercados artificiais no domínio financeiro?
```

Se quiser hipóteses formais, elas podem virar algo assim:

```md
H1: O núcleo do framework apresenta separação adequada de responsabilidades e pontos de extensão suficientes para apoiar múltiplos cenários.

H2: É possível estender o framework com novos agentes e regras preservando o núcleo original.

H3: O framework permite reproduzir execuções e organizar experimentos de forma controlada.

H4: O framework é capaz de servir como base comum para diferentes modelos de mercados artificiais.
```

---

## 14. Capítulo 4 — O Framework MercadoLab

### Trecho atual (capítulo 4 — O Framework MercadoLab)

A estrutura do texto diz que o capítulo detalha evolução da arquitetura, requisitos, modelagens, arquitetura de arquivos, modelo matemático/computacional dos componentes e fluxo de execução de um tick.

### Problema (capítulo 4 — O Framework MercadoLab)

Isso ainda pode funcionar, mas o “fluxo de execução do tick” e a modelagem podem estar amarrados demais a um mercado mais prescritivo.

### Como enquadrar (capítulo 4 — O Framework MercadoLab)

Nesse capítulo, o ideal é separar com clareza:

* núcleo do framework;
* pontos de extensão;
* componentes opcionais;
* exemplos de especialização.

### Sugestão de orientação textual

```md
Neste capítulo, o MercadoLab deve ser apresentado como infraestrutura arquitetural para modelagem baseada em agentes, destacando seu núcleo conceitual, seus pontos de extensão, suas decisões de design e a forma como permite a construção de cenários especializados no domínio financeiro. Elementos de microestrutura específica devem aparecer como especializações possíveis, e não como imposições do núcleo.
```

---

## 15. Ajuste conceitual geral da dissertação

### Síntese do problema

Hoje o texto descreve um MercadoLab centrado em:

* LOB explícito,
* mercado completo,
* CLI,
* protocolos quantitativos,
* fatos estilizados e estabilidade do mercado.

Mas a formulação que você quer defender é outra:

* framework como infraestrutura;
* ferramenta para apoiar construção de mercados;
* neutralidade maior quanto à teoria de mercado;
* validação centrada no artefato.

Esse reposicionamento é coerente com a formulação de “artefato metodológico” e com a ideia de que a microestrutura é responsabilidade do usuário, não do core da framework.

### Frase-síntese para orientar a reescrita

```md
O trabalho deixa de se apresentar como uma investigação sobre se o mercado gerado pelo sistema reproduz propriedades estilizadas da literatura e passa a se apresentar como o desenvolvimento e a avaliação de um framework de domínio capaz de apoiar a construção de modelos ABM para mercados artificiais.
```

---

## Ordem de reescrita

A sequência mais importante para mexer primeiro é:

1. **Resumo**
2. **Problema**
3. **Objetivo geral e objetivos específicos**
4. **Delimitação**
5. **Escopo de validação**
6. **Posicionamento e contribuição**
7. **Questões de pesquisa**
8. **Estrutura dos capítulos**
9. **Capítulo do framework**
10. **Ontologia do domínio**

Porque esses são os pontos em que o desalinhamento aparece mais forte no texto atual.

No próximo passo, eu posso fazer a versão mais útil de todas: **reescrever diretamente esses trechos em LaTeX**, já no seu estilo de dissertação.
