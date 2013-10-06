/*
  SensorHumedadTierra.cpp -Descripción cpp
  Creada por Ivan Aliaga, el 6 de Octubre del 2013
  Lanzado bajo licencia Apache v2 License
*/

#include "arduino.h"
#include "SensorHumedadTierra.h"

SensorHumedadTierra::SensorHumedadTierra(int variableAnaloga, int delay)
{
  _variableAnaloga = analogRead(variableAnaloga);
  _delay = delay;
}
void SensorHumedadTierra::getValorAnalogo()
{
  Serial.println(_variableAnaloga);
}
void SensorHumedadTierra::getResultado()
{
  if (_variableAnaloga <= 373)
        Serial.println(" Encharcado");
      if ((_variableAnaloga > 373) && (_variableAnaloga <= 796))
        Serial.println(" Humedo, no regar");
      if (_variableAnaloga > 796)
        Serial.println(" Seco, necesitas regar");
      if(_variableAnaloga == 1023)
	Serial.println(" El sensor esta fuera de la tierra");
      delay(_delay);
}
void SensorHumedadTierra::getVariableResultado()
{
  if (_variableAnaloga <= 373)
        Serial.println("E");
      if ((_variableAnaloga > 373) && (_variableAnaloga <= 796))
        Serial.println("H");
      if (_variableAnaloga > 796)
        Serial.println("S");
      if(_variableAnaloga == 1023)
	Serial.println("O");
      delay(_delay);
}