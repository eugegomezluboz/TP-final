#pragma once
#include <iomanip>
#include <iostream>
#include "cTripulacion.h"
#include "cPasajeros.h"
#include "cPiloto.h"

using namespace std;

class cAzafata : public cTripulacion
{
private:
	bool disponible;
public:
	cAzafata(string Cuil, string Obra_social, int Sueldo, bool disp);
	~cAzafata() {};
	
	
	bool Ocupada();
	void EntregarComida(cPasajeros *pasajero);
	void EntregarBebida(cPasajeros *pasajero);
	void LlamadoCliente(cPasajeros *pasajero);
	void LlamadoPiloto(cPiloto *piloto);
	void Anuncios();
	
};
