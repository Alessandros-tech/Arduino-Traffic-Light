// SEMAFORO CON PULSANTE E RESISTENZA DA 10KΩ (PULL-DOWN)

// LED auto
int ledRosso = 8;
int ledGiallo = 9;
int ledVerde = 10;

// LED pedoni
int pedRosso = 12;
int pedVerde = 13;

// Pulsante
int buttonPin = 7;

bool valore = true;

void setup() {
  pinMode(ledRosso, OUTPUT);
  pinMode(ledGiallo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(pedRosso, OUTPUT);
  pinMode(pedVerde, OUTPUT);
  
  pinMode(buttonPin, INPUT);  // uso pull-down esterno
}

void loop() {
  // semaforo auto normale
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledGiallo, LOW);
  digitalWrite(ledRosso, LOW);
  digitalWrite(pedVerde, LOW);
  digitalWrite(pedRosso, HIGH);

  // attesa 5 secondi o pulsante premuto
  unsigned long startTime = millis();
  while (millis() - startTime < 5000) {
    if (digitalRead(buttonPin) == HIGH) { // pulsante premuto
      attivaSemaforoPedonale();
      valore = false;
    }
  }
  if(valore) {
  // giallo auto
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledGiallo, HIGH);
  delay(2000);

  // rosso auto
  digitalWrite(ledGiallo, LOW);
  digitalWrite(ledRosso, HIGH);
  delay(5000);
  }
  valore = true;
}

void attivaSemaforoPedonale() {
  // giallo auto
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledGiallo, HIGH);
  delay(2000);
  
  // rosso auto
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledGiallo, LOW);
  digitalWrite(ledRosso, HIGH);

  // verde pedoni
  digitalWrite(pedRosso, LOW);
  digitalWrite(pedVerde, HIGH);

  delay(4000); // tempo attraversamento

  // lampeggio verde pedoni
  for (int i = 0; i < 5; i++) {
    digitalWrite(pedVerde, LOW);
    delay(300);
    digitalWrite(pedVerde, HIGH);
    delay(300);
  }

  // rosso pedoni
  digitalWrite(pedVerde, LOW);
  digitalWrite(pedRosso, HIGH);
}
