#define ledPin 7
#define buttonPin 2

int buttonState = 0;
void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT);
}

void loop()
{
    buttonState = digitalRead(buttonPin);
    digitalWrite(LED_BUILTIN, HIGH);
    if (buttonState == HIGH)
        digitalWrite(ledPin, HIGH);
    else
        digitalWrite(ledPin, LOW);
}