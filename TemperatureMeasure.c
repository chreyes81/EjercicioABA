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

  if(Units == C_KELVIN)
    {
      Temp = Temp + 273;
    }
  else
    {
      if(Units == C_FARHRENHEIT)
        {
          Temp_F = (Temp * 9/5) + 32;
          Temp = (int)Temp_F;
        }
    }
  
  return Temp; // Random entre 20 y 30
}
