#pragma once

#include <iostream>
#include "Fecha.h"
#include "Materia.h"

using namespace std;

template <class T>
class Estudiante
{
public:
	Estudiante();
	Estudiante(string, string, Fecha, string, T, Materia<int, float>[3]);
	~Estudiante();
	void setNombre(string);
	string getNombre();
	void setApellido(string);
	string getApellido();
	void setFechaNacimiento(Fecha);
	Fecha getFechaNacimiento();
	void setID(string);
	string getID();
	void setCedula(T);
	T getCedula();
	void setCorreo(string);
	string getCorreo();
	void setMateria(Materia<int, float>[3]);
	Materia<int, float>* getMateria();
	bool validarCedula(T);
	string generarCorreo(string, string);
private:
	string nombre;
	string apellido;
	Fecha fechaNacimiento;
	string ID;
	T cedula;
	string correo;
	Materia<int, float> materia[3];
};

