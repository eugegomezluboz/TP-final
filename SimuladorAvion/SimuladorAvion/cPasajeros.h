#pragma once
#include <string>
#include "cPersona.h"
#include "cAzafata.h"
#include "cListaTemplate.h"

using namespace std;

enum tipo_clase { turista, ejecutiva, primera };

class cPasajeros : public cPersona
{
public:
	string codigo;
	tipo_clase clasecita;
	bool arrebatado = false;
	bool sentado_en_avion = false;
	cListaTemplate<cPasajeros>* lista_pasajeros_aux;
	cListaTemplate<cPasajeros>* personas_aeropuerto_aux;

public:
	cPasajeros(string nom, string ape, string dni, cListaTemplate<cPasajeros> *lista_pasajeros, cListaTemplate<cPasajeros> *personas_aeropuerto);
	~cPasajeros();

	virtual bool puedePedirComida(string tipo_de_comida) {};
	virtual bool puedePedirBebida(string tipo_de_bebida) {};
	virtual bool puedeTrabajarEnNotebook() { return false; };
	virtual bool puedePedirMasaje() { return false; };
	virtual bool puedeTomarChampagne() { return false; };
	
	//void serLlevadoPorElAvion(cAzafata *azafata);
	void irAlBaño() { sentado_en_avion = false; };
	void volverAlAsiento() { sentado_en_avion = true; };
	//void llamarAzafata(cAzafata *azafata);
	//bool descomponerse();
	bool arrebatarse() { arrebatado = true; };
	string crear_Codigo();
	void agregar_pasajero();
	string getclave();
};


