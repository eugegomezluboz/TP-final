#pragma once
#include "cTripulacion.h"

// la clase piloto es abstracta porque va a tener ComunicarConTorreDeControl que va a ser virtual

class cPiloto : public cTripulacion
{
private:
public:
	cPiloto();
	~cPiloto() {};

	void AnuncioPorAltaVoz();
	bool PedirBebida();
	bool PedirComida();
	void PedirAnuncioaAzafata();
	void PilotearAvion();

	virtual void ComunicarConTorreDeControl();
};
