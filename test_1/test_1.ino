
#include <dht.h>
#define dhtPIN A0 
dht DHT;
float temp=0;
#define tempPin  A3

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  temp = analogRead(tempPin);
  DHT.read11(dhtPIN);
  temp = temp * 0.48828125;
  Serial.print("TEMPRATURE = ");
  Serial.print(temp);
  Serial.print("*C");
  Serial.println();
   Serial.print(" ambient temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
    delay(2000);
  delay(1000);
}
