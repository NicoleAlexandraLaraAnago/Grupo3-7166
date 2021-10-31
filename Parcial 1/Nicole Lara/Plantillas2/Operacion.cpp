/*
										UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
												   PLANTILLAS

				Autores: 				Nicole Lara
				Fecha de Creaci�n:		30/10/2021
				Fecha de modificacion:	30/010/2021
				Docente: 				Ing. Edgar Fernando Solis Acosta
				Carrera: 				Ingenieria de Software
				Asignatura:             Estructura de Datos
*/
#include <iostream>
#include "Suma.h"
using namespace std;
template <typename S>
S Suma<S>::operacion() {
	return ((this->sumando1 + this->sumando2));
}
