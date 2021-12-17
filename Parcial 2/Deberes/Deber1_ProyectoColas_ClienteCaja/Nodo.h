#pragma once
#include "ClienteCaja.h"

class Nodo
{

private:
	Nodo* siguiente;
	ClienteCaja cc;

public:
	
	Nodo();

	void setCC(ClienteCaja);
	ClienteCaja getCC();

	Nodo* getSiguiente();
	void setSiguiente(Nodo*);
	
};

Nodo::Nodo()
{
	this->siguiente = NULL;

	this->cc.setLlegadaT(0);
	this->cc.setEsperaT(0);
	this->cc.setServicioT(0);
	this->cc.setSalidaT(0);
	this->cc.setNoTrabajo(0);
	this->cc.setEntreLlegadas(0);
}

void Nodo::setCC(ClienteCaja datos)
{
	this->cc = datos;
}

ClienteCaja Nodo::getCC()
{
	return this->cc;
}

void Nodo::setSiguiente(Nodo* item)
{
	this->siguiente = item;
}

Nodo* Nodo::getSiguiente()
{
	return this->siguiente;
}
