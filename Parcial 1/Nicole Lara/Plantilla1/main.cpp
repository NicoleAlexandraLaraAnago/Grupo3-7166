/*
										UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
												   PLANTILLAS

				Autores: 				Kevin Condor, Nicole Lara, Cristian Maranje, Stalin Rivera, Shirley Otuna
				Fecha de Creación:		19/05/2021
				Fecha de modificacion:	19/05/2021
				Docente: 				Ing. Edgar Fernando Solis Acosta
				Carrera: 				Ingenieria de Software
				Asignatura:             Estructura de Datos
*/

#include <iostream>
#include "Operaciones.h"
#include "Modulo.cpp"
#include <cmath>
using namespace std;

main(){
	float num3,num4;
	
	cout<<"\t\t MODULO DE UN VECTOR"<<endl;
	
	cout << "Ingrese el componente en x/i : ";
	cin >> num3;
	cout << "Ingrese el componente en y/j  : ";
	cin >> num4;

	
	Operaciones<float> vector(num3,num4);
	cout<<"El modulo del vector ("<<num3<<","<<num4<<") es = "<<vector.SacarRaiz()<<endl;
	
	
	

}
