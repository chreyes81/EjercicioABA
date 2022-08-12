#include <stdio.h>
#include <stdlib.h>
#include "TemperatureMeasure.h"

int GetTemperature(char Units)
{
  int Temp;
  float Temp_F;
  int Max = 30;
  int Min = 20;
  
  
  Temp = Min + (rand () % (Max - Min + 1));

  switch(Units)
  {
    case C_KELVIN: // 20 < Temp < 30
      Temp = Temp + 273;
      break;
      
    case C_FARHRENHEIT: // 68 < Temp < 86
      Temp_F = (Temp * 9/5) + 32;
      Temp = (int)Temp_F;
      break;
    
    case C_CELSIUS: // 20 < Temp < 30
    default:
      break;
  }
  
  
  return Temp; // Random entre 20 y 30
}
