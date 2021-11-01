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

using namespace std;

template <typename S>
class Suma {
public:
	void setSumando1(S n1);
	S getSumando1();
	void setSumando2(S n2);
	S getSumando2();

	
	Suma(S n1, S n2);
	~Suma();
	S operacion();
	
private:
	S sumando1;
	S sumando2;
	
};

template <typename S>
void Suma<S>::setSumando1(S n1) {
	this->sumando1 = n1;
}

template <typename S>
void Suma<S>::setSumando2(S n2) {
	this->sumando2 = n2;
}

template <typename S>
S Suma<S>::getSumando1() {
	return this->sumando1;
}

template <typename S>
S Suma<S>::getSumando2() {
	return this->sumando2;
}

template <typename S>
Suma<S>::Suma(S n1, S n2) {
	this->sumando1 = n1;
	this->sumando2 = n2;
	
}
template <typename S>
Suma<S>::~Suma() {

}
template <typename S>
S Suma<S>::operacion() {
	return ((this->sumando1 + this->sumando2));
}
