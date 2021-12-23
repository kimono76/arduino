
void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
    Serial.setTimeout(1000);
}

void loop() { 
    digitalWrite(LED_BUILTIN,LOW);
    String myString = "";
    int timer =200;

    while(myString.equals("")){
        myString = Serial.readString();
    }
    if(!myString.equals("")){        
        Serial.println(myString);
        if (myString[0] =='s')
        {
            timer= 5000;
        } 
        digitalWrite(LED_BUILTIN, HIGH);
        delay(timer);
    }
}
