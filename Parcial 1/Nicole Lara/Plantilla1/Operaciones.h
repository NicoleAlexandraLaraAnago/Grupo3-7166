#include<iostream>
#pragma once
using namespace std;

template <class TipoDato>

class Operaciones{

public:
	
		void setNum3(TipoDato n3);
		TipoDato getNum3();
		void setNum4(TipoDato n4);
		TipoDato getNum4();
		Operaciones(TipoDato n3,TipoDato n4);
    	~Operaciones();
		TipoDato SacarRaiz();
		
private:
		TipoDato num3;
		TipoDato num4;
	
};


template <class TipoDato>
void Operaciones <TipoDato>::setNum3(TipoDato n3) {
	this->num3 = n3;
}

template <class TipoDato>
TipoDato Operaciones<TipoDato>::getNum3(){
	return this->num3;
}
template <class TipoDato>
void Operaciones <TipoDato>::setNum4(TipoDato n4) {
	this->num4 = n4;
}

template <class TipoDato>
TipoDato Operaciones <TipoDato>::getNum4() {
	return this->num4;
}
template<class TipoDato>
Operaciones<TipoDato>::Operaciones(TipoDato n3, TipoDato n4){
	this->num3=n3;
	this->num4=n4;
}


template <typename TipoDato>
Operaciones<TipoDato>::~Operaciones() {

}

