void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  for (int i = 2; i <= 8; i++)
  {
    pinMode(i, 1);
    digitalWrite(i, i&1);
  }
  pinMode(A0, 1);
  digitalWrite(A0, 1);
  pinMode(A4, 1);
  digitalWrite(A4, 0);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print(analogRead(A1));
  Serial.print(" ");
  Serial.print(analogRead(A2));
  Serial.print(" ");
  Serial.println(analogRead(A3));
}
