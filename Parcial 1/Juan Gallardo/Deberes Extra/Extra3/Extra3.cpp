/*Universidad de las fuerzas armadas ESPE
Deber Extra sobre templates
Autores:  Juan Gallardo
Fecha de creación: domingo 31 de Octubre del 2021
Fecha de modificación: domingo 31 de Octubre del 2021
Materia: Estructura de datos
NRC: 7166*/
#include <iostream>
using namespace std;

template <class T>
class suma{
	public: 
		suma(T, T);
		T sumar();
	private:
		T n1;
		T n2;
			
};
template <class T>
suma<T>::suma(T n, T m){
	n1 = n;
	n2 = m;
}
template <class T>
T suma<T>::sumar(){
	return n1 + n2;
}

int main() {
	suma<int> sum(4, 6);
	cout<<sum.sumar();
	return 0;
}
