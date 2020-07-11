#pragma once
#include "cPersona.h"

enum tipo_clase { turista, ejecutiva, primera };

class cPasajeros : public cPersona
{
public:
	const string codigo;
	const string clase;
	tipo_clase clase;

private:
	cPasajeros(const string cod, tipo_clase clasecita);
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


