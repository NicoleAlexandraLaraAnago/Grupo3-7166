/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordova
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creacion: Domingo 16 de Noviembre del 2021
Fecha de modificacion: Domingo 14 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/
#include <iostream>
#include "Union.h"
#include "Interseccion.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	
	int conj1[100], conj2[100];
	int conjR[100] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	
	cout<<"\t\tCONJUNTOS \n"<<endl;
	
	cout << "Ingrese el numero de elementos del conjunto \n" << endl;
		for (int i = 0; i < 100; i++)
	{
		int num;
		cin >>num;
		cout << "Se hara la interseccion y la union de: " <<num<<" elementos"<<endl;
			for (int i = 0; i < num; i++)
	{
		cout << "Ingrese elemento " << i + 1 << " : ";
	
		cin >> conj1[i];
		
	}
	cout << "Ingrese elementos de conjunto 2" << endl;
	for (int i = 0; i < num; i++)
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
	


}
