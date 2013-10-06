/*
  SensorHumedadTierra.cpp -Descripción cpp
  Creada por Ivan Aliaga, el 6 de Octubre del 2013
  Lanzado bajo licencia Apache v2 License
*/

#include "arduino.h"
#include "SensorHumedadTierra.h"

int valor = 0;
SensorHumedadTierra::SensorHumedadTierra(int variableAnaloga, int delay)
{
  _variableAnaloga = variableAnaloga;
  _delay = delay;
}
void SensorHumedadTierra::getValorAnalogo()
{
  valor = analogRead(_variableAnaloga);
  Serial.println(valor);
}
void SensorHumedadTierra::getResultado()
{ 
  valor = analogRead(_variableAnaloga);
  if (valor <= 373)
        Serial.println("Encharcado");
      if ((valor > 373) && (valor <= 796))
        Serial.println("Humedo, no regar");
      if (valor > 796)
        Serial.println("Seco, necesitas regar");
      if(valor == 1023)
	Serial.println("El sensor esta fuera de la tierra");
      delay(_delay);
}
void SensorHumedadTierra::getVariableResultado()
{ 
  valor = analogRead(_variableAnaloga);
  if (valor <= 373)
        Serial.println("E");
      if ((valor > 373) && (valor <= 796))
        Serial.println("H");
      if (valor > 796)
        Serial.println("S");
      if(valor == 1023)
	Serial.println("O");
      delay(_delay);
}
