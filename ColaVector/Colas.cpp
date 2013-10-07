// Colas.cpp: define el punto de entrada de la aplicación de consola.
//
#include <iostream>
using namespace std;
#include "Colas.h"
#include "arduino.h"

Cola::Cola()
	:miFrente(0), miFinal(0)
{}

bool Cola::vacia() const
{
	return (miFrente==miFinal);
}

void Cola::insertar(const ElementoCola & valor)
{
	int nuevoFinal = (miFinal + 1) % CAPACIDAD_COLA;
	if(nuevoFinal != miFrente){
		miVector[miFinal] = valor;
		miFinal = nuevoFinal;

	}else{
		Serial.println(*** Cola llena --- no es posible añadir más ***\n"
				"Debe incrementarse el valor de CAPACIDAD_COLA|en Cola.h\n");
		exit(1);
	}
}

void Cola::mostrar(ostream & sal) const
{
	for(int i = miFrente; i != miFinal; i = (i + 1) % CAPACIDAD_COLA){
		Serial.println(miVector[i]);
	}
		
}

ElementoCola Cola::frente() const
{
	if( !vacia() )
		return (miVector[miFrente]);
	else
	{
		Serial.println("*** Cola vacía --- devolviendo valor basura ***\n");
		ElementoCola basura = 0;
		return basura;
	}
}

void Cola::eliminar()
{
	if( !vacia() ){
		miFrente = (miFrente + 1 ) % CAPACIDAD_COLA;
	}else{
		Serial.println(" *** Cola vacía  --- "
				"no se puede eliminar nada ***\n");

	}
}






