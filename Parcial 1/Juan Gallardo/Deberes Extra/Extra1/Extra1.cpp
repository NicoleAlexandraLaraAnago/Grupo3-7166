/*Universidad de las fuerzas armadas ESPE
Deber Extra sobre templates
Autores:  Juan Gallardo
Fecha de creación: viernes 29 de Octubre del 2021
Fecha de modificación: Viernes 29 de Octubre del 2021
Materia: Estructura de datos
NRC: 7166*/
#include <iostream>
#include <conio.h>

template <class TIPOD>
void mostrarAb(TIPOD numero);

int main() {
	int num1 = 3;
	float num2 = 34.79;
	double num3 = 148.945;
	
	mostrarAb(num1);
	mostrarAb(num2);
	mostrarAb(num3);
	getch();
	return 0;
}

template <class TIPOD>
void mostrarAb(TIPOD numero){
	if(numero<0){
		numero = numero * -1;
	}
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}
