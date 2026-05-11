# Cronograma formal de conclusão — Dissertação + MercadoLab

**Período:** março a julho de 2026
**Objetivo geral:** concluir a arquitetura mínima defendível do MercadoLab, alinhar o repositório à proposta da dissertação, executar experimentos essenciais, finalizar a redação e preparar a defesa.

---

## 1. Macroetapas do cronograma

| Etapa   | Período | Objetivo principal                                                | Produto esperado                                                          |
| ------- | ------- | ----------------------------------------------------------------- | ------------------------------------------------------------------------- |
| Etapa 1 | Março   | Fechar escopo, identidade da framework e estrutura da dissertação | Escopo congelado, arquitetura definida, sumário consolidado               |
| Etapa 2 | Abril   | Consolidar o repositório e implementar o núcleo demonstrável      | Repositório coerente, cenário padrão funcional, exemplos e testes básicos |
| Etapa 3 | Maio    | Executar experimentos e fechar capítulos técnicos                 | Resultados, gráficos, tabelas e capítulos técnicos quase finalizados      |
| Etapa 4 | Junho   | Revisar, integrar, validar e preparar defesa                      | Dissertação completa, revisão final, slides                               |
| Etapa 5 | Julho   | Absorver atrasos e concluir versão definitiva                     | Correções finais, depósito/defesa                                         |

---

## 2. Cronograma mensal detalhado

## Março de 2026 — Definição e congelamento de escopo

### Objetivo do mês

Encerrar a fase de indefinição e formalizar exatamente o que entra na dissertação e no MercadoLab.

| Semana   | Período       | Atividades                                                          | Entregáveis                                     | Critério de conclusão                      |
| -------- | ------------- | ------------------------------------------------------------------- | ----------------------------------------------- | ------------------------------------------ |
| Semana 1 | 12/03 a 15/03 | Revisar proposta central da dissertação e do MercadoLab             | Texto-base da proposta e contribuição principal | Proposta resumida em 1 a 2 parágrafos      |
| Semana 2 | 16/03 a 22/03 | Definir arquitetura-alvo: core, scenarios, legado, API pública      | Documento de decisão arquitetural               | Estrutura escolhida e validada para seguir |
| Semana 3 | 23/03 a 29/03 | Revisar índice/sumário da dissertação e mapear lacunas por capítulo | Sumário final com status de cada capítulo       | Todos os capítulos com situação mapeada    |
| Semana 4 | 30/03 a 31/03 | Definir MVP acadêmico da framework                                  | Lista formal do que entra e do que fica fora    | Escopo congelado                           |

### Entregáveis formais de março

* definição oficial do posicionamento do MercadoLab;
* arquitetura-alvo aprovada para execução;
* sumário da dissertação consolidado;
* definição do **MVP acadêmico**.

### Risco principal

Abrir novas frentes em vez de congelar escopo.

### Mitigação

Toda nova ideia deve ser classificada como:

* entra no MVP;
* vira trabalho futuro;
* vai para backlog pós-defesa.

---

## Abril de 2026 — Consolidação arquitetural e técnica

 Objetivo do mês

Fazer o repositório “parar de brigar consigo mesmo” e virar uma base coerente e demonstrável.

| Semana   | Período       | Atividades                                                                  | Entregáveis                                                          | Critério de conclusão                                    |
| -------- | ------------- | --------------------------------------------------------------------------- | -------------------------------------------------------------------- | -------------------------------------------------------- |
| Semana 1 | 01/04 a 05/04 | Limpar inconsistências entre README, versão, API, CLI e estrutura do pacote | Repositório com identidade arquitetural coerente                     | Documentação e código passam a refletir a mesma proposta |
| Semana 2 | 06/04 a 12/04 | Isolar ou remover legado que conflita com a arquitetura escolhida           | Legado separado, removido ou marcado como descontinuado              | Não há mais ambiguidade sobre o núcleo da framework      |
| Semana 3 | 13/04 a 19/04 | Implementar cenário padrão demonstrativo                                    | `BasicMarketScenario` ou equivalente funcional                       | Cenário roda com configuração padrão                     |
| Semana 4 | 20/04 a 26/04 | Criar parametrização inicial do cenário                                     | Parâmetros mínimos para agentes, ativos, ruído, notícias e confiança | Usuário consegue alterar cenário por argumentos          |
| Semana 5 | 27/04 a 30/04 | Criar exemplos e testes básicos                                             | Exemplos funcionais + suíte mínima de testes                         | Exemplos executam e testes essenciais passam             |

