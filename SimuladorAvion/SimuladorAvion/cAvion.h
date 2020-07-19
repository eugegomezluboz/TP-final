#pragma once
#include "cListaTemplate.h"
#include "cPasajeros.h"
#include "cTripulacion.h"
#include "cEventos.h"

class cAvion
{
private:
	cListaTemplate<cPasajeros> *lista_pasajeros;
	cListaTemplate<cTripulacion> *lista_tripulacion;
	cListaTemplate<cEventos> *lista_eventos;
	bool activo = false;

public: 
	cAvion(cListaTemplate<cPasajeros> *pasajeros_para_subir, cListaTemplate<cTripulacion> *tripulacion_para_subir);
	~cAvion();

	void pedirComida(cPersona *persona, string comida);

	void Despegar();
	void Aterrizar();
};
