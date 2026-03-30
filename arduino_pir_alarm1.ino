int LED = 8;
int BUZZER =7;
int PIR = 4;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUZZER,OUTPUT);
  pinMode(PIR, INPUT);
  Serial.begin(9600);

}

void loop()
{
  int value = digitalRead(PIR);
  Serial.println(value);
  
  if(value == 0){
    Serial.println("motion not detected");
    digitalWrite(LED, LOW);
    analogWrite(BUZZER,0);
  }
  if(value == 1){
    Serial.println("motion detected");
    digitalWrite(LED, HIGH);
    analogWrite(BUZZER,200);
    delay(500);
  }
}
