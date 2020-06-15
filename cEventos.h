#pragma once

struct fecha
{
	int hora, minutos, segundos;
} 
typedef fecha Fecha;

class cEventos
{
private:
	fecha hora_del_evento;
public:
	cEventos(fecha fech);

	~cEventos() {}
};
