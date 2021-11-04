#include<iostream>

using namespace std;


//Resta
template <class TipoDato>
class Resta{
	TipoDato n3,n4;
public:
	Resta(TipoDato _n3, TipoDato _n4){
		n3 = _n3;
		n4 = _n4;
	};
	TipoDato Restar();
};

template <class TipoDato>
TipoDato Resta<TipoDato>::Restar(){
	return n3-n4;
}


