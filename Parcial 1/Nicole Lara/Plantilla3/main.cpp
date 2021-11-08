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
#include <iostream>
#include"Numero.h"
#include"Desarrollo.cpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float n1, n2;
	cout << "\t\tCALCULAR EL NUMERO MAYOR" << "\n";
	cout << "Ingrese el primer numero : ";
	cin >> n1;
	cout << "Ingrese el segundo numero : ";
	cin >> n2;
	
	Numero<float>dosnum(n1, n2);
	
	cout <<" "<<endl;
	cout<<"Numero mayor entre "<<n1<<" y "<<n2<< " es = "<<dosnum.Mayor()<<endl;
	return 0;
}
