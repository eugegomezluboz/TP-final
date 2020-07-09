#pragma once
#include "cTripulacion.h"

class cAzafata : public cTripulacion
{
private:
	bool disponible;
public:
	cAzafata(bool disp);
	~cAzafata() {};
	
	
	bool Ocupada();
	void EntregarComida(string pasajero);
	void EntregarBebida(string pasajero);
	void LlamadoCliente(string pasajero);
	void LlamadoPiloto(string piloto);
	void Anuncios();
};
