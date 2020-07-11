#include "cListaPasajeros.h"

cListaPasajeros::cListaPasajeros(int tm)
{
	tam = tm;
	ca = 0;
	this->pasajero = new cPasajeros*[tm];
	for (int i = 0; i < tm; i++)
		pasajero[i] = NULL;
}

cListaPasajeros::~cListaPasajeros()
{
	if (pasajero != NULL) {
		for (int i = 0; i < ca; i++)
		{
			if (pasajero[i] != NULL)
				delete pasajero[i];
		}
		delete[] pasajero;
	}
}

int cListaPasajeros::getIndex(string dni)
{
	for (int i = 0; i < CA; i++) 
		if (pasajero[i]->getDNI() == dni)
			return i;
	
	return -1;
}

bool cListaPasajeros::AgregarP(cPasajeros* pasajero) { // si devuelve false es porque la lista está llena o porque la 
	if (CA == TAM)
		return false;
	
	string dni;
	dni = pasajero->getDNI();

	int pos = getIndex(dni);

	if (pos < 0)
		return false;
	
	pasajero[ca++] = pasajero;
	return true;
}