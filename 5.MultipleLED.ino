#define LED_PIN_1 11
#define LED_PIN_2 10
#define LED_PIN_3 9

void setup()
{
    pinMode(LED_PIN_1, OUTPUT);
    pinMode(LED_PIN_2, OUTPUT);
    pinMode(LED_PIN_3, OUTPUT);
}

void loop()
{
    digitalWrite(LED_PIN_1, HIGH);
    delay(1000);
    digitalWrite(LED_PIN_1, LOW);
    delay(1000);
    digitalWrite(LED_PIN_2, HIGH);
    delay(500);
    digitalWrite(LED_PIN_2, LOW);
    delay(500);
    digitalWrite(LED_PIN_2, HIGH);
    delay(500);
    digitalWrite(LED_PIN_2, LOW);
    delay(500);

    for (int i = 0; i < 3; i = i + 1)
    {
        digitalWrite(LED_PIN_3, HIGH);
        delay(500);
        digitalWrite(LED_PIN_3, LOW);
        delay(500);
    }
}