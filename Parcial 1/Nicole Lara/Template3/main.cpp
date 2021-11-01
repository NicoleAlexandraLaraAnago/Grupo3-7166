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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Numero<int> dosnum(20,50);
	cout<<"la respuesta al numero mayor entre 20 y 50 es: "<<dosnum.Mayor()<<endl;
	return 0;
}
