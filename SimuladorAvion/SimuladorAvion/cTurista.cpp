#include "pch.h"
#include "cTurista.h"

cTurista::cTurista(acompaniamiento Compania, const string cod, tipo_clase clasecita, bool Sentado, bool Arrebatado, string nom, string ape, string dni):cPasajeros(cod,clasecita,Sentado,Arrebatado,nom,ape,dni)
{
	compania = Compania;
}
