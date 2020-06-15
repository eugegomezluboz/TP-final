#pragma once
#include "cTripulacion.h"

class cPasajeros : public cTripulacion
{
public:
	int codigo;
	string clase;
private:
	void serLlevadoPorElAvion();
	bool pedirComida();
	bool pedirBebida();
	void irAlBaño();
	bool volverAlAsiento();
	void llamarAAzafata();
	bool descomponerse();
	bool arrebatarse();
};


