
int pin1 = 9, pin2 = 10, pin3 = 11, pin4 = 12, pin5 = 13;
int sensorValue;
int sensorPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  Serial.begin(9600);



}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  Serial.print(sensorValue);
  if(  sensorValue >= 820){
    digitalWrite(pin5, HIGH);
  }
  else{
        digitalWrite(pin5, LOW);
  }
  if(sensorValue >= 615){
    digitalWrite(pin4, HIGH);
  }
  else{
    digitalWrite(pin4, LOW);

  }
  if(sensorValue >= 410){
    digitalWrite(pin3, HIGH);
  }
  else{
    digitalWrite(pin3, LOW);

  }
  if(sensorValue >= 205){
    digitalWrite(pin2, HIGH);
  }
  else{
    digitalWrite(pin2, LOW);

  }
  digitalWrite(pin1,HIGH);
  delay(1000);
 

}