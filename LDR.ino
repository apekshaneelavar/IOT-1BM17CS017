int input=A0;
int ledPin=12;
void setup() {
pinMode(0,INPUT);// put your setup code here, to run once:
pinMode(12,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int value=analogRead(input);
Serial.println(value);
int threshold=300;

if(value<threshold)
digitalWrite(ledPin,HIGH);
else
digitalWrite(ledPin,LOW);
}
