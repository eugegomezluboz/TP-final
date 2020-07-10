#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <iostream>
#include <stdlib.h>
#include "cListaPasajeros.h"
#include "cListaTripulacion.h"

using namespace std;

int main()
{
	cListaPasajeros ListaDePasajeros(200);

	cPasajeros* pasajero1 = new cPasajeros("BS428293241-99H",ejecutiva);

	ListaDePasajeros.AgregarP(pasajero1);


	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
