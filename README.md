# 🚀 SentinelaSul

## Sistema de Alerta para Reentrada de Detritos Espaciais

Projeto desenvolvido para a Global Solution FIAP 2026 na disciplina de Edge Computing & Computer Systems.

O SentinelaSul tem como objetivo auxiliar a Defesa Civil através de uma estação física de alerta baseada em Arduino, capaz de emitir sinais visuais e sonoros quando houver risco de reentrada de detritos espaciais.

---
## 🔗 Simulação Wokwi

Projeto disponível em:

https://wokwi.com/projects/466308906793410561


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

```
SENTINELASUL
Monitorando
```

### 🟡 Alerta Moderado

LED Amarelo ligado

LCD:

```
Objeto SAT-01
Risco Medio
```

### 🔴 Alerta Crítico

LED Vermelho ligado

Buzzer ativado

LCD:

```
ALERTA CRITICO
Impacto 20min
```




## 📷 Circuito do Projeto

![Circuito do Projeto](imagens/circuito.png)

O circuito foi desenvolvido no simulador Wokwi utilizando Arduino Uno, LCD I2C, LEDs, buzzer e botão de confirmação.

---

## 🚨 Demonstração de Alerta

![Alerta Crítico](imagens/alerta.png)

Exemplo do sistema exibindo um alerta crítico de possível impacto de detritos espaciais.
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
## 🎥 Demonstração em Vídeo

Assista à apresentação completa do projeto SentinelaSul:

👉 (https://youtu.be/lK1QHzgWM50?si=-PcuzvU_0WGG4I6b)

---

No vídeo são apresentados:

- Funcionamento da estação de alerta
- Simulação no Wokwi
- LEDs de status
- Buzzer de alerta
- Display LCD
- Confirmação de alerta pelo botão
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

