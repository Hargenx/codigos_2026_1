# Necessário ambiente configurado com JVM e Spark
from pyspark.sql import SparkSession
from pyspark.sql.functions import col, sum, desc

# Inicializando a sessão Spark (Ponto de entrada do Big Data)
spark = SparkSession.builder \
    .appName("Varejo_Analytics") \
    .getOrCreate()

# Simulação: Carregando um dataset massivo de um bucket S3/GCS
# df = spark.read.csv("s3://dados-empresa/transacoes_2026.csv", header=True)

# Criando dados fictícios para demonstração
dados = [("RJ", "Eletrônicos", 1500.00), ("SP", "Roupas", 200.00), 
         ("RJ", "Eletrônicos", 3000.00), ("MG", "Livros", 50.00)]
colunas = ["Estado", "Categoria", "Valor"]

df_transacoes = spark.createDataFrame(dados, colunas)

# Transformação e Ação em cluster distribuído
resultado_agrupado = df_transacoes.groupBy("Estado", "Categoria") \
    .agg(sum("Valor").alias("Receita_Total")) \
    .orderBy(desc("Receita_Total"))

resultado_agrupado.show()

spark.close()