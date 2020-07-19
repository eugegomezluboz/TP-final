#include "pch.h"
#include "cPrimeraClase.h"

cPrimeraClase::cPrimeraClase(string nom, string ape, string dni, cListaTemplate<cPasajeros> *lista_pasajeros, cListaTemplate<cPasajeros> *personas_aeropuerto):cPasajeros(nom,ape,dni,lista_pasajeros,personas_aeropuerto)
{
	clasecita = primera;
	agregar_pasajero();
}

cPrimeraClase::~cPrimeraClase() {}
