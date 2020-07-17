#pragma once
#include "cPasajeros.h"

enum rango_ejecutivo
{
	presidente, vicepresidente, socio
};

class cEjecutiva : public cPasajeros
{
private:
	rango_ejecutivo puesto;

public:
	cEjecutiva(rango_ejecutivo Puesto, const string cod, tipo_clase clasecita, bool Sentado, bool Arrebatado, string nom, string ape, string dni);
	~cEjecutiva() {};

	void TrabajarEnNotebook();
};
