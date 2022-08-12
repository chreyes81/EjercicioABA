#include <stdio.h>
#include <stdlib.h>

#define C_ESTADO_INICIAL   0
#define C_ESTADO_EJECUCION 1
#define C_SAMPLE_CNT       3

int Estado;
int Promedio;
int FilterOrder;
int SampleCnt = 0;


int TemperatureFilter(int Temperatura, int LocalOrder)
{
  int TemperaturaFiltrada;
  
  if(LocalOrder == 0)
  {
    LocalOrder = 1;
  }
  
  switch(Estado)
  {
    case C_ESTADO_INICIAL:
      FilterOrder = LocalOrder;
      SampleCnt++;
      Promedio = Temperatura;
      if(SampleCnt >= C_SAMPLE_CNT)
        {
          Estado = C_ESTADO_EJECUCION;
        }
      break;
      
    case C_ESTADO_EJECUCION:
      FilterOrder = LocalOrder;
      Promedio = ((FilterOrder - 1) * Promedio + Temperatura) / FilterOrder;
      TemperaturaFiltrada = Promedio;
      break;
  }
  
  return TemperaturaFiltrada;
}

void ImprimeNumero(int Num)
{
  if(Num > 0)
    {
      printf("%d \n", Num);
    }
  else
    {
      printf(" ERROR !!! \n");
    }
}
