int LED_RED = 13;

void setup() {
    Serial.begin(9600);
    pinMode(LED_RED, OUTPUT);
}

void loop() {
    digitalWrite(LED_RED, LOW);
    delay(500);
    digitalWrite(LED_RED, HIGH);
    delay(500);
}
