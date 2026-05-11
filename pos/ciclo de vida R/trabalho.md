# Trabalho (10 pontos): Monitoramento de Entregas e Risco de Atraso (Base R)

* **Disciplina**: CICLO DE VIDA E INTRODUÇÃO À LINGUAGEM R
* **Professor**: Raphael Mauricio Sanches de Jesus
* **Entrega**: **Link do Colab** (aberto para visualização)
* **Data de entrega**: 17/02/2025

## Contexto (mundo real)

Você faz parte de um time de dados em uma empresa de e-commerce. A operação quer responder:

1. Qual é o **prazo típico** de entrega? (média/mediana, quartis)
2. Existe **assimetria/outliers** (entregas muito atrasadas)?
3. Qual a chance de **atrasar** e qual a chance de estourar o SLA?
4. Se chegarem **muitas entregas “problemáticas” no mesmo dia**, qual o risco? (simulação)

Você terá uma amostra pequena (como é comum no começo de um projeto) e vai usar **simulação** para estimar riscos.

---

## Regras (obrigatórias)

### Seed pessoal

Regra: `seed <- (letras_primeiro_nome * 100) + letras_sobrenome`, depois `set.seed(seed)`.

* Exemplo: “Raphael” (7) e “Mauricio” (8) → seed = 7*100 + 8 = 708

### Entrega

* 1 link do Colab com permissão “qualquer pessoa com o link pode visualizar”
* notebook deve rodar do início ao fim

---

## Dados (copie no R)

```r
# tempo de entrega em dias (amostra histórica de 30 pedidos)
entrega_dias <- c(
  2, 3, 3, 4, 2, 5, 4, 3, 6, 2,
  3, 4, 5, 3, 2, 4, 3, 7, 2, 4,
  3, 4, 5, 3, 2, 4, 3, 9, 2, 12
)

# tipo de frete (mesmo tamanho do vetor acima)
frete <- c(
  "economico","padrao","padrao","padrao","economico","padrao","padrao","padrao","expresso","economico",
  "padrao","padrao","padrao","padrao","economico","padrao","padrao","padrao","economico","padrao",
  "padrao","padrao","padrao","padrao","economico","padrao","padrao","padrao","economico","padrao"
)
```

---

## SLA (regra de negócio)

* **Entrega no prazo** se `entrega_dias <= 5`
* **Atraso** se `entrega_dias > 5`
* **Atraso grave** se `entrega_dias >= 8`

---

## Tarefas

### 1) Resumo estatístico (2,5 pts)

Usando `entrega_dias`:

* média (`mean`) e mediana (`median`)
* moda **sem função** (table + which.max)
* `summary(entrega_dias)`
* `quantile(entrega_dias, probs=c(0.25,0.5,0.75))`

**Interpretação (3–5 linhas):**
A mediana representa melhor que a média? Existe outlier? cite qual(is).

---

### 2) Classificação com `ifelse` (2,0 pts)

Crie:

* `status <- ifelse(entrega_dias <= 5, "no_prazo", "atraso")`
* `grave <- ifelse(entrega_dias >= 8, "grave", "nao_grave")`

Mostre:

* `table(status)` e `prop.table(table(status))`
* `table(grave)` e `prop.table(table(grave))`

---

### 3) Probabilidades “na prática” (1,5 pts)

Calcule:

* `P(atraso)` = proporção de `entrega_dias > 5`
* `P(atraso_grave)` = proporção de `entrega_dias >= 8`

Depois, calcule essas probabilidades **separadas por frete** (econômico/padrão/expresso) usando:

* filtros simples com `frete == "padrao"` etc. (não precisa data.frame)

---

### 4) Função genérica `prob_evento` (1,5 pts)

Crie:

```r
prob_evento <- function(n, evento) {
  # simule n entregas escolhendo da amostra histórica (com replace=TRUE)
}
```

* O “experimento” agora é: **sortear tempos de entrega** usando `sample(entrega_dias, n, replace=TRUE)`
* `evento` recebe o vetor sorteado e devolve vetor lógico

Use para estimar:

* `P(atraso)` em `n = 20000`
* `P(atraso_grave)` em `n = 20000`

---

### 5) Gráficos (2,0 pts) — 4 gráficos base

Você deve gerar:

1. **Histograma** de `entrega_dias` (0,5)
2. **Barplot** com a contagem de `status` (0,5)
3. **Pie** com a proporção de `status` (0,5)
4. **Linha (convergência)**: estime `P(atraso)` para `n = c(100,500,1000,2000,5000,10000,20000)` e faça `plot(..., type="l")` (0,5)

Todos com `main` e eixos quando fizer sentido.

---

### 6) Depuração (0,5 pt)

Reproduza e corrija o erro:

* `plot(1:10, 1:10, type="1")` (erro)
* explique em comentário
* corrija para `type="l"` (funcionando)
  Use `try()` para não parar o notebook.

---

## Bloco de verificação (obrigatório)

No final, `cat()` com:

* seed
* média/mediana
* P(atraso) e P(atraso_grave) (amostra)
* P(atraso) e P(atraso_grave) (simulação com n=20000)
* proporção de `status == "atraso"`

---

## Critérios (10,0)

* Medidas e interpretação (2,5)
* Classificação com ifelse + tabelas (2,0)
* Probabilidades por grupo de frete (1,5)
* Função `prob_evento` e simulação (1,5)
* 4 gráficos base (2,0)
* Depuração (0,5)
