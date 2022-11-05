// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  if (digitalRead(2) == HIGH) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
    digitalWrite(8, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(8, LOW);
    digitalWrite(4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
    digitalWrite(7, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(7, LOW);
    digitalWrite(5, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(6, LOW);
    delay(10000000000000); // Wait for 10000000000000 millisecond(s)
  }
}