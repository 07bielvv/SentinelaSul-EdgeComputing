# 🚀 SentinelaSul

## Sistema de Alerta para Reentrada de Detritos Espaciais

Projeto desenvolvido para a Global Solution FIAP 2026 na disciplina de Edge Computing & Computer Systems.

O SentinelaSul tem como objetivo auxiliar a Defesa Civil através de uma estação física de alerta baseada em Arduino, capaz de emitir sinais visuais e sonoros quando houver risco de reentrada de detritos espaciais.

---

## 🎯 Objetivo

Desenvolver uma estação de alerta de baixo custo capaz de:

- Monitorar eventos enviados pelo sistema central
- Alertar operadores da Defesa Civil
- Emitir alertas visuais através de LEDs
- Emitir alertas sonoros através de buzzer
- Exibir informações em LCD 16x2
- Permitir confirmação do alerta através de botão

---

## 🛠 Componentes Utilizados

- Arduino Uno
- LCD 16x2 I2C
- LED Verde
- LED Amarelo
- LED Vermelho
- Buzzer
- Push Button
- Resistores 220Ω

---

## ⚙ Funcionamento

### 🟢 Estado Normal

LED Verde ligado

LCD:

```text
SENTINELASUL
Monitorando
```

### 🟡 Alerta Moderado

LED Amarelo ligado

LCD:

```text
Objeto SAT-01
Risco Medio
```

### 🔴 Alerta Crítico

LED Vermelho ligado

Buzzer ativado

LCD:

```text
ALERTA CRITICO
Impacto 20min
```

### 🔘 Confirmação

Ao pressionar o botão:

- Buzzer desligado
- Alerta confirmado
- LCD atualizado

---

## 💻 Tecnologias Utilizadas

- Arduino C++
- Wokwi Simulator
- GitHub
- Git

---

## 🔗 Simulação Wokwi

Cole aqui o link do seu projeto Wokwi.

---

## 👨‍💻 Integrantes

| Nome | RM |
|--------|--------|
| Gabriel Souza Alexandre Silva | 572607 |
| Marcelo Antônio Scoleso Júnior | 571626 |
| João Paulo Francisco de Oliveira | 571306 |

---

## 🎓 Instituição

FIAP - Engenharia de Software

Global Solution 2026

Disciplina: Edge Computing & Computer Systems

