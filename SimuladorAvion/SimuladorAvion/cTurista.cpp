#include "pch.h"
#include "cTurista.h"

cTurista::cTurista(acompaniamiento _compania, string nom, string ape, string dni, cListaTemplate<cPasajeros> *lista_pasajeros, cListaTemplate<cPasajeros> *personas_aeropuerto) : cPasajeros(nom, ape, dni,lista_pasajeros,personas_aeropuerto)
{
	clasecita = turista;
	compania = _compania;
	agregar_pasajero();
}

cTurista::~cTurista(){}
