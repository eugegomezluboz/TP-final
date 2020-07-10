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

bool cListaPasajeros::AgregarP(cPersona* persona) { // si devuelve false es porque la lista está llena
	if (CA == TAM)
		return false;
	
	//aca me fijo si la persona ya estaba, entonces si es verdad no la agrego
	string dni = pasaje//string dni = persona->getDni();
	int pos = getIndex(dni);
	if (pos >= 0)
		return false;
	Persona[CA++] = persona;
	return true;
}