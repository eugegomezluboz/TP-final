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
	
	~cPersona(){};
};
