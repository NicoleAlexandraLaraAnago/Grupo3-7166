#include "Lista.h"
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

Lista::~Lista()
{
	pnodo aux;
	primero();
	while (plista) {
		aux = plista;
		plista = plista->siguiente;
		delete aux;
	}
}
void Lista::insertar(Estudiante<int> v)
{
	pnodo nuevo;
	primero();
	if (listaVacia()) {
		nuevo = new Nodo(v, plista);
		if (!plista) plista = nuevo;
		else plista->anterior = nuevo;
	}
	else {
		while (plista->siguiente) siguiente();
		nuevo = new Nodo(v, plista->siguiente, plista);
		plista->siguiente = nuevo;
		if (nuevo->siguiente) nuevo->siguiente->anterior = nuevo;
	}
}
void Lista::borrar(string ID)
{
	pnodo nodo;
	nodo = plista;
	while (nodo && nodo->estudiante.getID() != ID)nodo = nodo->siguiente;
		if (!nodo) return;
		if (nodo->estudiante.getID() == ID)
		{
			if (nodo == plista)
				if (nodo->anterior) plista = nodo->anterior;
				else plista = nodo->siguiente;
			if (nodo->anterior) 
				nodo->anterior->siguiente = nodo->siguiente;
			if (nodo->siguiente) 
				nodo->siguiente->anterior = nodo->anterior;
		}
		delete nodo;
}

Estudiante<int> Lista::buscar(Estudiante<int> e) {

	pnodo nodo;
	primero();
	nodo = plista;
	while ((nodo != NULL)) {
		if (nodo->estudiante.getCorreo() == e.getCorreo())
		{
			string correo = e.getCorreo();
			string nombre = correo.substr(0, correo.find("@"));
			string email = correo.substr(correo.find("@"), correo.length());
			char indice = nombre.back();
			if (isdigit(indice))
			{
				nombre.erase(nombre.find(indice));
				int i = indice - '0';
				i++;
				string n;
				stringstream ss;
				ss << i;
				ss >> n;
				nombre.append(n);
			}
			else {
				nombre.append("1");
			}
			e.setCorreo(nombre + email);
		}
		nodo = nodo->siguiente;
	}
	return e;
}

void Lista::mostrarListadoEstudiantes()
{
	pnodo nodo;
	primero();
	nodo = plista;
	cout << setw(20) << left << "ID" << setw(20) << "Nombre" << setw(20) << "Apellido" << setw(20) << "Cedula" << setw(20) << "Fecha Nacimiento" << setw(20) << "Correo" << endl;
	while (nodo) {
		cout << setw(20) << left << nodo->estudiante.getID() << setw(20) << nodo->estudiante.getNombre() << setw(20) << nodo->estudiante.getApellido() << setw(20) << nodo->estudiante.getCedula() << nodo->estudiante.getFechaNacimiento().getDia() << "/" << nodo->estudiante.getFechaNacimiento().getMes() << "/" << nodo->estudiante.getFechaNacimiento().getAnio() << setw(10) << "" << nodo->estudiante.getCorreo() << endl;
		nodo = nodo->siguiente;
	}
	cout << "NULL" << endl;
}
void Lista::mostrarNotasEstudiante(string ID)
{
	bool band = false;
	string estado = "";
	pnodo nodo;
	primero();
	nodo = plista;
	cout << setw(20) << left << "ID" << setw(20) << "Nombre" << setw(20) << "Apellido" << setw(20) << "Cedula" << setw(20) << "Correo" << endl;
	while ((nodo!=NULL)) {
		if (nodo->estudiante.getID() == ID)
		{
			cout << setw(20) << left << nodo->estudiante.getID() << setw(20) << nodo->estudiante.getNombre() << setw(20) << nodo->estudiante.getApellido() << setw(20) << nodo->estudiante.getCedula() << setw(20) << setw(20) << nodo->estudiante.getCorreo() << endl;
			cout << endl;
			cout << setw(20) << left << "NRC" << setw(20) << "Materia" << setw(20) << "Profesor" << setw(20) << "Nota 1" << setw(20) << "Nota 2"<< setw(20) << "Nota 3" << setw(20) << "Promedio" << setw(20) << "Estado" << setw(20) << endl;
			for (int i = 0; i < 3; i++)
			{
				if (nodo->estudiante.getMateria()[i].getEstado())
				{
					estado = "APROBADO";
				}
				else {
					estado = "REPROBADO";
				}
				cout << setw(20) << nodo->estudiante.getMateria()[i].getNRC() << setw(20) << nodo->estudiante.getMateria()[i].getNombreMateria() << setw(20) << nodo->estudiante.getMateria()[i].getNombreProfesor() << setw(20) << nodo->estudiante.getMateria()[i].getNota1() << setw(20) << nodo->estudiante.getMateria()[i].getNota2() << setw(20) << nodo->estudiante.getMateria()[i].getNota3() << setw(20) << nodo->estudiante.getMateria()[i].getNotaF() << estado << endl;
			}
			band = true;
		}
		nodo = nodo->siguiente;
	}
	if (!band)
	{
		cout << "Alumno no existe" << endl;
	}
	cout << "NULL" << endl;
}
void Lista::siguiente()
{
	if (plista) plista = plista->siguiente;
}
void Lista::anterior()
{
	if (plista) plista = plista->anterior;
}
void Lista::primero()
{
	while (plista && plista->anterior) plista = plista->anterior;
}
void Lista::ultimo()
{
	while (plista && plista->siguiente) plista = plista->siguiente;
}
