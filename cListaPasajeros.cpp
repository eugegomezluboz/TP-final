#include "cListaPasajeros.h"

cListaPasajeros::cListaPasajeros(int tm)
{
	tam = tm;
	ca = 0;
	this->pasajero = new cPasajeros*[tm];
	for (int i = 0; i < tm; i++)
		pasajero[i] = NULL;
}