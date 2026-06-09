#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int verde = 2;
const int amarelo = 3;
const int vermelho = 4;
const int buzzer = 5;
const int botao = 6;

void setup() {

  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);

  pinMode(buzzer, OUTPUT);
  pinMode(botao, INPUT_PULLUP);

  lcd.init();
  lcd.backlight();

  estadoNormal();
}

void loop() {

  delay(5000);

  alertaMedio();

  delay(5000);

  alertaCritico();

  while (digitalRead(botao) == HIGH) {
  }

  confirmarAlerta();

  delay(5000);

  estadoNormal();
}

void estadoNormal() {

  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, LOW);

  noTone(buzzer);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SENTINELASUL");
  lcd.setCursor(0,1);
  lcd.print("Monitorando");
}

void alertaMedio() {

  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(vermelho, LOW);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Objeto SAT-01");
  lcd.setCursor(0,1);
  lcd.print("Risco Medio");
}

void alertaCritico() {

  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);

  tone(buzzer, 1000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ALERTA");
  lcd.setCursor(0,1);
  lcd.print("Impacto 20min");
}

void confirmarAlerta() {

  noTone(buzzer);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Recebido");
  lcd.setCursor(0,1);
  lcd.print("Defesa Civil");
}
