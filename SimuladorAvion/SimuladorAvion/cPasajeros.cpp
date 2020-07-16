#include "pch.h"
#include "cPasajeros.h"

cPasajeros::cPasajeros(const string cod, tipo_clase clasecita, string nom, string ape, string dni) : cPersona(nom, ape, dni)
{
	codigo = cod; // fijarme esto porque yo quiero que cod sea const pero aca me tira error
	clase = clasecita;
}

cPasajeros::~cPasajeros() {};

void cPasajeros::serLlevadoPorElAvion()
{

}

bool cPasajeros::pedirComida()
{
	return false;
}

bool cPasajeros::pedirBebida()
{
	return false;
}

void cPasajeros::irAlBaño()
{
}

bool cPasajeros::volverAlAsiento()
{
	return false;
}

void cPasajeros::llamarAzafata(cAzafata * azafata)
{
}

bool cPasajeros::descomponerse()
{
	return false;
}

bool cPasajeros::arrebatarse()
{
	return false;
}
