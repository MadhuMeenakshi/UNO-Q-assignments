void setup() {
    pinMode(LED3_G, OUTPUT);
}

void loop() {
    digitalWrite(LED3_G, HIGH);
    delay(1000);

    digitalWrite(LED3_G, LOW);
    delay(1000);
}