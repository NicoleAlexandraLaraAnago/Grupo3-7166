#include "Estudiante.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template <class T>
Estudiante<T>::Estudiante(string nombre, string apellido, Fecha fechaN, string ID, T cedula, Materia<int, float> materia[3]) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->fechaNacimiento = fechaN;
	this->ID = ID;
	this->cedula = cedula;
	this->correo = generarCorreo(nombre, apellido);
	for (int i = 0; i < 3; i++)
	{
		this->materia[i] = materia[i];
	}
}

template <class T>
Estudiante<T>::~Estudiante() {

}

template <class T>
Estudiante<T>::Estudiante() {

}

template <class T>
void Estudiante<T>::setNombre(string nombre) {
	this->nombre = nombre;
}

template <class T>
string Estudiante<T>::getNombre() {
	return this->nombre;
}

template <class T>
void Estudiante<T>::setApellido(string apellido) {
	this->apellido = apellido;
}

template <class T>
string Estudiante<T>::getApellido() {
	return this->apellido;
}

template <class T>
void Estudiante<T>::setFechaNacimiento(Fecha fecha) {
	this->fechaNacimiento = fecha;
}

template <class T>
Fecha Estudiante<T>::getFechaNacimiento() {
	return this->fechaNacimiento;
}

template <class T>
void Estudiante<T>::setID(string ID) {
	this->ID = ID;
}

template <class T>
string Estudiante<T>::getID() {
	return this->ID;
}

template <class T>
void Estudiante<T>::setCedula(T cedula) {
	this->cedula = cedula;
}

template <class T>
T Estudiante<T>::getCedula() {
	return this->cedula;
}

template <class T>
void Estudiante<T>::setCorreo(string correo) {
	this->correo = correo;
}

template <class T>
string Estudiante<T>::getCorreo() {
	return this->correo;
}

template <class T>
void Estudiante<T>::setMateria(Materia<int, float> materia[3]) {
	for (int i = 0; i < 3; i++)
	{
		this->materia[i] = materia[i];
	}
}

template <class T>
Materia<int, float>* Estudiante<T>::getMateria() {
	return this->materia;
}

template <class T>
bool Estudiante<T>::validarCedula(T cedula) {
	bool validated = false;
	int simp = 0, spar = 0;
	int cimp = 0, cpar = 0;
	int total = 0;
	int verificador = cedula % 10;
	cedula = cedula / 10;
	for (int i = 1; i < 11; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 9)
		{
			cimp = (cedula % 10) * 2;
			if (cimp > 9)
			{
				cimp = cimp - 9;
			}
			simp = simp + cimp;
			cedula = cedula / 10;
		}
		else {
			cpar = (cedula % 10);
			spar = spar + cpar;
			cedula = cedula / 10;
		}
	}
	total = spar + simp;
	total = total % 10;
	if (total > 0)
	{
		total = 10 - total;
	}
	if (total == verificador)
	{
		validated = true;
		return validated;
	}
	else {
		return validated;
	}
}

template <class T>
string Estudiante<T>::generarCorreo(string nombre, string apellido) {
	string nameLower = nombre;
	string lastnameLower = apellido;
	for_each(nameLower.begin(), nameLower.end(), [](char& c) {
		c = ::tolower(c);
		});
	for_each(lastnameLower.begin(), lastnameLower.end(), [](char& c) {
		c = ::tolower(c);
		});
	string n1 = nameLower.substr(0, 1);
	size_t spaceName = nameLower.find(" ");
	string n2 = nameLower.substr(spaceName + 1, 1);
	size_t spaceLastname = lastnameLower.find(" ");
	string n3 = lastnameLower.substr(0, spaceLastname);
	string id = n1 + n2 + n3 + "@espe.edu.ec";
	return id;
}

template class Estudiante<int>;