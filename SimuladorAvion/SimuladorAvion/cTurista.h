#pragma once
#include "cPasajeros.h"

enum acompaniamiento
{
	solo, pareja, familia
};

class cTurista : public cPasajeros
{
private:
	acompaniamiento compania;

public:
	cTurista(acompaniamiento _compania, string nom, string ape, string dni, cListaTemplate<cPasajeros> *lista_pasajeros, cListaTemplate<cPasajeros> *personas_aeropuerto);
	~cTurista();
};
