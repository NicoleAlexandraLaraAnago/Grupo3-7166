#include "Punto.h"
#include <iostream>
using namespace std;
template <class T>
Punto<T>::Punto(T x, T y){
	this->x=x;
	this->y=y;
}
template <class T>
void Punto<T>::setX(T x){
	this->x=x;
}
template <class T>
void Punto<T>::setY(T y){
	 this->y=y;
}
template <class T>
T Punto<T>::getX(){
	return this->x;
}
template <class T>
T Punto<T>::getY(){
	return this->y;
}
template <class T>
Punto<T>& Punto<T>::operator +(const Punto<T>  &A){
	this->y+= A.y;
	this->x+= A.x;
	return *this;
}
template <class T>
Punto<T>& Punto<T>::operator -(const Punto<T>  &A){
	this->y-= A.y;
	this->x-= A.x;
	return *this;
}
template class Punto<int>;
template class Punto<float>;
template class Punto<double>;


