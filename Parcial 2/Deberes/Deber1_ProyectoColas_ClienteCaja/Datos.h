/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES:
*{
*@author ADRIAN PAEZ
*@author CRISTOPHER ZAMBRANO
*@author KEVIN ASMAL
*@author CARLOS IPIALES
*}
*TEMA: Colas, programa cliente - caja
*FECHA DE CREACION : 10/12/2021
*FECHA DE MODIFICACION: 12/12/2021
*VERSION: 1.0
*/

#pragma once
#include "Cola.h"
#include "Nodo.h"
#include "ClienteCaja.h"
#include "Utils.h"
#include <iostream>
#include <chrono>
#include <random>
#include <conio.h>
#include <stdio.h>

using namespace std;

class Datos
{

private:
	Cola colax;
	int clientes;
	int tmpLlegada = 0;
	int tmpLlegada2 = 0;
	int tmpServicio = 0;

public:
	void cantidadClientes();
	int generarDatos(const int, const int);
	void genNuevoPrimero();
	void imprimir();

};

void Datos::cantidadClientes()
{
	Utils util;
	cout << "\n\nNo. de Clientes: ";
	cin >> this->clientes;
}

int Datos::generarDatos(const int min, const int max)
{
	std::random_device nr;
	std::uniform_int_distribution<> dist(min, max);
	static std::mt19937_64 numeroRandom(std::chrono::system_clock::now().time_since_epoch().count());

	return dist(numeroRandom);
}

void Datos::genNuevoPrimero()
{
	for (int i = 0; i < this->clientes; i++)
	{
		ClienteCaja nuevo{};
		nuevo.setLlegadaT(this->tmpLlegada + generarDatos(1, 25));
		this->tmpLlegada = nuevo.getLlegadaT();
		nuevo.setServicioT(generarDatos(1, 16));
		if (nuevo.getLlegadaT() < (this->tmpServicio + this->tmpLlegada2))
		{
			nuevo.setEsperaT((nuevo.getLlegadaT() - (this->tmpServicio + this->tmpLlegada2)) * (-1));
			nuevo.setNoTrabajo(0);
		}
		else if (nuevo.getLlegadaT() == (nuevo.getServicioT() + this->tmpLlegada2))
		{
			nuevo.setEsperaT(0);
			nuevo.setNoTrabajo(0);
		}
		else
		{
			nuevo.setNoTrabajo(this->tmpLlegada - (this->tmpServicio + this->tmpLlegada2));
			nuevo.setEsperaT(0);
		}
		nuevo.setSalidaT(nuevo.getLlegadaT() + nuevo.getServicioT());
		nuevo.setEntreLlegadas(nuevo.getLlegadaT() - this->tmpLlegada2);
		this->tmpLlegada2 = this->tmpLlegada;
		this->tmpServicio = nuevo.getServicioT();
		colax.aLaCola(nuevo);
	}
}

void Datos::imprimir()
{
	this->colax.mostrar();
}