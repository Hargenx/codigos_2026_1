# Prática 2 — Missões de Arquitetura em Nuvem

## Disciplina: Computação em Nuvem

Nesta prática, vocês irão atuar como uma pequena equipe de consultoria em tecnologia. O objetivo é analisar cenários reais, propor uma solução em nuvem e justificar as escolhas feitas.

A atividade **não exige programação** e **não exige acesso à AWS, Azure ou Google Cloud**. O foco será em compreender o problema, desenhar uma solução e relacionar os componentes escolhidos com serviços equivalentes nos principais provedores de nuvem.

---

## Objetivos da atividade

Ao final da prática, o grupo deverá ser capaz de:

* identificar necessidades de um sistema;
* propor uma arquitetura simples em nuvem;
* diferenciar componentes como aplicação, banco de dados, storage, fila, autenticação e monitoramento;
* pensar em segurança da informação;
* comparar soluções entre Azure, AWS e Google Cloud;
* justificar tecnicamente suas decisões.

---

## Orientações gerais

A turma será dividida em grupos.

Para cada cenário, o grupo deverá entregar:

1. identificação do problema principal;
2. desenho simples da arquitetura proposta;
3. lista dos componentes escolhidos;
4. justificativa das escolhas;
5. uma decisão de segurança;
6. tabela relacionando a solução com Azure, AWS e Google Cloud.

O desenho pode ser feito em folha, quadro, PowerPoint, Canva, Draw.io, Mermaid ou qualquer outra ferramenta visual.

Tempo sugerido para cada cenário: **25 a 40 minutos**.

---

## Cenário 1 — A Cantina Sumiu com Meu Pedido

A faculdade possui uma cantina muito movimentada. Nos horários de intervalo, muitos alunos tentam comprar lanche ao mesmo tempo. Com isso, as filas ficam grandes, alguns pedidos são anotados de forma errada e os funcionários têm dificuldade para saber quais produtos vendem mais.

A direção da faculdade deseja criar uma solução digital simples para organizar os pedidos da cantina.

O sistema deverá permitir que os alunos:

* visualizem o cardápio;
* façam pedidos antecipados;
* acompanhem o status do pedido;
* recebam aviso quando o pedido estiver pronto;
* consultem pedidos anteriores.

Os funcionários da cantina deverão conseguir:

* visualizar pedidos pendentes;
* marcar pedidos como prontos;
* consultar os produtos mais vendidos;
* identificar horários de maior movimento.

O sistema precisa funcionar bem principalmente nos horários de intervalo, quando muitos alunos podem acessar ao mesmo tempo.

## Tarefa do grupo

Proponha uma arquitetura em nuvem para esse sistema.

O grupo deverá responder:

1. Onde os alunos acessariam o sistema?
2. Onde ficariam armazenados os pedidos?
3. Onde ficariam armazenadas as imagens dos produtos?
4. Como o aluno seria avisado de que o pedido está pronto?
5. Como a solução poderia lidar com muitos acessos ao mesmo tempo?
6. Que cuidado de segurança seria necessário?

## Entrega esperada

O grupo deverá apresentar:

* um desenho da arquitetura;
* os componentes escolhidos;
* uma justificativa curta;
* uma decisão de segurança;
* uma tabela relacionando a solução com Azure, AWS e Google Cloud.

---

## Cenário 2 — A Secretaria Digital da Faculdade

A secretaria da faculdade recebe diariamente muitos pedidos de documentos por e-mail, telefone e atendimento presencial. Os alunos solicitam documentos como declaração de matrícula, histórico escolar, segunda via de boleto, comprovantes e documentos para estágio.

Atualmente, há problemas como:

* e-mails perdidos;
* demora no atendimento;
* dificuldade para acompanhar o andamento das solicitações;
* risco de documentos serem enviados para pessoas erradas;
* falta de registro claro sobre quem acessou cada informação.

A faculdade deseja criar uma **Secretaria Digital**, onde os alunos possam solicitar documentos e acompanhar o andamento do pedido.

O sistema deverá permitir que:

* alunos façam login;
* alunos solicitem documentos;
* funcionários visualizem as solicitações;
* funcionários aprovem, rejeitem ou concluam pedidos;
* documentos sejam armazenados de forma segura;
* acessos importantes sejam registrados.

Como esse sistema lida com dados pessoais e acadêmicos, a segurança deve ser uma preocupação central.

## Tarefa do grupo 2

Proponha uma arquitetura em nuvem para a Secretaria Digital.

O grupo deverá responder:

1. Como o aluno acessaria o sistema?
2. Como garantir que um aluno não veja documentos de outro?
3. Onde os documentos gerados seriam armazenados?
4. Quem poderia aprovar ou rejeitar uma solicitação?
5. Como registrar quem acessou cada documento?
6. Como proteger senhas, chaves e informações sensíveis?

## Entrega esperada 2

O grupo deverá apresentar:

* um desenho da arquitetura;
* os componentes escolhidos;
* uma justificativa curta;
* uma decisão de segurança;
* uma tabela relacionando a solução com Azure, AWS e Google Cloud.

---

## Cenário 3 — Semana Acadêmica em Chamas

