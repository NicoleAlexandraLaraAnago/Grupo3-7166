#pragma once
#include <iostream>
using namespace std;
template <class T>
class Interseccion;
template <typename T>
ostream& operator <<(ostream& o, const Interseccion<T>& A);
template <class T>
class Interseccion
{
public:
	Interseccion(T n1[100]);
	void setConjunto(T n1[100]);
	T* getConjunto();
	T* getInterseccion();
	Interseccion<T>& operator -(const Interseccion<T>& A);
private:
	T conjunto[100];
	T interseccion[1000];
};
