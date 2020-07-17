#include "pch.h"
#include "cPiloto.h"

cPiloto::cPiloto(int Horas_de_vuelo, tipo_de_avion Motor, string Cuil, string Obra_social, int Sueldo): cTripulacion(Cuil,Obra_social,Sueldo)
{
	Horas_de_vuelo = horas_de_vuelo;
	motor = Motor;
}

void cPiloto::AnuncioPorAltaVoz()
{
}

void cPiloto::PedirBebida(cAzafata *azafata)
{
	return;
}

void cPiloto::PedirComida(cAzafata *azafata)
{
	return;
}

void cPiloto::PedirAnuncioaAzafata(cAzafata *azafata)
{

}

void cPiloto::PilotearAvion()
{
}

cPiloto::~cPiloto() {}


