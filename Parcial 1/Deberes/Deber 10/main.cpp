
#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
	Lista lst;
	int dim, val;
	cout << "Cuantos elementos desea agregar a la lista: ";
	cin >> dim;
	for (int i = 0; i < dim; i++)
	{
		cout << "Ingrese elemento " << i + 1 << ": ";
		cin >> val;
		lst.insertar(val);
	}

	cout << endl;
	cout << "Lista ingresada : ";
	lst.mostrar();

	int opc = 0;
	while (opc != 4) {
		cout << endl;
		cout << "Que desea hacer ahora con la lista?" << endl;
		cout << "1.- Agregar nuevo elemento" << endl;
		cout << "2.- Eliminar elemento" << endl;
		cout << "3.- Ver Lista" << endl;
		cout << "4.- Salir" << endl;
		cout << "Escoja una opcion: ";
		cin >> opc;
		switch (opc)
		{
		case 1:
			cout << endl;
			cout << "Ingrese nuevo elemento: ";
			cin >> val;
			lst.insertar(val);
			break;
		case 2:
			cout << endl;
			cout << "Ingrese elemento a eliminar: ";
			cin >> val;
			if (lst.eliminar(val)) {
				cout << "Elemento eliminado" << endl;
			}
			else {
				cout << "Elemnto no existe en lista" << endl;
			}
			break;
		case 3:
			cout << endl;
			lst.mostrar();
			break;
		default:
			break;
		}
	}
}
