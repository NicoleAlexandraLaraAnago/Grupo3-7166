#include "Union.h"
#include <iostream>
using namespace std;

template <class T>
Union<T>::Union(T n1[5]) {
	for (int i = 0; i < 5; i++)
	{
		this->conjunto[i] = n1[i];
	}
	for (int i = 0; i < 10; i++)
	{
		this->resUnion[i] = 0;
	}
}
template <class T>
void Union<T>::setConjunto(T n1[5]) {
	for (int i = 0; i < 5; i++)
	{
		this->conjunto[i] = n1[i];
	}
}
template <class T>
T* Union<T>::getConjunto() {
	return this->conjunto;
}
template <class T>
T* Union<T>::getUnion() {
	return this->resUnion;
}
template <class T>
Union<T>& Union<T>::operator +(const Union<T>& A) {
	for (int i = 0; i < 5; i++)
	{
		this->resUnion[i] = this->conjunto[i];
	}
	int espacios = 0;
	for (int i = 5; i < 10; i++)
	{
		int count = 0;
		for (int j = 0; j < 5; j++)
		{
			if (this->conjunto[i] == A.conjunto[j]) {
				count++;
				espacios++;
			}
		}
		if (count == 0) {
			this->resUnion[i - espacios] = A.conjunto[i-5];
		}
	}
	return *this;
}
template class Union<int>;
template class Union<float>;
template class Union<double>;
