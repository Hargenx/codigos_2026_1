# ============================================================
# GABARITO — Monitoramento de Entregas e Risco de Atraso (Base R)
# Professor (seed exemplo): Raphael Mauricio
# Seed (regra): Raphael (7) + Mauricio (8) => 7*100 + 8 = 708
# ============================================================

seed <- 708
set.seed(seed)

# ------------------------------------------------------------
# Dados
# ------------------------------------------------------------
entrega_dias <- c(
  2, 3, 3, 4, 2, 5, 4, 3, 6, 2,
  3, 4, 5, 3, 2, 4, 3, 7, 2, 4,
  3, 4, 5, 3, 2, 4, 3, 9, 2, 12
)

frete <- c(
  "economico","padrao","padrao","padrao","economico","padrao","padrao","padrao","expresso","economico",
  "padrao","padrao","padrao","padrao","economico","padrao","padrao","padrao","economico","padrao",
  "padrao","padrao","padrao","padrao","economico","padrao","padrao","padrao","economico","padrao"
)

# SLA
# no prazo: entrega_dias <= 5
# atraso:   entrega_dias > 5
# grave:    entrega_dias >= 8

# ------------------------------------------------------------
# 1) Resumo estatístico (média, mediana, moda, summary, quartis)
# ------------------------------------------------------------
media <- mean(entrega_dias)
mediana <- median(entrega_dias)

cat("Média:", media, "\n")
cat("Mediana:", mediana, "\n")

# Moda sem função
freq_entrega <- table(entrega_dias)
moda_txt <- names(freq_entrega)[which.max(freq_entrega)]
moda <- as.numeric(moda_txt)

cat("Frequências:\n")
print(freq_entrega)
cat("Moda:", moda, "\n\n")

cat("Summary(entrega_dias):\n")
print(summary(entrega_dias))

cat("\nQuartis (p25, p50, p75):\n")
print(quantile(entrega_dias, probs = c(0.25, 0.5, 0.75)))

# Interpretação (exemplo)
# A mediana tende a ser mais representativa quando há outliers.
# Aqui existem entregas bem altas (9 e 12), que puxam a média para cima.
# Por isso, a mediana costuma refletir melhor o "típico" do conjunto.

# ------------------------------------------------------------
# 2) Classificação com ifelse + tabelas
# ------------------------------------------------------------
status <- ifelse(entrega_dias <= 5, "no_prazo", "atraso")
grave <- ifelse(entrega_dias >= 8, "grave", "nao_grave")

cat("\nContagem status:\n")
print(table(status))
cat("Proporção status:\n")
print(prop.table(table(status)))

cat("\nContagem grave:\n")
print(table(grave))
cat("Proporção grave:\n")
print(prop.table(table(grave)))

# ------------------------------------------------------------
# 3) Probabilidades “na prática” e por frete
# ------------------------------------------------------------
P_atraso <- mean(entrega_dias > 5)
P_grave  <- mean(entrega_dias >= 8)

cat("\nP(atraso):", P_atraso, "\n")
cat("P(atraso_grave):", P_grave, "\n")

# por tipo de frete (sem data.frame, só filtro)
tipos <- unique(frete)

cat("\nProbabilidades por frete:\n")
for (t in tipos) {
  idx <- frete == t
  P_a <- mean(entrega_dias[idx] > 5)
  P_g <- mean(entrega_dias[idx] >= 8)
  cat("Frete =", t, "| P(atraso) =", P_a, "| P(grave) =", P_g, "\n")
}

# ------------------------------------------------------------
# 4) Função genérica prob_evento + simulação (20000)
# ------------------------------------------------------------
prob_evento <- function(n, evento) {
  sim <- sample(entrega_dias, size = n, replace = TRUE)
  mean(evento(sim))
}

evento_atraso <- function(v) v > 5
evento_grave  <- function(v) v >= 8

P_atraso_sim <- prob_evento(20000, evento_atraso)
P_grave_sim  <- prob_evento(20000, evento_grave)

cat("\nSimulação (n=20000):\n")
cat("P(atraso) sim =", P_atraso_sim, "\n")
cat("P(grave) sim  =", P_grave_sim, "\n")

# ------------------------------------------------------------
# 5) Gráficos base (4 gráficos)
# ------------------------------------------------------------

# 5.1 Histograma de entrega_dias
hist(entrega_dias,
     main = "Histograma: tempo de entrega (dias)",
     xlab = "Dias",
     ylab = "Frequência")

# 5.2 Barplot de status
barplot(table(status),
        main = "Status de entrega (contagem)",
        xlab = "Status",
        ylab = "Quantidade")

# 5.3 Pie de status
pie(prop.table(table(status)),
    main = "Status de entrega (proporção)")

# 5.4 Linha (convergência) de P(atraso)
ns <- c(100, 500, 1000, 2000, 5000, 10000, 20000)
ps <- sapply(ns, function(k) prob_evento(k, evento_atraso))

plot(ns, ps,
     type = "l",
     main = "Convergência: P(atraso) com amostras maiores",
     xlab = "Tamanho da amostra (n)",
     ylab = "Probabilidade estimada de atraso")

# ------------------------------------------------------------
# 6) Depuração obrigatória (plot type="1")
# ------------------------------------------------------------
try(plot(1:10, 1:10, type = "1"))  # erro esperado

# Explicação: type não aceita "1". Aceita letras como:
# "p" (pontos), "l" (linha), "b" (pontos+linha), etc.
plot(1:10, 1:10,
     type = "l",
     main = "Plot corrigido (type='l')",
     xlab = "x",
     ylab = "y")

# ------------------------------------------------------------
# Bloco de verificação (cat)
# ------------------------------------------------------------
cat("\n===== VERIFICAÇÃO =====\n")
cat("seed =", seed, "\n")
cat("Média(entrega_dias) =", media, "\n")
cat("Mediana(entrega_dias) =", mediana, "\n")
cat("P(atraso) amostra =", P_atraso, "\n")
cat("P(grave) amostra  =", P_grave, "\n")
cat("P(atraso) sim (20000) =", P_atraso_sim, "\n")
cat("P(grave) sim (20000)  =", P_grave_sim, "\n")
cat("Proporção status=='atraso' =", mean(status == "atraso"), "\n")
cat("=======================\n")
