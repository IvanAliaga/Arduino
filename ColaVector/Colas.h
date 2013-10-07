#include <iostream>

#ifndef COLA
#define COLA
const int CAPACIDAD_COLA = 128;
typedef int ElementoCola;

class Cola
{
public:
	Cola();
	bool vacia() const;
	void insertar(const ElementoCola & valor);
	void mostrar(ostream & sal) const;
	ElementoCola frente() const;
	void eliminar();
private:
	int miFrente,
		 miFinal;
	//int miCapacidad;
	ElementoCola miVector[CAPACIDAD_COLA];
	//ElementoCola * miVector;
};

#endif