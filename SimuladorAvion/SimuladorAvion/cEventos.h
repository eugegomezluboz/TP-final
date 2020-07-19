#pragma once
#include "cPasajeros.h"
#include "cTripulacion.h"

enum tipo_de_evento
{
	aterrizar, despegar, pedirComida, pedirBebida,
	irAlBaño, volverAlAsiento, llamarAzafata, descomponerse,
	arrebatarse, entregarComida, entregarBebida, llamadoCliente,
	llamadoPiloto, anuncios, encarcelarAlPasajeroArrebatado,
	trabajarEnNotebook, masaje, tomarChampagne,
	comunicarConTorreDeControl, pilotearAvion, pedirAnuncioaAzafata,
	anuncioPorAltaVoz
};
	
class cEventos
{
private:
	cPasajeros *pasajero;
	cTripulacion *tripulante;
	tipo_de_evento evento;

public:
	cEventos(cPasajeros *Pasajero, cTripulacion *Tripulante, tipo_de_evento Evento);
	~cEventos() {}
};
//cada funcion tiene un contador que aumenta en cinco minutos.
