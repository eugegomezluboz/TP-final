#include "pch.h"
#include "cPersona.h"

cPersona::cPersona(string nom, string ape, string dni)
{
	nombre = nom;
	apellido = ape;
	DNI = dni;
}
cPersona::~cPersona() {}

void cPersona::setNombre(string _nombre) { nombre = _nombre; }
string cPersona::getNombre() { return nombre; }

void cPersona::setApellido(string _apellido) { apellido = _apellido; }
string cPersona::getApellido() { return apellido; }

void cPersona::setDNI(string _dni) { DNI = _dni; }
string cPersona::getDNI() { return DNI; }