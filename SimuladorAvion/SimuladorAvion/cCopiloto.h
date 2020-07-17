#pragma once
#include "cPiloto.h"

enum nivel_preparacion
{
	basico, medio, avanzado
};

class cCopiloto : public cPiloto
{
private:
	nivel_preparacion nivel_entrenamiento;

public:
	cCopiloto(nivel_preparacion Nivel_entrenamiento, int Horas_de_vuelo, tipo_de_avion Motor, string Cuil, string Obra_social, int Sueldo);
	~cCopiloto() {};
	
	void ComunicarConTorreDeControl();
};