### Entregáveis formais de abril

* repositório coerente com a dissertação;
* núcleo mínimo da framework implementado;
* cenário padrão funcional;
* exemplos de uso;
* testes básicos.

Risco principal

Gastar abril inteiro apenas refatorando sem fechar algo executável.

Mitigação

Abril precisa terminar com algo que rode de ponta a ponta, mesmo simples.

---

## Maio de 2026 — Experimentos, resultados e redação técnica

Objetivo do mês

Gerar evidência acadêmica suficiente para sustentar a contribuição da framework.

| Semana   | Período       | Atividades                                                     | Entregáveis                              | Critério de conclusão                               |
| -------- | ------------- | -------------------------------------------------------------- | ---------------------------------------- | --------------------------------------------------- |
| Semana 1 | 01/05 a 10/05 | Definir protocolo experimental e cenários de avaliação         | Plano experimental formal                | Experimentos definidos com parâmetros e objetivos   |
| Semana 2 | 11/05 a 17/05 | Executar cenário padrão e variações paramétricas               | Dados brutos e logs de execução          | Rodadas completas realizadas                        |
| Semana 3 | 18/05 a 24/05 | Gerar gráficos, tabelas e interpretação inicial                | Conjunto de resultados visuais           | Resultados já comparáveis e interpretáveis          |
| Semana 4 | 25/05 a 31/05 | Escrever capítulos de implementação, experimentos e resultados | Capítulos técnicos em versão quase final | Texto técnico cobre arquitetura, execução e achados |

### Entregáveis formais de maio

* experimento 1: cenário padrão;
* experimento 2: variação de parâmetros;
* experimento 3: comparação entre cenários;
* gráficos e tabelas;
* capítulos técnicos praticamente fechados.

Risco principal

Tentar provar coisas demais sobre mercados em vez de provar que a framework funciona e é útil.

Mitigação

O foco dos resultados deve ser:

* flexibilidade;
* capacidade de cenarização;
* reprodutibilidade;
* valor metodológico.

---

## Junho de 2026 — Integração, revisão e preparação da defesa

Objetivo do mês

Transformar o material acumulado em uma dissertação pronta para submissão/depósito.

| Semana   | Período       | Atividades                                                   | Entregáveis                             | Critério de conclusão                                                  |
| -------- | ------------- | ------------------------------------------------------------ | --------------------------------------- | ---------------------------------------------------------------------- |
| Semana 1 | 01/06 a 07/06 | Integrar capítulos e revisar coerência global                | Primeira versão integral da dissertação | Documento completo, mesmo com ajustes pendentes                        |
| Semana 2 | 08/06 a 14/06 | Revisar argumentação, limitações, conclusões e contribuições | Capítulos finais revisados              | A narrativa do trabalho fica coesa                                     |
| Semana 3 | 15/06 a 21/06 | Revisão formal: citações, figuras, tabelas, formatação       | Versão revisada tecnicamente            | Estrutura acadêmica consistente                                        |
| Semana 4 | 22/06 a 30/06 | Preparar slides e roteiro de defesa                          | Apresentação preliminar                 | Slides cobrem problema, solução, arquitetura, experimentos e conclusão |

### Entregáveis formais de junho

* dissertação completa;
* revisão estrutural e textual;
* apresentação da defesa;
* alinhamento final entre texto e repositório.

Risco principal

Chegar em junho ainda implementando funcionalidades novas.

Mitigação

A partir de junho, funcionalidade nova só entra se corrigir algo essencial para a defesa.

---

## Julho de 2026 — Margem de segurança e fechamento

Objetivo do mês

Absorver atrasos, responder correções e entregar a versão definitiva.

| Semana   | Período       | Atividades                               | Entregáveis                    | Critério de conclusão         |
| -------- | ------------- | ---------------------------------------- | ------------------------------ | ----------------------------- |
| Semana 1 | 01/07 a 07/07 | Ajustes finais no texto e no repositório | Versão refinada da dissertação | Correções incorporadas        |
| Semana 2 | 08/07 a 14/07 | Revisão de apresentação e ensaio         | Defesa amadurecida             | Argumentação oral consistente |
| Semana 3 | 15/07 a 21/07 | Resposta a observações finais            | Versão final pronta            | Pendências resolvidas         |
| Semana 4 | 22/07 a 31/07 | Depósito/defesa/entrega definitiva       | Encerramento formal            | Trabalho concluído            |

