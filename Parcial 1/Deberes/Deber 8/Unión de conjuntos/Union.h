#pragma once
#include <iostream>
using namespace std;
template <class T>
class Union;
template <typename T>
ostream& operator <<(ostream& o, const Union<T>& A);
template <class T>
class Union
{
public:
	Union(T n1[100]);
	void setConjunto(T n1[100]);
	T* getConjunto();
	T* getUnion();
	Union<T>& operator +(const Union<T> &A);
private:
	T conjunto[100];
	T resUnion[1000];
};
