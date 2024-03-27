const int ledPin = 13;
const int tiltPin = 2;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(tiltPin, INPUT);
    digitalWrite(tiltPin, HIGH);
}

void loop()
{
    int digitalVal;

    digitalVal = digitalRead(tiltPin);
    if(digitalVal == HIGH)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }
}