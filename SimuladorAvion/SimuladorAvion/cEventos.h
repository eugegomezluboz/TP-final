#pragma once
#include "cPasajeros.h"
#include "cTripulacion.h"

struct fecha
{
	int hora, minutos, segundos; 
} 
; typedef fecha Fecha;

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
	fecha hora;
	tipo_de_evento evento;

public:
	cEventos(cPasajeros *Pasajero, cTripulacion *Tripulante,Fecha Hora,tipo_de_evento Evento);
	~cEventos() {}
};
//Evento guarda la hora (contador de minutos). Lleva un constructor que tenga el nombre de quien llamo la funcion, y además un string con lo sucedido
