#pragma once
#include "cListaTemplate.h"
#include "cPasajeros.h"
#include "cTripulacion.h"
#include "cEventos.h"

class cAvion
{
private:
	cListaTemplate<cPasajeros> lista_pasajeros;
	cListaTemplate<cTripulacion> lista_tripulacion;
	cListaTemplate<cEventos> lista_eventos;

public: 

	void Despegar();
	void Aterrizar();
};
