/*
										UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
												   PLANTILLAS

				Autores: 				 Nicole Lara
				Fecha de Creaci�n:		29/10/2021
				Fecha de modificacion:	06/10/2021
				Docente: 				Ing. Edgar Fernando Solis Acosta
				Carrera: 				Ingenieria de Software
				Asignatura:             Estructura de Datos
*/
#include<iostream>
#pragma once
using namespace std;

template <class TipoDato>

class Operaciones{

public:
	
		void setNum5(TipoDato n5);
		TipoDato getNum5();
		void setNum6(TipoDato n6);
		TipoDato getNum6();
		Operaciones(TipoDato n5,TipoDato n6);
    	~Operaciones();
		TipoDato Multiplicar();
		TipoDato Dividir();
private:
		TipoDato num5;
		TipoDato num6;
	
};


template <class TipoDato>
void Operaciones <TipoDato>::setNum5(TipoDato n5) {
	this->num5 = n5;
}

template <class TipoDato>
TipoDato Operaciones<TipoDato>::getNum5() {
	return this->num5;
}
template <class TipoDato>
void Operaciones <TipoDato>::setNum6(TipoDato n6) {
	this->num6 = n6;
}

template <class TipoDato>
TipoDato Operaciones <TipoDato>::getNum6() {
	return this->num6;
}
template<class TipoDato>
Operaciones<TipoDato>::Operaciones(TipoDato n5, TipoDato n6){
	this->num5=n5;
	this->num6=n6;
}


template <typename TipoDato>
Operaciones<TipoDato>::~Operaciones() {

}
