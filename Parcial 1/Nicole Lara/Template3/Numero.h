/*
										UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
												   PLANTILLAS

				Autores: 				 Nicole Lara
				Fecha de Creaci?n:		31/10/2021
				Fecha de modificacion:	31/10/2021
				Docente: 				Ing. Edgar Fernando Solis Acosta
				Carrera: 				Ingenieria de Software
				Asignatura:             Estructura de Datos
*/

#include<iostream>
using namespace std;

template <class Simbolo>
class Numero{
	private:
	Simbolo n1, n2;
	public:
	Numero(Simbolo num1, Simbolo num2){
		this->n1=num1;
		this->n2=num2;
	}
	Simbolo Mayor();
};

template<class Simbolo>
Simbolo Numero<Simbolo>::Mayor(){
	return (n1>n2? n1:n2);
}
