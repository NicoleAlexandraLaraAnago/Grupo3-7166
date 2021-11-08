/*
										UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
												   PLANTILLAS

				Autores: 				Nicole Lara
				Fecha de Creacion:		30/10/2021
				Fecha de modificacion:	01/010/2021
				Docente: 				Ing. Edgar Fernando Solis Acosta
				Carrera: 				Ingenieria de Software
				Asignatura:             Estructura de Datos
*/
#include <iostream>
#pragma once
using namespace std;

template <typename S>
class Factorial {
public:
	void setNumero1(S n1);
	S getSNumero1();
	
	Factorial(S n1);
	~Factorial();
	S operacion();
	
private:
	S numero1;
	
};

template <typename S>
void Factorial<S>::setNumero1(S n1) {
	this->numero1 = n1;
}


/*template <typename S>
 S Factorial<S>::getNumero1() {
	return this->numero1;
}*/



template <typename S>
Factorial<S>::Factorial(S n1) {
	this->numero1 = n1;

	
}
template <typename S>
Factorial<S>::~Factorial() {

}


