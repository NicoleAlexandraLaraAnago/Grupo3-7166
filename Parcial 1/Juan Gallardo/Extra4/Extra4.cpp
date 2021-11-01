/*Universidad de las fuerzas armadas ESPE
Deber Extra sobre templates
Autores:  Juan Gallardo
Fecha de creación: Lunes 01 de Noviembre del 2021
Fecha de modificación: Lunes 01 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/
#include <iostream>

template <class elTipo>
void mostrarNumero(elTipo numero);

int main() {
	int numEntero=5;
	float numFloat=5.5643;
	double numDoble=54.545454;
	mostrarNumero(numEntero);
	mostrarNumero(numFloat);
	mostrarNumero(numDoble);
	system("pause");
	return 0;
}
template <class elTipo>
void mostrarNumero(elTipo numero){
	std::cout<<"Mostrar numero de cualquier tipo: "<<numero<<"\n";
}
