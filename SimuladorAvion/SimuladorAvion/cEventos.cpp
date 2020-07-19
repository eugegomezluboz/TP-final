#include "pch.h"
#include "cEventos.h"

cEventos::cEventos(cPasajeros * Pasajero, cTripulacion * Tripulante, tipo_de_evento Evento)
{
	pasajero = Pasajero;
	tripulante = Tripulante;
	evento = Evento;
}

cEventos::~cEventos() {};
