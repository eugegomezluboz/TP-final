#pragma once
#include "cPersona.h"
#include "cAzafata.h"

using namespace std;

enum tipo_clase { turista, ejecutiva, primera };

class cPasajeros : public cPersona
{
public:
	const string codigo;
	const string clase;
	tipo_clase clase;

private:
	cPasajeros(const string cod, tipo_clase clasecita, string nom, string ape, string dni);
	~cPasajeros() {};

	void serLlevadoPorElAvion();
	bool pedirComida();
	bool pedirBebida();
	void irAlBa�o();
	bool volverAlAsiento();
	void llamarAzafata(cAzafata *azafata);
	bool descomponerse();
	bool arrebatarse();
};


