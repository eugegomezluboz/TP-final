#pragma once
#include "cPasajeros.h"

class cPrimeraClase : public cPasajeros
{
private:

public:
	cPrimeraClase(string nom, string ape, string dni, cListaTemplate<cPasajeros> *lista_pasajeros, cListaTemplate<cPasajeros> *personas_aeropuerto);
	~cPrimeraClase();
	
	void masaje();
	void tomarChampagne();
};
