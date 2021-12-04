
void setup() {
    //LED 13
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("HIGH");
    delay(500);
    
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("LOW");
    delay(2000);
}
