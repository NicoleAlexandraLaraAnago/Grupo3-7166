/*
										UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
												   PLANTILLAS

				Autores: 				 Nicole Lara
				Fecha de Creación:		29/10/2021
				Fecha de modificacion:	29/10/2021
				Docente: 				Ing. Edgar Fernando Solis Acosta
				Carrera: 				Ingenieria de Software
				Asignatura:             Estructura de Datos
*/

#include <iostream>
#include "Operaciones.h"

using namespace std;

main(){


	
	Multiplicacion<int> multi(5,8);
	cout<<"El resultado de 5*8 es: "<<multi.Multiplicar()<<endl;
	
	Division<float> divi(15,2);
	cout<<"El resultado de 15/2 es: "<<divi.Dividir()<<endl;
}
