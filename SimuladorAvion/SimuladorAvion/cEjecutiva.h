#pragma once
#include "cPasajeros.h"
#include "cListaTemplate.h"

enum rango_ejecutivo
{
	presidente, vicepresidente, socio
};

class cEjecutiva : public cPasajeros
{
private:
	rango_ejecutivo Puesto;

public:
	cEjecutiva(rango_ejecutivo puesto, string nom, string ape, string dni, cListaTemplate<cPasajeros> *lista_pasajeros, cListaTemplate<cPasajeros> *personas_aeropuerto);
	~cEjecutiva();

	void TrabajarEnNotebook();
};
