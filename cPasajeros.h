#pragma once
#include "cTripulacion.h"

class cPasajeros : cTripulacion
{
public:
	int codigo;
	string clase;
private:
	void serLlevadoPorElAvion();
	bool pedirComida();
	bool pedirBebida();
	void irAlBa�o();
	bool volverAlAsiento();
	void llamarAAzafata();
	bool descomponerse();
	bool arrebatarse();
};


