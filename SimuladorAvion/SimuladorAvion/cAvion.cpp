#include "pch.h"
#include "cAvion.h"

cAvion::cAvion(cListaTemplate<cPasajeros> lista_p, cListaTemplate<cTripulacion> lista_t, cListaTemplate<cEventos> lista_e, bool Activo)
{
	lista_pasajeros = lista_p;
	lista_tripulacion = lista_t;
	lista_eventos = lista_e;
}

cAvion::~cAvion() {};

void cAvion::Despegar()
{
	activo = true;
}

void cAvion::Aterrizar()
{
	activo = false;
}
