#include "Numero.h"
#include <iostream>
using namespace std;
template <class TipoDato>
Numero<TipoDato>::Numero(TipoDato n1, TipoDato n2){
	this->n1=n1;
	this->n2=n2;
}
template <class TipoDato>
void Numero<TipoDato>::setN1(TipoDato n1){
	this->n1=n1;
}
template <class TipoDato>
void Numero<TipoDato>::setN2(TipoDato n2){
	this->n2=n2;
}
template <class TipoDato>
TipoDato Numero<TipoDato>::getN1(){
	return this->n1;
}
template <class TipoDato>
TipoDato Numero<TipoDato>::getN2(){
	return this->n2;
}
template <class TipoDato>
Numero<TipoDato>& Numero<TipoDato>::operator >(const Numero<TipoDato>  &N){
	this->n2>= N.n2;
	this->n1>= N.n1;
	return *this;
}

template class Numero<int>;
template class Numero<float>;
template class Numero<double>;



