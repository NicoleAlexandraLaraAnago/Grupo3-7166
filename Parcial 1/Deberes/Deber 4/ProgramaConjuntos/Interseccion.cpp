#include "Interseccion.h"
#include <iostream>
using namespace std;

template <class T>
Interseccion<T>::Interseccion(T n1[5]) {
	for (int i = 0; i < 5; i++)
	{
		this->conjunto[i] = n1[i];
	}
	for (int i = 0; i < 10; i++)
	{
		this->interseccion[i] = 0;
	}
}
template <class T>
void Interseccion<T>::setConjunto(T n1[5]) {
	for (int i = 0; i < 5; i++)
	{
		this->conjunto[i] = n1[i];
	}
}
template <class T>
T* Interseccion<T>::getConjunto() {
	return this->conjunto;
}
template <class T>
T* Interseccion<T>::getInterseccion() {
	return this->interseccion;
}
template <class T>
Interseccion<T>& Interseccion<T>::operator -(const Interseccion<T>& A) {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (this->conjunto[i] == A.conjunto[j]) {
				this->interseccion[i] = A.conjunto[j];
			}
		}
	}
	return *this;
}
template class Interseccion<int>;
template class Interseccion<float>;
template class Interseccion<double>;
