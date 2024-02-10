int IN1=4;
int IN2=5;
int IN3=2;
int IN4=3;
int ENA=9;
int ENB=10;
int data;
void setup() {
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
analogWrite(ENA, 255);
analogWrite(ENB, 255);
Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    data=Serial.read();
  }
 if(data=='F'){
digitalWrite(IN1,1);
digitalWrite(IN2,0);
digitalWrite(IN3,1);
digitalWrite(IN4,0);
 }else if(data=='B'){
digitalWrite(IN1,0);
digitalWrite(IN2,1);
digitalWrite(IN3,0);
digitalWrite(IN4,1);
 }else if(data=='R'){
digitalWrite(IN1,1);
digitalWrite(IN2,0);
digitalWrite(IN3,0);
digitalWrite(IN4,0);
 }else if(data=='L'){
digitalWrite(IN1,0);
digitalWrite(IN2,0);
digitalWrite(IN3,1);
digitalWrite(IN4,0);
 }else if(data=='S'){
digitalWrite(IN1,0);
digitalWrite(IN2,0);
digitalWrite(IN3,0);
digitalWrite(IN4,0);
 }
}
