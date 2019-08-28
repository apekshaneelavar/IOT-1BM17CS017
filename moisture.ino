#include<Servo.h>
Servo s;
int input=A0;
int output=9;
void setup() {
pinMode(input,INPUT);
pinMode(output,OUTPUT);
s.attach(9);
Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
int value=analogRead(input);
Serial.println(value);
int threshold=900;
if(value>threshold)
{
  for(int i=0;i<180;i++)
  {
    s.write(i);
    delay(30);// put your main code here, to run repeatedly:
  }
  for(int i=180;i>0;i--)
  {
    s.write(i);
    delay(30);
  }
}

}
