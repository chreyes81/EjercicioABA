#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "TemperatureFilter.h"
#include "TemperatureMeasure.h"

int cont = 0;
int Result;
int TemperaturaMedida;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    
    for(cont = 0; cont < 20; cont++)
    {
      //TemperaturaMedida = GetTemperature(C_KELVIN);
      TemperaturaMedida = GetTemperature(C_FARHRENHEIT);
      //TemperaturaMedida = GetTemperature(C_CELSIUS);
      
      Result = TemperatureFilter(TemperaturaMedida, 4);
      printf("Temperatura Medida: ");
      ImprimeNumero(TemperaturaMedida);
      printf("Temperatura Promediada: ");
      ImprimeNumero(Result);
      printf("\n");
    }
  
  getch();
	return 0;
}
