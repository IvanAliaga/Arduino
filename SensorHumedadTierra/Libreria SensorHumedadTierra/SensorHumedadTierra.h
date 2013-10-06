/*
  SensorHumedadTierra.h - Descripción h
  Creada por Ivan Aliaga, el 6 de Octubre del 2013
  Lanzado bajo licencia Apache v2 License
*/
#ifndef SensorHumedadTierra_h
#define SensorHumedadTierra_h
#include "arduino.h"
class SensorHumedadTierra{
  public:
   SensorHumedadTierra(int variableAnaloga, int delay);
   void getValorAnalogo();
   void	getResultado();
   void getVariableResultado();		
  private:  
   int _variableAnaloga;
   int _delay;
};
#endif