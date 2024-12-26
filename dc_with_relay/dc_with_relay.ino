int relay =8;

void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relay,HIGH);
  delay(5000);
  digitalWrite(relay,LOW);
  delay(5000);

}
