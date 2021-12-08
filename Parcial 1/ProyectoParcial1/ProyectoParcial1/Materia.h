#pragma once
#include<iostream>

using namespace std;

template <class T1, class T2>
class Materia
{
public:
	Materia();
	Materia(T1, string, string, T2, T2, T2, T2, bool);
	~Materia();
	void setNRC(T1);
	T1 getNRC();
	void setNombreMateria(string);
	string getNombreMateria();
	void setNombreProfesor(string);
	string getNombreProfesor();
	void setNota1(T2);
	T2 getNota1();
	void setNota2(T2);
	T2 getNota2();
	void setNota3(T2);
	T2 getNota3();
	void setNotaF(T2);
	T2 getNotaF();
	void setEstado(bool);
	bool getEstado();
	T2 calcularPromedio(T2,T2, T2);
private:
	T1 NRC;
	string nombreMateria;
	string nombreProfesor;
	T2 nota1;
	T2 nota2;
	T2 nota3;
	T2 notaF;
	bool estado;
};

