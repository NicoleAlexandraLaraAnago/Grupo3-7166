/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordova
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creacion: Domingo 09 de Noviembre del 2021
Fecha de modificacion: Domingo 09 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/
#pragma once
#include <iostream>
#include <fstream>

using namespace std;
template <typename T>
class Caja {
public:
	Caja();
	Caja(T);
	Caja(T, T);
	Caja(T, T, T);
	void mostrarMedidas();
	void setAncho(T);
	T getAncho();
	void setAlto(T);
	T getAlto();
	void setProf(T);
	T getProf();
private:
	T ancho;
	T alto;
	T profundidad;
};

template <typename T>
void Caja<T>::setAncho(T _ancho) {
	this->ancho = _ancho;
}
template <typename T>
T Caja<T>::getAncho() {
	return this->ancho;
}
template <typename T>
void Caja<T>::setAlto(T _alto) {
	this->alto = _alto;
}
template <typename T>
T Caja<T>::getAlto() {
	return this->alto;
}
template <typename T>
void Caja<T>::setProf(T _prof) {
	this->profundidad = _prof;
}
template <typename T>
T Caja<T>::getProf() {
	return this->profundidad;
}
template <typename T>
Caja<T>::Caja() {
	this->ancho = 1;
	this->alto = 1;
	this->profundidad = 1;
}
template <typename T>
Caja<T>::Caja(T _alto) {
	this->alto = _alto;
	this->ancho = 1;
	this->profundidad = 1;
}
template <typename T>
Caja<T>::Caja(T _alto, T _ancho) {
	this->alto = _alto;
	this->ancho = _ancho;
	this->profundidad = 1;
}
template <typename T>
Caja<T>::Caja(T _alto, T _ancho, T _profundidad) {
	this->alto = _alto;
	this->ancho = _ancho;
	this->profundidad = _profundidad;
}
