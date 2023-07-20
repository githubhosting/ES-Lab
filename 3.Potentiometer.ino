#define potPin A0;
#define ledPin 5;
int val = 0;

void setup()
{
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    val = analogRead(potPin);
    digitalWrite(ledPin, HIGH);
    delay(val);
    digitalWrite(ledPin, LOW);
    delay(val);
    Serial.println(val);
}