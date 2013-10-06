/*
  SENSOR_HUMEDAD_TIERRA_LIB.ino
  Creada por Ivan Aliaga, el 6 de Octubre del 2013
  Lanzado bajo licencia Apache v2 License
*/
#include <SensorHumedadTierra.h>
SensorHumedadTierra objSHT(0,1000);
void setup() { 
    Serial.begin(9600);
}
void loop() {
  objSHT.getResultado();
  objSHT.getValorAnalogo();
}

