#include "cListaTemplate.h"

template<class T>
unsigned int cListaTemplate<T>::getTAM()
{
	return TAM;
}
template<class T>
unsigned int cListaTemplate<T>::getCA()
{
	return CA;
}
///////////
template<class T>
void cListaTemplate<T>::Redimensionalizar()
{
}


template<class T>
cListaTemplate<T>::cListaTemplate(unsigned int TAM)
{
	vector = new T*[TAM];
	for (unsigned int i = 0; i < TAM; i++)
	{
		vector[i] = NULL;
	}

	this->TAM = TAM;
	CA = 0;
}
template<class T>
cListaTemplate<T>::~cListaTemplate()
{
	if (vector != NULL)
	{
		for (unsigned int i = 0; i < CA; i++)
		{
			if (vector[i] != NULL)
				delete vector[i];
		}
		delete[] vector;
	}


}

template<class T>
void cListaTemplate<T>::Listar()
{

	for (unsigned int i = 0; i < CA; i++)
	{
		vector[i]->Imprimir();// imprimir
	}
}

template<class T>
bool cListaTemplate<T>::AgregarItem(T * item)
{

	T *i_f = BuscarItem(item->getclave());
	if (i_f != NULL)throw new exception("Ya se encuentra en la lista");

	if (CA < TAM)
		vector[CA++] = item;
	else throw new exception("No hay tamanio suficiente para agregar el item");;
	return true;
}
template<class T>

bool cListaTemplate<T>::AgregarItemOrdenado(const T * item)
{
	/*for (unsigned int i = 0; i < CA; i++)
	{
	if (vector[i]->getclave() == clave)
	return vector[i];
	}
	*/
	return false;
}
template<class T>
T* cListaTemplate<T>::Quitar(string clave) {

	unsigned int pos = getItemPos(clave);
	if (pos >= CA)return NULL;
	return QuitarenPos(pos);

}
template<class T>
T* cListaTemplate<T>::Quitar(const T *item) {
	unsigned int pos = getItemPos(item->getclave());
	if (pos >= CA)return NULL;
	return QuitarenPos(pos);
}
template<class T>
T* cListaTemplate<T>::QuitarenPos(unsigned int pos) {

	if (pos >= CA)throw new exception("Posicion invalida");

	T *aux = vector[pos];

	for (unsigned int i = 0; i < CA - 1; i++)
	{
		vector[i] = vector[i + 1];
	}

	vector[CA - 1] = NULL;
	CA--;
	return aux;
}


template<class T>
void cListaTemplate<T>::Eliminar(string clave) {

	unsigned int pos = getItemPos(clave);

	if (pos < CA)
		Eliminar(pos);
	//sino algo

}
template<class T>
void cListaTemplate<T>::Eliminar(const T *item) {

	Eliminar(item->getclave());
}
template<class T>
void cListaTemplate<T>::Eliminar(unsigned int pos) {
	if (pos >= CA)return;// o Throw no pude eliminar

	T *dato = QuitarenPos(pos);

	if (dato != NULL)
		delete dato;
	else
	{
		throw new exception("no encontrado");
	}
}

template<class T>
T* cListaTemplate<T>::BuscarItem(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (vector[i]->getclave() == clave)
			return vector[i];
	}
	return NULL;
}

template<class T>
T* cListaTemplate<T>::getItem(unsigned int pos)
{
	if (pos < CA)
		return vector[pos];
	else return NULL;
}
template<class T>
unsigned int cListaTemplate<T>::getItemPos(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (vector[i]->getclave() == clave)
			return i;
	}

	return INT_MAX;
}