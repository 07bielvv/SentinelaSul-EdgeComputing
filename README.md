# 🚀 SentinelaSul - Estação de Alerta Orbital

## 📌 Sobre o Projeto

O **SentinelaSul** é uma solução tecnológica desenvolvida para a Global Solution FIAP 2026, com o objetivo de monitorar riscos relacionados à reentrada de detritos espaciais na atmosfera terrestre e alertar órgãos da Defesa Civil de forma rápida e acessível.

A proposta busca aumentar a soberania de dados orbitais no Hemisfério Sul, fornecendo uma ferramenta capaz de transformar informações espaciais em alertas práticos para proteção da população.

---

# 🎯 Objetivo da Solução

Desenvolver uma estação física baseada em Arduino capaz de receber alertas de risco gerados pelo sistema SentinelaSul e informar operadores da Defesa Civil através de sinais visuais, sonoros e mensagens em display LCD.

A solução permite que os agentes sejam notificados mesmo sem monitorar constantemente um computador.

---

# 🛰️ Problema Resolvido

Atualmente, milhares de objetos orbitam a Terra, incluindo satélites desativados, estágios de foguetes e fragmentos de detritos espaciais.

Quando esses objetos retornam à atmosfera de forma descontrolada, podem representar riscos para regiões habitadas.

O Brasil não possui um sistema acessível e nacional para alertar autoridades locais sobre possíveis reentradas de objetos espaciais.

O SentinelaSul busca preencher essa lacuna.

---

# ⚙️ Funcionamento da Estação de Alerta

A estação opera em três níveis de risco:

## 🟢 Estado Normal

* LED Verde ligado.
* Sistema em monitoramento.
* Display LCD exibe mensagem de operação normal.

### Mensagem LCD

SENTINELASUL
Monitorando

---

## 🟡 Alerta Moderado

* LED Amarelo ligado.
* Display exibe informações do objeto detectado.
* Necessita atenção da Defesa Civil.

### Mensagem LCD

Objeto: SL-001
Risco Médio

---

## 🔴 Alerta Crítico

* LED Vermelho ligado.
* Buzzer acionado.
* Display informa risco iminente.

### Mensagem LCD

ALERTA CRÍTICO
Impacto: 20 min

---

## 🔘 Confirmação do Alerta

Quando o agente pressiona o botão de confirmação:

* O buzzer é desligado.
* O alerta permanece registrado.
* O sistema informa que o alerta foi recebido.

### Mensagem LCD

Alerta Recebido
Defesa Civil OK

---

# 🛠️ Componentes Utilizados

* Arduino Uno
* Display LCD 16x2 I2C
* LED Verde
* LED Amarelo
* LED Vermelho
* Buzzer
* Push Button
* Resistores 220Ω
* Protoboard virtual (Wokwi)

---

# 💻 Tecnologias Utilizadas

* Arduino C++
* Wokwi Simulator
* GitHub
* Git
* LCD I2C Library

---

# 📂 Estrutura do Projeto

```text
SentinelaSul/
│
├── README.md
├── codigo/
│   └── SentinelaSul.ino
│
├── imagens/
│   ├── circuito.png
│   └── funcionamento.png
│
└── documentacao/
    └── relatorio.pdf
```

---

# ▶️ Como Executar

1. Acesse o simulador Wokwi.
2. Abra o projeto SentinelaSul.
3. Clique em "Start Simulation".
4. Observe os estados de alerta.
5. Utilize o botão para confirmar o recebimento dos alertas.

---

# 📊 Benefícios da Solução

* Baixo custo de implementação.
* Fácil manutenção.
* Escalabilidade para municípios de qualquer porte.
* Alertas visuais e sonoros instantâneos.
* Integração com sistemas de monitoramento orbital.
* Apoio à Defesa Civil brasileira.

---

# 🌎 Objetivos de Desenvolvimento Sustentável (ODS)

O projeto contribui diretamente para:

* ODS 9 – Indústria, Inovação e Infraestrutura
* ODS 11 – Cidades e Comunidades Sustentáveis
* ODS 13 – Ação Contra a Mudança Global do Clima

---

# 👥 Integrantes

Gabriel Souza Alexandre Silva — RM 572607

Marcelo Antônio Scoleso Júnior — RM 571626

João Paulo Francisco de Oliveira — RM 571306

---

# 🎓 Instituição

FIAP – Faculdade de Informática e Administração Paulista

Global Solution 2026

Curso: Engenharia de Software

Disciplina: Edge Computing & Computer Systems

Professor: Paulo Marcotti e Lucas Demetrius

---

# 📜 Licença

Projeto acadêmico desenvolvido exclusivamente para fins educacionais na Global Solution FIAP 2026.
