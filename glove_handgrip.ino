
void setup() {
  // put your setup code here, to run once:
  Serial.begin(2000000);
  //analogReference(EXTERNAL);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int glove1 = analogRead(A0);
  int glove2 = analogRead(A1);
  int glove3 = analogRead(A2);
  int glove4 = analogRead(A3);
  int glove5 = analogRead(A4);
  int grip = analogRead(A5);

  Serial.println((String) ""+ glove1+","+ glove2+","+ glove3+","+ glove4+","+ glove5+","+grip+"");
  delay(4);

}
