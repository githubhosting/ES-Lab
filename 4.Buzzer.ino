const int buzzerPin = 5;

void setup()
{
    pinMode(buzzerPin, OUTPUT);
}

void loop()
{
    tone(buzzerPin, 500, 1000);
    delay(1000);
}