#pragma once
#define NMAX 100

#include <string>

using namespace std;
template<class T>
class cListaTemplate
{
protected:
	T **vector;
	unsigned int CA, TAM;
	
	void Redimensionalizar();
public:
	cListaTemplate(unsigned int TAM = NMAX);
	~cListaTemplate();

	bool AgregarItem(T *item);
	bool AgregarItemOrdenado(const T *item);

	T* Quitar(string clave);
	T* Quitar(const T *item);
	T* QuitarenPos(unsigned int pos);

	void Eliminar(string clave);
	void Eliminar(const T *item);
	void Eliminar(unsigned int pos);

	void Listar();
	T* BuscarItem(string clave);
	T* getItem(unsigned int pos);

	unsigned int getItemPos(string clave);

	unsigned int getCA();
	unsigned int getTAM();
};

