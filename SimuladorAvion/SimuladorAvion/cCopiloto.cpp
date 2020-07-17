#include "pch.h"
#include "cCopiloto.h"



cCopiloto::cCopiloto(nivel_preparacion Nivel_entrenamiento, int Horas_de_vuelo, tipo_de_avion Motor, string Cuil, string Obra_social, int Sueldo) : cPiloto(Horas_de_vuelo, Motor,Cuil,Obra_social,Sueldo)
{
	nivel_entrenamiento = Nivel_entrenamiento;
}

cCopiloto::~cCopiloto() {};

void cCopiloto::ComunicarConTorreDeControl()
{

}
