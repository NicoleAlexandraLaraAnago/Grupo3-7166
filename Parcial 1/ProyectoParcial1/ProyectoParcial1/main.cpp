/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordova
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creación: Martes 30 de Noviembre del 2021
Fecha de modificación: Martes 7 de Diciembre del 2021
Materia: Estructura de datos
NRC: 7166*/

#include <iostream>
#include <string>
#include "Estudiante.h"
#include "Lista.h"
#include "Fecha.h"
#include "Materia.h"

using namespace std;

int main()
{
	Lista lista;
	Fecha validador, f;
	Estudiante<int> verificador, e;
	Materia<int, float> materias[3];
	int opc = 0;
	bool bad = false, badc = false, valido = false;
	string nombre, apellido, ID, nombreM, nombreP;
	int cedula, dia, mes, anio, nrc;
	float nota1, nota2, nota3;
	while (opc != 5) {
		cout << endl;
		cout << "Seleccione una opcion" << endl;
		cout << "1.-Ingresar estudiante" << endl;
		cout << "2.-Ver estudiantes registrados" << endl;
		cout << "3.-Ver notas de estudiante" << endl;
		cout << "4.-Eliminar estudiante" << endl;
		cout << "5.-Salir" << endl;
		do {
			cout << "Ingrese una opcion: ";
			cin >> opc;
			bad = cin.fail();
			if (bad) {
				cout << "Ingrese solo numeros" << endl;
			}
			cin.clear();
			cin.ignore(10, '\n');
		} while (bad);
		switch (opc) {
		case 1:
			cout << "ID del estudiante: ";
			cin >> ID;
			cin.ignore(10, '\n');
			cout << "Nombres del estudiante: ";
			getline(cin, nombre);
			cout << "Apellidos del estudiante: ";
			getline(cin, apellido);
			do {
				cout << "Cedula del estudiante: ";
				cin >> cedula;
				badc = cin.fail();
				if (badc) {
					cout << "Ingrese solo numeros" << endl;
				}
				if (!verificador.validarCedula(cedula)) {
					cout << "Cedula invalida, intente de nuevo" << endl;
					badc = true;
				}
				cin.clear();
				cin.ignore(10, '\n');
			} while (badc);
			cout << "Fecha de Nacimineto del Estudiante" << endl;
			do {
				cout << "Dia: ";
				cin >> dia;
				bad = cin.fail();
				if (bad) {
					cout << "Ingrese solo numeros" << endl;
				}
				cin.clear();
				cin.ignore(10, '\n');
			} while (bad);
			do {
				cout << "Mes: ";
				cin >> mes;
				bad = cin.fail();
				if (bad) {
					cout << "Ingrese solo numeros" << endl;
				}
				cin.clear();
				cin.ignore(10, '\n');
			} while (bad);
			do {
				cout << "Anio: ";
				cin >> anio;
				bad = cin.fail();
				if (bad) {
					cout << "Ingrese solo numeros" << endl;
				}
				cin.clear();
				cin.ignore(10, '\n');
			} while (bad);
			valido = validador.validarFecha(dia, mes, anio);
			while (!valido) {
				cout << "Fecha Invalida, Intente de nuevo" << endl;
				do {
					cout << "Dia: ";
					cin >> dia;
					bad = cin.fail();
					if (bad) {
						cout << "Ingrese solo numeros" << endl;
					}
					cin.clear();
					cin.ignore(10, '\n');
				} while (bad);
				do {
					cout << "Mes: ";
					cin >> mes;
					bad = cin.fail();
					if (bad) {
						cout << "Ingrese solo numeros" << endl;
					}
					cin.clear();
					cin.ignore(10, '\n');
				} while (bad);
				do {
					cout << "Anio: ";
					cin >> anio;
					bad = cin.fail();
					if (bad) {
						cout << "Ingrese solo numeros" << endl;
					}
					cin.clear();
					cin.ignore(10, '\n');
				} while (bad);
				valido = validador.validarFecha(dia, mes, anio);
			}
			f = Fecha(dia, mes, anio);
			cout << "Ingrese datos de materias del estudiante" << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << "MATERIA " << i+1 << endl;
				do {
					cout << "NRC de materia: ";
					cin >> nrc;
					bad = cin.fail();
					if (bad) {
						cout << "Ingrese solo numeros" << endl;
					}
					cin.clear();
					cin.ignore(10, '\n');
				} while (bad);
				cout << "Nombre de la materia: ";
				getline(cin, nombreM);
				cout << "Nombre del profesor: ";
				getline(cin, nombreP);
				do {
					cout << "Nota 1: ";
					cin >> nota1;
					bad = cin.fail();
					if (bad) {
						cout << "Ingrese solo numeros" << endl;
					}
					cin.clear();
					cin.ignore(10, '\n');
				} while (bad);
				do {
					cout << "Nota 2: ";
					cin >> nota2;
					bad = cin.fail();
					if (bad) {
						cout << "Ingrese solo numeros" << endl;
					}
					cin.clear();
					cin.ignore(10, '\n');
				} while (bad);
				do {
					cout << "Nota 3: ";
					cin >> nota3;
					bad = cin.fail();
					if (bad) {
						cout << "Ingrese solo numeros" << endl;
					}
					cin.clear();
					cin.ignore(10, '\n');
				} while (bad);
				Materia<int, float> m(nrc, nombreM, nombreP, nota1, nota2, nota3, 0.0f, false);
				materias[i] = m;
			}
			e = Estudiante<int>(nombre, apellido, f, ID, cedula, materias);
			e = lista.buscar(e);
			lista.insertar(e);
			break;
		case 2:
			lista.mostrarListadoEstudiantes();
			break;
		case 3:
			cout << "Ingrese ID de estudiante: ";
			cin >> ID;
			lista.mostrarNotasEstudiante(ID);
			break;
		case 4:
			cout << "Ingrese ID de estudiante: ";
			cin >> ID;
			lista.borrar(ID);
			break;
		default:
			break;
		}

	}
}

