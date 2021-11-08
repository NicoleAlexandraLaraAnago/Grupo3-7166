/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordoba
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creación: Miercoles 03 de Noviembre del 2021
Fecha de modificación: Jueves 04 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/

/***********************************************************************
 * Module:  Proceso.cpp
 * Author:  PC
 * Modified: jueves, 4 de noviembre de 2021 18:14:14
 * Purpose: Implementation of the class Proceso
 ***********************************************************************/

#include "Proceso.h"
#include <iostream>
using namespace std;


////////////////////////////////////////////////////////////////////////
// Name:       Proceso::Operacion()
// Purpose:    Implementation of Proceso::Operacion()
// Return:     float
////////////////////////////////////////////////////////////////////////
template <typename T>
T Proceso<T>::resultado()
{
	return ((this->numerador1 * this->denominador2) + (this->numerador2 * this->denominador1)) / (this->denominador1 + this->denominador2);
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::imprimir()
// Purpose:    Implementation of Proceso::imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T>
void Proceso<T>::imprimir()
{
	this->result = this->resultado();
	cout << "El resultado de la operacion " << this->numerador1 << "/" << this->denominador1 << " * " << this->numerador2 << "/" << this->denominador2 << " es = " << this->result << endl;
}