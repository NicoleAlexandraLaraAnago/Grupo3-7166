#pragma once
#include <iostream>

using namespace std;
class Fecha {
public:
	Fecha();
	Fecha(int, int, int);
	~Fecha();
	void setDia(int);
	int getDia();
	void setMes(int);
	int getMes();
	void setAnio(int);
	int getAnio();
	bool validarFecha(int, int, int);
private:
	int dia;
	int mes;
	int anio;
};


