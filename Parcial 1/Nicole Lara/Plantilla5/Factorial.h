/*
										UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
												   PLANTILLAS

				Autores: 				Nicole Lara
				Fecha de Creacion:		30/10/2021
				Fecha de modificacion:	01/010/2021
				Docente: 				Ing. Edgar Fernando Solis Acosta
				Carrera: 				Ingenieria de Software
				Asignatura:             Estructura de Datos
*/
#include <iostream>

using namespace std;

template <typename S>
class Factorial {
public:
	void setNumero1(S n1);
	S getSNumero1();
	
	Factorial(S n1);
	~Factorial();
	S operacion();
	
private:
	S numero1;
	
};

template <typename S>
void Factorial<S>::setNumero1(S n1) {
	this->numero1 = n1;
}


/*template <typename S>
 S Factorial<S>::getNumero1() {
	return this->numero1;
}*/



template <typename S>
Factorial<S>::Factorial(S n1) {
	this->numero1 = n1;

	
}
template <typename S>
Factorial<S>::~Factorial() {

}
template <typename S>
S Factorial<S>::operacion() {
int factorial = 1;
	for(int i=1;i<=numero1;i++ ){
		factorial = factorial * i;
	}
	return factorial;
}

