#include <iostream>
#include "Cola.h"
#include "Nodo.h"
#include "Datos.h"
#include <conio.h>

int main()
{

	Datos datox;
	datox.cantidadClientes();
	datox.genNuevoPrimero();
	datox.imprimir();

	_getch();

}