#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
#include "cPersona.h"

class cTripulacion : public cPersona
{
private:
	string cuil, obra_social;
	int sueldo;

public:
	cTripulacion(string cl, string os, int suel);
	~cTripulacion() {};



};