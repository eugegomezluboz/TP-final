#pragma once

class cAzafata
{
private:
	bool disponible;
public:
	bool Ocupada();
	void EntregarComida(string pasajero);
	void EntregarBebida(string pasajero);
	void LlamadoCliente(string pasajero);
	void LlamadoPiloto(string piloto);
	void Anuncios();
};
