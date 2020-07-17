#include "pch.h"
#include "cEventos.h"

cEventos::cEventos(cPasajeros * Pasajero, cTripulacion * Tripulante, Fecha Hora, tipo_de_evento Evento)
{
	pasajero = Pasajero;
	tripulante = Tripulante;
	hora = Hora;
	evento = Evento;
}

cEventos::~cEventos() {};
