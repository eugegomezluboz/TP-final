#pragma once
#include <stdlib.h>
#include <string.h>
#include <iostream>

class cPersona 
{
private:
	string nombre, apellido, DNI;

public:
	cPersona(string nom, string ape, string dni);

	void setNombre(string _nombre);
	string getNombre();
	
	void setApellido(string _apellido);
	string getApellido();

	void setDNI(string _dni);
	string getDNI();
	
	~cPersona(){};
};
