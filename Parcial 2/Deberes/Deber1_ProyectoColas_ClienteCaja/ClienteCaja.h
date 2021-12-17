#pragma once
#include "Cola.h"
#include "Nodo.h"

class ClienteCaja
{

private:
	int llegadaT;
	int esperaT;
	int servicioT;
	int salidaT;
	int noTrabajo;
	int entreLlegadas;

public:
	ClienteCaja() = default;
	ClienteCaja(int, int, int, int, int, int);
	//~ClienteCaja();

	void setLlegadaT(int);
	int getLlegadaT();

	void setEsperaT(int);
	int getEsperaT();

	void setServicioT(int);
	int getServicioT();

	void setSalidaT(int);
	int getSalidaT();

	void setNoTrabajo(int);
	int getNoTrabajo();

	void setEntreLlegadas(int);
	int getEntreLlegadas();

};

ClienteCaja::ClienteCaja(int llegada, int espera, int servicio, int salida, int trabajo, int llegadas)
{
	this->llegadaT = llegada;
	this->esperaT = espera;
	this->servicioT = servicio;
	this->salidaT = salida;
	this->noTrabajo = trabajo;
	this->entreLlegadas = llegadas;
}

void ClienteCaja::setLlegadaT(int llegada)
{
	this->llegadaT = llegada;
}

int ClienteCaja::getLlegadaT()
{
	return this->llegadaT;
}

void ClienteCaja::setEsperaT(int espera)
{
	this->esperaT = espera;
}

int ClienteCaja::getEsperaT()
{
	return this->esperaT;
}

void ClienteCaja::setServicioT(int servicio)
{
	this->servicioT = servicio;
}

int ClienteCaja::getServicioT()
{
	return this->servicioT;
}

void ClienteCaja::setSalidaT(int salida)
{
	this->salidaT = salida;
}

int ClienteCaja::getSalidaT()
{
	return this->salidaT;
}

void ClienteCaja::setNoTrabajo(int trabajo)
{
	this->noTrabajo = trabajo;
}

int ClienteCaja::getNoTrabajo()
{
	return this->noTrabajo;
}

void ClienteCaja::setEntreLlegadas(int llegadas)
{
	this->entreLlegadas = llegadas;
}

int ClienteCaja::getEntreLlegadas()
{
	return this->entreLlegadas;
}
