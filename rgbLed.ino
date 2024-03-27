#define BLUE 6
#define GREEN 4
#define RED 2
#define DELAYTIME 4


void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  int i;
  int redValue;
  int greenValue;
  int blueValue;

  i = 0;
  redValue = 255;
  greenValue = 0;
  blueValue = 0;

  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  while(i < 255)
  {
    redValue--;
    greenValue++;
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    i++;
    delay(DELAYTIME);
  }
  i = 0;
  while(i < 255)
  {
    greenValue--;
    blueValue++;
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    i++;
    delay(DELAYTIME);
  }
  i = 0;
  while(i < 255)
  {
    blueValue--;
    redValue++;
    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    i++;
    delay(DELAYTIME);
  }
}