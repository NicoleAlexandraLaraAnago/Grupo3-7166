#pragma once
#include <iostream>
#include "Nodo.h"
#include "Estudiante.h"

using namespace std;
typedef Nodo* pnodo;
class Lista
{
public:
	Lista() : plista(NULL) {}
	~Lista();
	void insertar(Estudiante<int>);
	void borrar(string);
	Estudiante<int> buscar(Estudiante<int>);
	bool listaVacia() { return plista == NULL; }
	void mostrarListadoEstudiantes();
	void mostrarNotasEstudiante(string);
	void siguiente();
	void anterior();
	void primero();
	void ultimo();
	bool actual() { return plista != NULL; }
	Estudiante<int> valorActual() { return plista->estudiante; }
private:
	pnodo plista;
};

