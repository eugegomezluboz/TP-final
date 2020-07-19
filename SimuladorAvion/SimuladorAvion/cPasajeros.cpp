#include "pch.h"
#include "cPasajeros.h"

cPasajeros::cPasajeros(string nom, string ape, string dni, cListaTemplate<cPasajeros> *Lista_pasajeros, cListaTemplate<cPasajeros> *personas_aeropuerto) :cPersona(nom, ape, dni) {}

string cPasajeros::crear_Codigo()
{
	int max = 99, min = 1;
	string clase_Cod;

	if (clasecita == turista)
		clase_Cod = "TU";
	if (clasecita == ejecutiva)
		clase_Cod = "BS";
	if (clasecita == primera)
		clase_Cod = "PC";
	
	clase_Cod = clase_Cod + getDNI() + to_string(rand() % (max - min + 1) + min);
	
	clase_Cod.push_back('a' + rand() % 10);
}