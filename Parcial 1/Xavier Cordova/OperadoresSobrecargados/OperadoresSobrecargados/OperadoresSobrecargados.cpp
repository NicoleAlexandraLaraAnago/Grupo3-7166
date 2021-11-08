/*Universidad de las fuerzas armadas ESPE
Ejemplo Operadores Sobrecargados
Autor: Xavier Cordova
Fecha de creación: Domingo 07 de Noviembre del 2021
Fecha de modificación: Domingo 07 de Noviembre del 2021
Version: 1.0
Materia: Estructura de datos
NRC: 7166*/

#include <iostream>
#include "Operaciones.h"

using namespace std;
int main()
{
	int num1, num2;

	cout << "Ingrese numero 1 : " << endl;
	cin >> num1;
	cout << "Ingrese numero 2 : " << endl;
	cin >> num2;

	Operaciones<int> A(num1), B(num2);
	Operaciones<int> C;
	cout << "======== Multiplicacion ========" << endl;
	C = A * B;
	cout << "El resultado es " << C.getnum1() << endl;
	A.setnum1(num1);
	B.setnum1(num2);
	cout << "======== Division ========" << endl;
	C = A / B;
	cout << "El resultado es " << C.getnum1() << endl;
}
