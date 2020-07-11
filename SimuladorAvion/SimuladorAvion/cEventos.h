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
}; /* armar una clase "cEvento" y otra "cEventos". cEventos contiene una lista estatica de Evento.
   Evento guarda la hora (contador de minutos). Lleva un constructor que tenga el nombre de quien llamo la funcion, y además un string con lo sucedido

   
   */
