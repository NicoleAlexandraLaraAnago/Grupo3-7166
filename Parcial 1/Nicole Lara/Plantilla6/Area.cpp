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
#include<iostream>
#include"Rectangulo.h"

using namespace std;
template <typename A>
A Rectangulo<A>::area(){
	return((this->largo)*(this->ancho));
}
