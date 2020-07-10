#pragma once
#include "cPasajeros.h"

#define MAXIMO 20

class cListaPasajeros
{
	
	cPasajeros** pasajero;
	int ca, tam;

public:
	cListaPasajeros(int tm = MAXIMO);
	~cListaPasajeros();

	bool AgregarP(cPersona* pasajero);

	void imprimir();

	int getIndex(string dni);
};
