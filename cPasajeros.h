#pragma once
#include "cPersona.h"

class cPasajeros : public cPersona
{
public:
	const string codigo;
	const string clase;
private:
	cPasajeros(const string cod,const string clas);
	~cPasajeros() {};

	void serLlevadoPorElAvion();
	bool pedirComida();
	bool pedirBebida();
	void irAlBaño();
	bool volverAlAsiento();
	void llamarAAzafata();
	bool descomponerse();
	bool arrebatarse();
};


