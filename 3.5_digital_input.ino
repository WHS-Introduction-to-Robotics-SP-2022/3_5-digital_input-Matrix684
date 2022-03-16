int PIN=7;
int ON=0;

void setup() {
  pinMode(PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  ON=digitalRead(7);
  delay(100);
  Serial.println(ON);
  
}
