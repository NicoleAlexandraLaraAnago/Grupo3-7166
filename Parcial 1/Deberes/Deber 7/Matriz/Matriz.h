/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordova
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creacion: Domingo 14 de Noviembre del 2021
Fecha de modificacion: Domingo 14 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/
#pragma once
#include <iostream>
using namespace std;

template<class T>
class Matriz {
public:
	void segmentarM1(T);
	void segmentarMr(T);
	void encerarM1(T);
	void encerarMr(T);
	void ingresar(T);
	void imprimirM1(T);
	void imprimirMr(T);
	void procesar(T, T);
private:
	T** m1;
	T** mr;
};

