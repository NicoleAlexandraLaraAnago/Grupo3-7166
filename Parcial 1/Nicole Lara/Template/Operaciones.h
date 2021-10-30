#include<iostream>

using namespace std;

//Multiplicacion
template <class TipoDato>
class Multiplicacion{
	TipoDato n5,n6;
public:
	Multiplicacion(TipoDato _n5, TipoDato _n6){
		n5 = _n5;
		n6 = _n6;
	};
	TipoDato Multiplicar();
};

template <class TipoDato>
TipoDato Multiplicacion<TipoDato>::Multiplicar(){
	return n5*n6;
}

//Division
template <class TipoDato>
class Division{
	TipoDato n7,n8;
public:
	Division(TipoDato _n7, TipoDato _n8){
		n7 = _n7;
		n8 = _n8;
	};
	TipoDato Dividir();
};

template <class TipoDato>
TipoDato Division<TipoDato>::Dividir(){
	return n7/n8;
}
