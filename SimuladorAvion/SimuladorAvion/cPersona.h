#pragma once
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

class cPersona 
{
private:
	string nombre, apellido, DNI;

public:
	cPersona(string nom, string ape, string dni);
	~cPersona();

	void setNombre(string _nombre);
	string getNombre();
	
	void setApellido(string _apellido);
	string getApellido();

	void setDNI(string _dni);
	string getDNI();
};
