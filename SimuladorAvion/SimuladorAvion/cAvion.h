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
	bool activo = false;

public: 
	cAvion(cListaTemplate<cPasajeros> lista_p, cListaTemplate<cTripulacion> lista_t, cListaTemplate<cEventos> lista_e, bool Activo);
	~cAvion() {};

	void Despegar();
	void Aterrizar();
};
