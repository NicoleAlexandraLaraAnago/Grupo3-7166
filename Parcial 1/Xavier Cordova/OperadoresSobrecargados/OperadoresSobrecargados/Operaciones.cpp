#include "Operaciones.h"
#include <iostream>
using namespace std;

template <class T>
Operaciones<T>::Operaciones(T n1) {
	this->num1 = n1;
}
template <class T>
void Operaciones<T>::setnum1(T n1) {
	this->num1 = n1;
}
template <class T>
T Operaciones<T>::getnum1() {
	return this->num1;
}
template <class T>
Operaciones<T>& Operaciones<T>::operator *(const Operaciones<T>& A) {
	this->num1 *= A.num1;
	return *this;
}
template <class T>
Operaciones<T>& Operaciones<T>::operator /(const Operaciones<T>& A) {
	this->num1 /= A.num1;
	return *this;
}
template class Operaciones<int>;
template class Operaciones<float>;
template class Operaciones<double>;
