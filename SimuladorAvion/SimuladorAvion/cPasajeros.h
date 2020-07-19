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

	virtual bool puedePedirComida(string tipo_de_comida);
	virtual bool puedePedirBebida(string tipo_de_bebida);
	virtual void TrabajarEnNotebook();
	virtual void masaje();
	virtual void tomarChampagne();
	
	void serLlevadoPorElAvion(cAzafata *azafata);
	void irAlBaño();
	void volverAlAsiento();
	void llamarAzafata(cAzafata *azafata);
	bool descomponerse();
	bool arrebatarse();
};


