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