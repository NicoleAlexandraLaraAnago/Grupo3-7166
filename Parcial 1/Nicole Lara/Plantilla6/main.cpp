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
#include <iostream>
#include"Rectangulo.h"
#include"Perimetro.cpp"
#include"Area.cpp"
#include<conio.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float dato1,dato2;
	cout << "\t\t\tCALCULAR AREA Y PERIMETRO DE UN RECTANGULO" << "\n";
	cout << "Ingrese el largo en metros: ";
	cin >> dato1;
	cout << "Ingrese el ancho en metros: ";
	cin >> dato2;

	cout << "";

	Rectangulo<float> datos(dato1, dato2);

	cout << "\n PERIMETRO-> LARGO: " << dato1 << " Y ANCHO: " <<dato2 <<"\n RESULTADO = " << datos.perimetro() <<"m"<< endl;
	cout << "\n AREA-> LARGO: " << dato1 << " Y ANCHO: " <<dato2 <<"\n RESULTADO = " << datos.area() <<"m^2"<< endl;
	return 0;
}
