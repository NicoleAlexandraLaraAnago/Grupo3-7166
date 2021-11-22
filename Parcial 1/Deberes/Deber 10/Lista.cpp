
#include "Nodo.h"
#include "Lista.h"
#include <iostream>
using namespace std;

void Lista::insertar(int val) {
	Nodo* nuevo = new Nodo(val);
	if (this->listaVacia()) {
		this->primero = nuevo;
	}
	else {
		this->actual->siguiente = nuevo;
	}
	this->actual = nuevo;
}

void Lista::mostrar() {
	Nodo* tmp = this->primero;
	while (tmp) {
		cout << tmp->valor << "-->";
		tmp = tmp->siguiente;
	}
	cout << "null" << endl;
}

bool Lista::eliminar(int val) {
	bool eliminado = false;
	Nodo* tmp = this->primero;
	while (tmp) {
		if (tmp->valor == val) {
			if (tmp->siguiente == NULL)
			{
				tmp->valor = NULL;
				eliminado = true;
				return eliminado;
			}
			else {
				tmp->valor = tmp->siguiente->valor;
				tmp->siguiente = tmp->siguiente->siguiente;
				eliminado = true;
				return eliminado;
			}
		}
		tmp = tmp->siguiente;
	}
	return eliminado;
}
