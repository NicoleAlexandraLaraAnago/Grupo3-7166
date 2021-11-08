#pragma once
#include <iostream>
using namespace std;
template <class T>
class Operaciones;
template <typename T>
ostream& operator <<(ostream& o, const Operaciones<T>& A);
template <class T>
class Operaciones
{
	public:
		Operaciones(T n1 = 0);
		void setnum1(T n1);
		T getnum1();
		Operaciones<T>& operator *(const Operaciones<T>& A);
		Operaciones<T>& operator /(const Operaciones<T>& A);
	private:
		T num1;
};

