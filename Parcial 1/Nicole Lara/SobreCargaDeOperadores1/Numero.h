#pragma once
#include <iostream>
using namespace std;
template <class TipoDato>
class Numero;
template <typename TipoDato>
ostream& operator <<(ostream &o, const Numero<TipoDato> &N);

template <class TipoDato>
class Numero{
	public:
		Numero(TipoDato n1=0, TipoDato n2=0);
		void setN1(TipoDato n1);
		void setN2(TipoDato n2);
		TipoDato getN1();
		TipoDato getN2();
		Numero<TipoDato>& operator >(const Numero<TipoDato>  &N);
		
	private:
		TipoDato n1;
		TipoDato n2;
};
