#pragma once
#include <iostream>
using namespace std;
template <class T>
class Punto;
template <typename T>
ostream& operator <<(ostream &o, const Punto<T> &A);

template <class T>
class Punto
{
	public:
		Punto(T x=0, T y=0);
		void setX(T x);
		void setY(T y);
		T getX();
		T getY();
		Punto<T>& operator +(const Punto<T>  &A);
		Punto<T>& operator -(const Punto<T>  &A);
	private:
		T x;
		T y;
		
};
