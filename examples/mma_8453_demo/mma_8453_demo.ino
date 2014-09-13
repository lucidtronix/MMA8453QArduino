#include <I2C.h>
#include <MMA8453Q.h>

MMA8453Q accelerometer;

void setup()
{
  Serial.begin(9600);
}
 
void loop()
{
  Serial.print("X:");
  Serial.print(accelerometer.getX());
  Serial.print(", Y:");
  Serial.print(accelerometer.getY());
  Serial.print(", Z:");
  Serial.print(accelerometer.getZ());
  Serial.println();
  delay(300);
}
