
void setup() {
    Serial.begin(9600);
    Serial.setTimeout(1000);
}

void loop() {
    String myString = "";
    
    while(myString.equals("")){
        myString = Serial.readString();
    }
    if(!myString.equals("")){
        Serial.println(myString);
    }
    //Serial.println(myString);
}
