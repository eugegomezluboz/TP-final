#pragma once
#include "cTripulacion.h"

class cPiloto : public cTripulacion
{
private:
public:
	void AnuncioPorAltaVoz();
	bool PedirBebida();
	bool PedirComida();
	void PedirAnuncioaAzafata();
	void PilotearAvion();
};
