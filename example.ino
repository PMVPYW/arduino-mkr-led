#include "mkr wifi 1010 RGB_BUILTIN.h"

void setup() {
  Serial.begin(9600);
  BuiltIn_begin();  //set pins as output
}

void loop() {
  Serial.print("b");
 for (int i = 0; i < 255; i+=10)
 {
   Serial.println(i);
   for (int j = 0; j < 255; j+=10)
   {
     for (int k = 0; k < 255; k+=50)
     {
       BuiltIn_RGB(k, i, j);//set color
       delay(50);
     }
   }
 }
}