A faculdade irá realizar uma Semana Acadêmica com palestras, minicursos, oficinas e emissão de certificados. Em eventos anteriores, houve muitos problemas no primeiro dia de inscrição, pois vários alunos tentaram acessar o formulário ao mesmo tempo. O sistema travou, algumas inscrições não foram registradas corretamente e muitos alunos reclamaram.

Agora, a direção quer uma solução mais organizada e confiável.

O sistema deverá permitir que os alunos:

* façam inscrição no evento;
* escolham oficinas ou minicursos;
* consultem sua inscrição;
* recebam avisos sobre horários e salas;
* recebam certificado após participação.

A organização do evento deverá conseguir:

* acompanhar o número de inscritos;
* controlar a capacidade das oficinas;
* registrar presença;
* enviar comunicados;
* disponibilizar materiais dos palestrantes;
* emitir certificados.

O sistema precisa suportar picos de acesso, principalmente no primeiro dia de inscrições.

## Tarefa do grupo 3

Proponha uma arquitetura em nuvem para o sistema da Semana Acadêmica.

O grupo deverá responder:

1. Onde os alunos fariam a inscrição?
2. Onde ficariam armazenados os dados dos inscritos?
3. Onde ficariam os materiais das palestras?
4. Como emitir certificados sem travar o sistema?
5. Como enviar avisos aos inscritos?
6. Como monitorar se o sistema está sobrecarregado?

## Entrega esperada 3

O grupo deverá apresentar:

* um desenho da arquitetura;
* os componentes escolhidos;
* uma justificativa curta;
* uma decisão de segurança;
* uma tabela relacionando a solução com Azure, AWS e Google Cloud.

---

## Componentes que podem ser usados na solução

O grupo poderá escolher alguns dos componentes abaixo para montar sua arquitetura:

| Componente           | Função                                              |
| -------------------- | --------------------------------------------------- |
| Aplicação Web        | Interface usada pelos usuários                      |
| Aplicativo Mobile    | Interface para celular                              |
| API / Backend        | Parte responsável pelas regras do sistema           |
| Banco de Dados       | Armazena informações organizadas                    |
| Storage de Arquivos  | Armazena imagens, PDFs e documentos                 |
| Login / Identidade   | Controla quem pode acessar o sistema                |
| Fila de Mensagens    | Organiza tarefas que podem ser processadas depois   |
| Notificações         | Envia avisos para os usuários                       |
| Monitoramento        | Acompanha falhas, desempenho e uso                  |
| Backup               | Protege os dados contra perda                       |
| Firewall / Segurança | Ajuda a proteger o sistema contra acessos indevidos |
| Balanceador de Carga | Distribui acessos quando há muitos usuários         |

---

## Tabela de apoio: equivalência entre provedores

| Necessidade         | Azure                        | AWS                     | Google Cloud            |
| ------------------- | ---------------------------- | ----------------------- | ----------------------- |
| Hospedar aplicação  | App Service / Container Apps | Elastic Beanstalk / ECS | Cloud Run               |
| Banco de dados      | Azure SQL / PostgreSQL       | Amazon RDS              | Cloud SQL               |
| Armazenar arquivos  | Blob Storage                 | Amazon S3               | Cloud Storage           |
| Login e identidade  | Microsoft Entra ID           | IAM / Cognito           | IAM / Identity Platform |
| Segredos e senhas   | Key Vault                    | Secrets Manager         | Secret Manager          |
| Fila de mensagens   | Service Bus                  | SQS                     | Pub/Sub                 |
| Monitoramento       | Azure Monitor                | CloudWatch              | Cloud Monitoring        |
| Funções sob demanda | Azure Functions              | Lambda                  | Cloud Functions         |

---

## Modelo de resposta do grupo

## Nome do cenário

---

## Problema principal

Descreva, com suas palavras, qual é o principal problema do cenário.

---

## Componentes escolhidos

| Componente           | Será usado? | Por quê? |
| -------------------- | ----------- | -------- |
| Aplicação Web        |             |          |
| API / Backend        |             |          |
| Banco de Dados       |             |          |
| Storage de Arquivos  |             |          |
| Login / Identidade   |             |          |
| Fila de Mensagens    |             |          |
| Notificações         |             |          |
| Monitoramento        |             |          |
| Backup               |             |          |
| Segurança / Firewall |             |          |

## Desenho da arquitetura

Faça um desenho simples mostrando os usuários e os principais componentes da solução.

Exemplo:

```text
Usuário -> Aplicação -> API -> Banco de Dados
                            -> Storage
                            -> Notificações
                            -> Monitoramento
```

## Decisão de segurança

Qual cuidado de segurança o grupo adotou?

---

## Comparação com os provedores de nuvem

| Função         | Azure | AWS | Google Cloud |
| -------------- | ----- | --- | ------------ |
| Aplicação      |       |     |              |
| Banco de dados |       |     |              |
| Arquivos       |       |     |              |
| Segurança      |       |     |              |
| Monitoramento  |       |     |              |

## Justificativa final

Explique por que a arquitetura proposta pelo grupo é adequada para o cenário.
