#pragma once
#include "cTripulacion.h"


class cPasajeros : public cTripulacion
{
public:
	const int codigo;
	const string clase;
private:
	cPasajeros(int cod, string clas);
	void serLlevadoPorElAvion();
	bool pedirComida();
	bool pedirBebida();
	void irAlBaño();
	bool volverAlAsiento();
	void llamarAAzafata();
	bool descomponerse();
	bool arrebatarse();
};


