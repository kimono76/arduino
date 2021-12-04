
void setup() {
    //LED 13
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("HIGH_1");
    delay(1500);
    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    Serial.println("-");
    delay(1000);

    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("HIGH_2");
    delay(1500);

    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("LOW______");
    delay(5000);
}
