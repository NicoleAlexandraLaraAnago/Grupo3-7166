/*
										UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
												   PLANTILLAS

				Autores: 				Nicole Lara
				Fecha de Creacion:		02/10/2021
				Fecha de modificacion:	04/10/2021
				Docente: 				Ing. Edgar Fernando Solis Acosta
				Carrera: 				Ingenieria de Software
				Asignatura:             Estructura de Datos
*/
#include <iostream>
#ifndef RECTANGULO_H
#define RECTANGULO_H
using namespace std;

template <typename A>
class Rectangulo {
public:
	void setLargo(A dato1);
	A getLargo();
	void setAncho(A dato2);
	A getAncho();
	
	
	Rectangulo(A dato1, A dato2);
	~Rectangulo();
	A perimetro();
	A area();
	
private:
	A largo;
	A ancho;
	
};

template <typename A>
void Rectangulo<A>::setLargo(A dato1) {
	this->Largo = dato1;
}

template <typename A>
void Rectangulo<A>::setAncho(A dato2 ){
	this->Ancho = dato2;
}

template <typename A>
A Rectangulo<A>::getLargo() {
	return this->dato1;
}

template <typename A>
A Rectangulo<A>::getAncho() {
	return this->dato2;
}

template <typename A>
Rectangulo<A>::Rectangulo(A dato1, A dato2) {
	this->largo= dato1;
	this->ancho = dato2;
	
}
template <typename A>
Rectangulo<A>::~Rectangulo() {

}
#endif

