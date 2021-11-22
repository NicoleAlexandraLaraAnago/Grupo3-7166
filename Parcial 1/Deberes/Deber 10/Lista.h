#pragma once
#include "Nodo.h"
#include "Crud.h"
#include <iostream>
using namespace std;

class Lista : Crud{
private:
	Nodo* primero;
	Nodo* actual;
	bool listaVacia() {
		return (this->primero == NULL);
	}
public:
	Lista() {
		this->primero = NULL;
		this->actual = NULL;
	};
	void insertar(int val);
	void mostrar();
	bool eliminar(int val);
};

