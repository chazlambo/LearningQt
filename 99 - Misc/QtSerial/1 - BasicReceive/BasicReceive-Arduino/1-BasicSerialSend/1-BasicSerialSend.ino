int i = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  i++;
  Serial.print("Test ");
  Serial.println(i);
  delay(1000);
}
