#include "mkr wifi 1010 RGB_BUILTIN.h"



void BuiltIn_begin()
{
  WiFiDrv::pinMode(25, OUTPUT);
  WiFiDrv::pinMode(26, OUTPUT);
  WiFiDrv::pinMode(27, OUTPUT);
}

void BuiltIn_RGB(int r, int g, int b)
{
  BuiltIn_Clear();
  WiFiDrv::analogWrite(25, r);
  WiFiDrv::analogWrite(26, g);
  WiFiDrv::analogWrite(27, b);
}

void BuiltIn_Clear()
{
  
  WiFiDrv::analogWrite(25, 0);
  WiFiDrv::analogWrite(26, 0);
  WiFiDrv::analogWrite(27, 0);
}