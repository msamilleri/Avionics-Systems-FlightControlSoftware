

// Arduino-1 Master (Efendi atýalcak Kod)
#include <Servo.h>
Servo myservo2;
int analogPin=A0;
void setup()
{
  Serial.begin(9600);
  
  myservo2.attach(10);
}

void loop()
{
   
  int sensorDeger;
  sensorDeger=analogRead(analogPin);
  sensorDeger=map(sensorDeger,0,1023,0,180);
  Serial.print("Potansiyometreen gelen deger");
  Serial.print(sensorDeger);
  Serial.print("\n");
  myservo2.write(sensorDeger);
   delay(15);
  myservo2.write(0);
}

