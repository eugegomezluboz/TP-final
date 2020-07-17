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
	cTurista(acompaniamiento Compania, const string cod, tipo_clase clasecita, bool Sentado, bool Arrebatado, string nom, string ape, string dni);
	~cTurista() {};


};
