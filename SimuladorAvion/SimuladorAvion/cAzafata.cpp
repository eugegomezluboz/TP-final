#include "pch.h"
#include "cAzafata.h"
#include <string>

cAzafata::cAzafata(string Cuil, string Obra_social, int Sueldo, bool disp): cTripulacion(Cuil, Obra_social, Sueldo) 
{
	disponible = disp = true;
}

bool cAzafata::Ocupada() { return disponible; }

void cAzafata::EntregarComida(cPasajeros * pasajero)
{
}

void cAzafata::EntregarBebida(cPasajeros * pasajero)
{
}

void cAzafata::LlamadoCliente(cPasajeros * pasajero) { disponible = false; }

void cAzafata::LlamadoPiloto(cPiloto * piloto)
{
}

void cAzafata::Anuncios()
{
}

cAzafata::~cAzafata() {};