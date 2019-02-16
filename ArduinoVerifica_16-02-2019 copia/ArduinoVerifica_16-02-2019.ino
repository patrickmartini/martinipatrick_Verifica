int rosso = 13;
int giallo = 11;
int bianco = 7;
int verde = 5;
int tempo;
int cicli;

void setup() {
  Serial.begin(9600);
  pinMode(rosso, OUTPUT);
  pinMode(giallo, OUTPUT);
  pinMode(bianco, OUTPUT);
  pinMode(verde, OUTPUT);
  tempoCambio();
}
void loop() {
  digitalWrite(rosso, HIGH);
  digitalWrite(giallo, LOW);
  digitalWrite(bianco, LOW);
  digitalWrite(verde, LOW);
  delay(tempo);

  digitalWrite(rosso, LOW);
  digitalWrite(giallo, HIGH);
  digitalWrite(bianco, LOW);
  digitalWrite(verde, LOW);
  delay(tempo);

  digitalWrite(rosso, LOW);
  digitalWrite(giallo, LOW);
  digitalWrite(bianco, HIGH);
  digitalWrite(verde, LOW);
  delay(tempo);

  digitalWrite(rosso, LOW);
  digitalWrite(giallo, LOW);
  digitalWrite(bianco, LOW);
  digitalWrite(verde, HIGH);
  delay(tempo);
    
}
void tempoCambio(){
  Serial.println ("quanto vuoi far durare il tempo di un lampeggio in secondi?");
  while(Serial.available() == 0) {};
  tempo = Serial.readString().toInt();
  tempo = tempo*1000;
}

/*
void contatoreCicli(){
  Serial.println ("quanto cicli vuoi fare?");
  while(Serial.available() == 0) {};
  cicli = Serial.readString().toInt();
}
*/
