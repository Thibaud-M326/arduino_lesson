int buzzer = 12;

void setup()
{
    pinMode(buzzer, OUTPUT);
}

void loop()
{
    int i;

    i = 0;
    while(i < 255)
    {
        analogWrite(buzzer, i);
        delay(200);
        i += 31;
    }
    while(i > 0)
    {
        analogWrite(buzzer, i);
        delay(200);
        i -= 31;
    }
}