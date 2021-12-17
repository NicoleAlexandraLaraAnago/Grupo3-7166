#pragma once
#include "Nodo.h"
#include "ClienteCaja.h"
#include <iostream>

using namespace std;


class Cola
{

private:
	Nodo* cabeza;
	Nodo* cola;
	int tam;

public:
	Cola();
	void aLaCola(ClienteCaja);
	int tamanio();
	bool colaVacia();
	void mostrar();
};

Cola::Cola()
{
	this->cabeza = this->cola = NULL;
	this->tam = 0;
}

void Cola::aLaCola(ClienteCaja datos)
{
	Nodo* nuevoNodo = new Nodo();
	nuevoNodo->setCC(datos);

	if (this->cabeza == NULL)
	{
		this->cabeza = nuevoNodo;
		this->cola = nuevoNodo;
		nuevoNodo->setSiguiente(NULL);
		this->tam++;
	}
	else
	{
		this->cola->setSiguiente(nuevoNodo);
		nuevoNodo->setSiguiente(NULL);
		this->cola = nuevoNodo;
		this->tam++;
	}
}

int Cola::tamanio()
{
	return this->tam;
}

bool Cola::colaVacia()
{
	if (this->cabeza == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Cola::mostrar()
{

	if (cabeza == NULL)
	{
		cout << "NO HAY DATOS" << endl;
	}
	else
	{
		cout << "\n\tLLEGADA";
		cout << "\t\tESPERA";
		cout << "\t\tNO TRABAJA EL CAJERO";
		cout << "\t\tSERVICIO";
		cout << "\t\tSALIDA";
		cout << "\t\tTIEMPO ENTRE LLEGADAS";

		for (Nodo* recorrer = this->cabeza; recorrer != NULL; recorrer = recorrer->getSiguiente())
		{
			cout << "\n\t" << recorrer->getCC().getLlegadaT();
			cout << "\t\t" << recorrer->getCC().getEsperaT();
			cout << "\t\t\t" << recorrer->getCC().getNoTrabajo();
			cout << "\t\t\t" << recorrer->getCC().getServicioT();
			cout << "\t\t\t" << recorrer->getCC().getSalidaT();
			cout << "\t\t\t" << recorrer->getCC().getEntreLlegadas();
		}

		cout << endl;
		cout << endl;
	}

}