### Entregáveis formais de julho

* versão final da dissertação;
* apresentação final;
* repositório organizado para acompanhamento da banca;
* defesa ou depósito concluído.

---

## 3. Lista de marcos principais

| Marco | Data-alvo  | Descrição                                       |
| ----- | ---------- | ----------------------------------------------- |
| M1    | 31/03/2026 | Escopo congelado e arquitetura definida         |
| M2    | 30/04/2026 | Repositório coerente e cenário padrão funcional |
| M3    | 31/05/2026 | Experimentos e capítulos técnicos concluídos    |
| M4    | 30/06/2026 | Dissertação completa e slides prontos           |
| M5    | 31/07/2026 | Versão final entregue / defesa concluída        |

---

## 4. Estrutura mínima defendível do MercadoLab

Para não perder o foco, este seria o **mínimo defendível** até a defesa:

| Componente                             | Necessidade |
| -------------------------------------- | ----------- |
| Tipos básicos de domínio               | Obrigatório |
| Scheduler ou mecanismo de execução     | Obrigatório |
| Cenário padrão funcional               | Obrigatório |
| Parametrização do cenário              | Obrigatório |
| Exemplos de uso                        | Obrigatório |
| Testes automatizados mínimos           | Obrigatório |
| Múltiplos plugins avançados            | Opcional    |
| Integração com RL/ML                   | Opcional    |
| CLI sofisticada                        | Opcional    |
| Muitos tipos de agentes especializados | Opcional    |

---

## 5. Dependências entre etapas

| Etapa dependente           | Depende de                |
| -------------------------- | ------------------------- |
| Implementar cenário padrão | Arquitetura definida      |
| Executar experimentos      | Cenário padrão funcional  |
| Escrever resultados        | Experimentos concluídos   |
| Preparar defesa            | Dissertação completa      |
| Finalizar depósito         | Revisão e validação final |

---

## 6. Riscos do projeto e resposta sugerida

| Risco                           | Impacto | Probabilidade | Resposta                                      |
| ------------------------------- | ------- | ------------- | --------------------------------------------- |
| Escopo crescer novamente        | Alto    | Alto          | Congelar MVP em março                         |
| Refatoração sem fim             | Alto    | Médio         | Abril termina com cenário rodando             |
| Experimentos excessivos         | Médio   | Alto          | Limitar a 3 blocos de avaliação               |
| Dissociação entre tese e GitHub | Alto    | Médio         | Revisar coerência em junho                    |
| Perfeccionismo no framework     | Alto    | Alto          | Priorizar “defensável” em vez de “definitivo” |

---

## 7. Critérios objetivos de conclusão

## Até 31 de março

* escopo decidido;
* arquitetura escolhida;
* capítulos mapeados;
* backlog cortado.

## Até 30 de abril

* repositório coerente;
* cenário default executável;
* parâmetros iniciais expostos;
* exemplos prontos;
* testes mínimos rodando.

## Até 31 de maio

* experimentos executados;
* gráficos e tabelas gerados;
* texto técnico praticamente concluído.

## Até 30 de junho

* dissertação completa;
* revisão estrutural feita;
* apresentação pronta.

## Até 31 de julho

* versão final corrigida;
* defesa ou depósito concluído.

---

## 8. Recomendação de rotina semanal

Para esse cronograma funcionar, eu sugiro uma rotina simples:

| Bloco da semana  | Foco                                                      |
| ---------------- | --------------------------------------------------------- |
| Início da semana | Implementação ou redação principal                        |
| Meio da semana   | Consolidação, testes, figuras, tabelas                    |
| Fim da semana    | Revisão, registro do progresso e ajuste da próxima semana |

E sempre manter três trilhas visíveis:

* **Código**
* **Dissertação**
* **Resultados**

Sem deixar nenhuma delas parada por muitas semanas.

---

## 9. Síntese executiva

O cronograma mais seguro para você é este:

* **Março:** decidir e travar
* **Abril:** consolidar e fazer rodar
* **Maio:** experimentar e escrever
* **Junho:** revisar e preparar defesa
* **Julho:** corrigir e concluir
