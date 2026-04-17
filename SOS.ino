int redLED = 8;
int dit = 250;
int dah = 700;
int longWait = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 1; i <= 3; i++)
  {
    digitalWrite(redLED,HIGH);
    delay(dit);
    digitalWrite(redLED,LOW);
    delay(dit);
  }

  delay(500);

  for (int i = 1; i <= 3; i++)
  {
    digitalWrite(redLED,HIGH);
    delay(dah);
    digitalWrite(redLED,LOW);
    delay(dah);
  }

  for (int i = 1; i <= 3; i++)
  {
    digitalWrite(redLED,HIGH);
    delay(dit);
    digitalWrite(redLED,LOW);
    delay(dit);
  }

  delay(longWait);
  
  
}
