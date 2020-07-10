#pragma once
#include "string.h"
#include "iostream"
#include "stdlib"

using namespace std;

class cTripulacion
{
private:
	string nombre, apellido, DNI, trabajo;


public:
	cTripulacion(string nom, string apell, string dni, string trab);
	~cTripulacion();
};
