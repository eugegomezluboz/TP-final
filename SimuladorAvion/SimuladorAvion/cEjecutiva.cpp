#include "pch.h"
#include "cEjecutiva.h"

cEjecutiva::cEjecutiva(rango_ejecutivo puesto, string nom, string ape, string dni, cListaTemplate<cPasajeros> *lista_pasajeros, cListaTemplate<cPasajeros> *personas_aeropuerto) :cPasajeros(nom,ape,dni,lista_pasajeros,personas_aeropuerto)
{
	clasecita = ejecutiva;
	Puesto = puesto;
	agregar_pasajero();
}

cEjecutiva::~cEjecutiva() {};



void cEjecutiva::TrabajarEnNotebook()
{
}