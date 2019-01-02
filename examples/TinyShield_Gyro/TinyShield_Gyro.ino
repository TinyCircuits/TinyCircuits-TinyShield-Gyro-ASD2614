/* LucidTronix L3G4200D Gyroscope Library
 * For instructions, details and schematic, See:
 * http://www.lucidtronix.com/tutorials/63
 */
 
#include "L3G4200D.h"
#include "Wire.h"

L3G4200D gyro;

int x, y, z;

void setup(){
  Wire.begin();
  gyro.initialize(2000);
  Serial.begin(9600);
}

void loop(){
  x = gyro.getX();
  Serial.print("X:");
  Serial.print(x);

  y = gyro.getY();
  Serial.print(" Y:");
  Serial.print(y);

  z = gyro.getZ();
  Serial.print(" Z:");
  Serial.println(z);
  delay(300); //Just here to slow down the serial to make it more readable
}