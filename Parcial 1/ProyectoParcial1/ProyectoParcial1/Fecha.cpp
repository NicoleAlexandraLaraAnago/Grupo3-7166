#include "Fecha.h"
using namespace std;

Fecha::Fecha() {
	this->dia = 31;
	this->mes = 12;
	this->anio = 3333;
}

Fecha::Fecha(int d, int m, int y) {
	this->dia = d;
	this->mes = m;
	this->anio = y;
}

int Fecha::getDia() {
	return this->dia;
}

Fecha::~Fecha() {

}

int Fecha::getMes() {
	return this->mes;
}

int Fecha::getAnio() {
	return this->anio;
}

void Fecha::setDia(int d) {
	this->dia = d;
}

void Fecha::setMes(int m) {
	this->mes = m;
}

void Fecha::setAnio(int y) {
	this->anio = y;
}

bool Fecha::validarFecha(int d, int m, int y) {
	int i;
	bool bisiesto = false;
	bool val = false;

	//comprobamos si el año es bisiesto
	if (y % 4 == 0 && y % 100 != 100 || y % 400 == 0)
		bisiesto = true;

	//comprobamos que los datos ingresados esten en un rango valido
	if (d > 0 && d < 32 && m>0 && m < 13 && y>1900 && y<2003) {
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			val = true;
		}
		else
		{
			if (m == 2 && d < 30 && bisiesto)
				val = true;
			else if (m == 2 && d < 29 && !bisiesto)
				val = true;
			else if (m != 2 && d < 31)
				val = true;
			else
				val = false;
		}
	}
	else {
		val = false;
	}
	return val;

}
