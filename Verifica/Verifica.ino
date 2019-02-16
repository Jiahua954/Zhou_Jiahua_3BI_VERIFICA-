int ROSSO = 13;
int GIALLO = 11;
int BLU = 7;
int VERDE = 5;
int T;

void setup() {
  Serial.begin(9600);
  pinMode(ROSSO, OUTPUT);
  pinMode(GIALLO, OUTPUT);
  pinMode(BLU, OUTPUT);
  pinMode(VERDE, OUTPUT);
  Tempo();
}
void loop() {
  digitalWrite(ROSSO, HIGH);
  digitalWrite(GIALLO, LOW);
  digitalWrite(BLU, LOW);
  digitalWrite(VERDE, LOW);
  delay(T);

  digitalWrite(ROSSO, LOW);
  digitalWrite(GIALLO, HIGH);
  digitalWrite(BLU, LOW);
  digitalWrite(VERDE, LOW);
  delay(T);

  digitalWrite(ROSSO, LOW);
  digitalWrite(GIALLO, LOW);
  digitalWrite(BLU, HIGH);
  digitalWrite(VERDE, LOW);
  delay(T);

  digitalWrite(ROSSO, LOW);
  digitalWrite(GIALLO, LOW);
  digitalWrite(BLU, LOW);
  digitalWrite(VERDE, HIGH);
  delay(T);
    
}
void Tempo(){
  Serial.println ("Quanti secondi vuoi far durare ogni lampeggio?");
  while(Serial.available() == 0) {};
  T = Serial.readString().toInt();
  T = T*1000;
}
