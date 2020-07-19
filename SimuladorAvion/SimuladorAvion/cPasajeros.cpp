#include "pch.h"
#include "cPasajeros.h"

cPasajeros::cPasajeros(string nom, string ape, string dni, cListaTemplate<cPasajeros> *lista_pasajeros, cListaTemplate<cPasajeros> *personas_aeropuerto) :cPersona(nom, ape, dni) 
{
	lista_pasajeros_aux = lista_pasajeros;
	personas_aeropuerto_aux = personas_aeropuerto;
}

cPasajeros::~cPasajeros() {};

string cPasajeros::crear_Codigo()
{
	int max = 99, min = 01;
	string clase_Cod;

	if (clasecita == turista)
		clase_Cod = "TU";
	if (clasecita == ejecutiva)
		clase_Cod = "BS";
	if (clasecita == primera)
		clase_Cod = "PC";

	clase_Cod = clase_Cod + getDNI() + to_string(100 + rand() % (max - min + 1) + min).substr(1, 2);
	
	clase_Cod.push_back('A' + rand() % 10);

	return clase_Cod;
}

void cPasajeros::agregar_pasajero()
{
	string codigo_nuevo;
	int posicion_encontrado;

	if (lista_pasajeros_aux != NULL)
	{
		int agregado = 0;

		while (agregado == 0)
		{
			codigo_nuevo = crear_Codigo();
			posicion_encontrado = lista_pasajeros_aux->getItemPos(codigo_nuevo.substr(10,3));
			if (posicion_encontrado == -1)
			{
				codigo = codigo_nuevo;
				lista_pasajeros_aux->AgregarItem(this);
				personas_aeropuerto_aux->AgregarItem(this);
				agregado = 1;
			}
		}
	}
	else
	{
		codigo = crear_Codigo();
		personas_aeropuerto_aux->AgregarItem(this);
	}
}

string cPasajeros::getclave()
{
	return codigo.substr(10, 3);
}
