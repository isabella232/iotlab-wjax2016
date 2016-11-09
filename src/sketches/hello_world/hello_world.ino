/* 
 * IoT-Lab: "hello, World!", embedded version.
 * let the built-in LED of the NodeMCU board blink
 */

const int LED_PIN = BUILTIN_LED;

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_PIN, LOW);
    delay(500);
    digitalWrite(LED_PIN, HIGH);
    delay(500);
}
