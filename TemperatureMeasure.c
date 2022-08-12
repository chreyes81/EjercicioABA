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

  return Temp; // Random entre 20 y 30
}
