#ifndef MKR_WIFI_1010_RGB_BUILTIN_H_
#define MKR_WIFI_1010_RGB_BUILTIN_H_

#include <WiFiNINA.h>           // This is required only for the purpose of loading the library below.
#include <utility/wifi_drv.h> 

void BuiltIn_begin();
void BuiltIn_RGB(int r, int g, int b);
void BuiltIn_Clear();

#endif