#include "Materia.h"
#include <iostream>

using namespace std;
template <class T1, class T2>
Materia<T1,T2>::Materia(T1 NRC, string nombreMateria, string nombreProfesor, T2 nota1, T2 nota2, T2 nota3, T2 notaF, bool estado) {
	this->NRC = NRC;
	this->nombreMateria = nombreMateria;
	this->nombreProfesor = nombreProfesor;
	this->nota1 = nota1;
	this->nota2 = nota2;
	this->nota3 = nota3;
	this->notaF = calcularPromedio(nota1,nota2,nota3);
	if (this->notaF >= 14)
	{
		this->estado = true;
	}
	else {
		this->estado = estado;
	}
	
}

template <class T1, class T2>
Materia<T1,T2>::~Materia() {

}

template <class T1, class T2>
Materia<T1, T2>::Materia() {
	this->estado = false;
}

template <class T1, class T2>
void Materia<T1, T2>::setNRC(T1 NRC) {
	this->NRC = NRC;
}

template <class T1, class T2>
T1 Materia<T1, T2>::getNRC() {
	return this->NRC;
}

template <class T1, class T2>
void Materia<T1, T2>::setNombreMateria(string nombreMateria) {
	this->nombreMateria = nombreMateria;
}

template <class T1, class T2>
string Materia<T1, T2>::getNombreMateria() {
	return this->nombreMateria;
}

template <class T1, class T2>
void Materia<T1, T2>::setNombreProfesor(string nombreProfesor) {
	this->nombreProfesor = nombreProfesor;
}

template <class T1, class T2>
string Materia<T1, T2>::getNombreProfesor() {
	return this->nombreProfesor;
}

template <class T1, class T2>
void Materia<T1, T2>::setNota1(T2 nota1) {
	this->nota1 = nota1;
}

template <class T1, class T2>
T2 Materia<T1, T2>::getNota1() {
	return this->nota1;
}

template <class T1, class T2>
void Materia<T1, T2>::setNota2(T2 nota2) {
	this->nota2 = nota2;
}

template <class T1, class T2>
T2 Materia<T1, T2>::getNota2() {
	return this->nota2;
}

template <class T1, class T2>
void Materia<T1, T2>::setNota3(T2 nota3) {
	this->nota3 = nota3;
}

template <class T1, class T2>
T2 Materia<T1, T2>::getNota3() {
	return this->nota3;
}

template <class T1, class T2>
void Materia<T1, T2>::setNotaF(T2 notaF) {
	this->notaF = notaF;
}

template <class T1, class T2>
T2 Materia<T1, T2>::getNotaF() {
	return this->notaF;
}

template <class T1, class T2>
void Materia<T1, T2>::setEstado(bool estado) {
	this->estado = estado;
}

template <class T1, class T2>
bool Materia<T1, T2>::getEstado() {
	return this->estado;
}

template <class T1, class T2>
T2 Materia<T1, T2>::calcularPromedio(T2 nota1, T2 nota2, T2 nota3) {
	T2 prom = (nota1 + nota2 + nota3) / 3;

	return prom;
}

template class Materia<int, float>;
