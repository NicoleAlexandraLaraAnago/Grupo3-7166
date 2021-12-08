#pragma once
#include <iostream>
#include "Estudiante.h";

using namespace std;
class Nodo {
public:
	Nodo(Estudiante<int> e, Nodo* sig = NULL, Nodo* ant = NULL) :
		estudiante(e), siguiente(sig), anterior(ant) {}
private:
	Estudiante<int> estudiante;
	Nodo* siguiente;
	Nodo* anterior;
	friend class Lista;
};

