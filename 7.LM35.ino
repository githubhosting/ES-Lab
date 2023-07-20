const int lm35_pin = A1;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int temp_adc_val;
    float temp_val;
    temp_adc_val = analogRead(lm35_pin);
    temp_val = (temp_adc_val * 4.88);
    temp_val = (temp_val / 10);
    Serial.print("Temperature = ");
    Serial.print(temp_val);
    Serial.print(" Degree Celsius\n");
    delay(1000);
}