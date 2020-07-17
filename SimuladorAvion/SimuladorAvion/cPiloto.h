#pragma once
#include "cTripulacion.h"
#include "cAzafata.h"

// la clase piloto es abstracta porque va a tener ComunicarConTorreDeControl que va a ser virtual

enum tipo_de_avion
{
	unimotor, dimotor, trimotor, cuatrimotor
};

class cPiloto : public cTripulacion
{
private:
	int horas_de_vuelo;
	tipo_de_avion motor; // tipo cantidad de motores que tiene licencia el piloto para volar

public:
	cPiloto(int Horas_de_vuelo, tipo_de_avion Motor, string Cuil, string Obra_social, int Sueldo);
	~cPiloto() {};

	void AnuncioPorAltaVoz();
	void PedirBebida(cAzafata *azafata);
	void PedirComida(cAzafata *azafata);
	void PedirAnuncioaAzafata(cAzafata *azafata);
	void PilotearAvion();

	virtual void ComunicarConTorreDeControl();
};
