#pragma once
#include "cPersona.h"
#include "cAzafata.h"

using namespace std;

enum tipo_clase { turista, ejecutiva, primera };

class cPasajeros : public cPersona
{
public:
	const string codigo;
	tipo_clase clase;
	bool sentado, arrebatado;

private:
	cPasajeros(const string cod, tipo_clase clasecita, bool Sentado, bool Arrebatado, string nom, string ape, string dni);
	~cPasajeros() {};

	void serLlevadoPorElAvion();
	virtual bool pedirComida(string tipo_de_comida, cAzafata *azafata);
	virtual bool pedirBebida(string tipo_de_bebida, cAzafata *azafata);
	void irAlBaño();
	void volverAlAsiento();
	void llamarAzafata(cAzafata *azafata);
	bool descomponerse();
	bool arrebatarse();
};


