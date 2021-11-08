/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordova
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creación: Domingo 07 de Noviembre del 2021
Fecha de modificación: Domingo 07 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/

#include <iostream>
#include "Union.h"
#include "Interseccion.h"

using namespace std;
int main()
{
	int conj1[5], conj2[5];
	int conjR[5] = { 0,0,0,0,0 };
	
	cout<<"\t\tCONJUNTOS \n"<<endl;
	
	cout << "Ingrese elementos de conjunto 1 \n" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Ingrese elemento " << i + 1 << " : ";
		cin >> conj1[i];
	}
	cout << "Ingrese elementos de conjunto 2" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Ingrese elemento " << i + 1 << " : ";
		cin >> conj2[i];
	}

	Union<int> A(conj1), B(conj2);
	Union<int> C(conjR);
	cout << "======== Union ========" << endl;
	C = A + B;
	cout << "La union de ambos conjuntos es :" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << C.getUnion()[i] << endl;
	}
	cout << "========================\n" << endl;

	Interseccion<int> D(conj1), E(conj2);
	Interseccion<int> F(conjR);
	cout << "======== Interseccion ========" << endl;
	F = D - E;
	cout << "La Interseccion de ambos conjuntos es :" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << F.getInterseccion()[i] << endl;
	}
	cout << "========================\n" << endl;
}
