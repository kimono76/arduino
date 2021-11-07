void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // S
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(200);
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(200);
  digitalWrite(13,HIGH);
  delay(250);
  
  //space
  digitalWrite(13,LOW);
  delay(750);

  // O
  digitalWrite(13,HIGH);
  delay(1000);

    //space
  digitalWrite(13,LOW);
  delay(750);
  
  //S
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(200);
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(200);
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  
  //silence 4 sec
  digitalWrite(13,LOW);
  delay(4000);
}
