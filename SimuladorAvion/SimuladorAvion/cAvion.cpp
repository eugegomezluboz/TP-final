#include "pch.h"
#include "cAvion.h"

cAvion::cAvion(cListaTemplate<cPasajeros> *pasajeros_para_subir, cListaTemplate<cTripulacion> *tripulacion_para_subir)
{
	activo = false;
	lista_pasajeros = pasajeros_para_subir;
	lista_tripulacion = tripulacion_para_subir;
	lista_eventos = new cListaTemplate<cEventos>(100);
}

cAvion::~cAvion()
{
	lista_pasajeros->~cListaTemplate();
	lista_tripulacion->~cListaTemplate();
	lista_eventos->~cListaTemplate();
}

void cAvion::pedirComida(cPersona *persona, string comida)
{
	
}

void cAvion::Despegar()
{
	activo = true;
}

void cAvion::Aterrizar()
{
	activo = false;
}
