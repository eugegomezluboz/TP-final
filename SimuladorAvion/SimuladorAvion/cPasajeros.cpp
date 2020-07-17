#include "pch.h"
#include "cPasajeros.h"

cPasajeros::cPasajeros(const string cod, tipo_clase clasecita, bool Sentado, bool Arrebatado, string nom, string ape, string dni) : cPersona(nom, ape, dni)
{
	codigo = cod; // fijarme esto porque yo quiero que cod sea const pero aca me tira error
	clase = clasecita;
	sentado = Sentado;
	arrebatado = Arrebatado;
}

cPasajeros::~cPasajeros() {};

void cPasajeros::serLlevadoPorElAvion()
{

}

bool cPasajeros::pedirComida(string tipo_de_comida, cAzafata *azafata)
{
	return false;
}

bool cPasajeros::pedirBebida(string tipo_de_bebida, cAzafata *azafata)
{
	return false;
}

void cPasajeros::irAlBaño()
{
	sentado = false;
	return;
}

void cPasajeros::volverAlAsiento()
{
	sentado = true;
	return;
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
	arrebatado = true;
}
