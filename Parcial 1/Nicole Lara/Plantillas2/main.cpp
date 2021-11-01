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
#include"Operacion.cpp"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	float sumando1, sumando2;
	cout << "\t\t\tCALCULAR SUMA" << "\n";
	cout << "Ingrese sumando 1 : " << "\n";
	cin >> sumando1;
	cout << "Ingrese sumando 2 : " << "\n";
	cin >> sumando2;

	cout << "" << "\n";

	Suma<float> datos(sumando1, sumando2);

	cout << "\n RESULTADO: " << sumando1 << "+" <<sumando2 <<" = " << datos.operacion() << endl;

	return 0;
}
