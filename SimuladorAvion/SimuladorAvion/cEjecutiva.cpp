#include "pch.h"
#include "cEjecutiva.h"

cEjecutiva::cEjecutiva(rango_ejecutivo Puesto, const string cod, tipo_clase clasecita, bool Sentado, bool Arrebatado, string nom, string ape, string dni) :cPasajeros(cod, clasecita, Sentado, Arrebatado, nom, ape, dni)
{
	puesto = Puesto;
}



cEjecutiva::~cEjecutiva() {};

void cEjecutiva::TrabajarEnNotebook()
{
}