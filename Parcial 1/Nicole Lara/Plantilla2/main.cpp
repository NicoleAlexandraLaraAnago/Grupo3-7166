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

#include <iostream>
#include "Operaciones.h"
#include "Multiplicacion.cpp"
#include "Division.cpp"
using namespace std;

main(){
	
	float num5,num6;
	
	cout<<"\t\t MULTIPLICACION Y DIVISION DE 2 NUMEROS"<<endl;
	
	cout << "Ingrese el primer numero : ";
	cin >> num5;
	cout << "Ingrese el segundo numero : ";
	cin >> num6;

	
	Operaciones<float> multi(num5,num6);
	cout<<"El resultado de "<<num5<<" * "<<num6<<" es = "<<multi.Multiplicar()<<endl;
	
	Operaciones<float> divi(num5,num6);
	cout<<"El resultado de "<<num5<<" / "<<num6<<" es = : "<<divi.Dividir()<<endl;
}
