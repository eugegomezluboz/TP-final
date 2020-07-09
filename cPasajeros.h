#pragma once
#include "cPersona.h"

struct tipo_pasajero
{
	string turista, primera_clase, ejecutiva;
};
tipo_pasajero Pasajero;

class cPasajeros : public cPersona
{
public:
	const string codigo;
	const string clase;
	tipo_pasajero tip_pas;
private:
	cPasajeros(const string cod, const string clas);
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


