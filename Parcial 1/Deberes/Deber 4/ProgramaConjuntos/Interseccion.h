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
	Interseccion(T n1[5]);
	void setConjunto(T n1[5]);
	T* getConjunto();
	T* getInterseccion();
	Interseccion<T>& operator -(const Interseccion<T>& A);
private:
	T conjunto[5];
	T interseccion[10];
};
