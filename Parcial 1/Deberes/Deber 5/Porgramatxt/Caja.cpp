/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordova
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creacion: Domingo 09 de Noviembre del 2021
Fecha de modificacion: Domingo 09 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/
#include <iostream>
#include <fstream>
#include "Caja.h"
using namespace std;
template <typename T>
void Caja<T>::mostrarMedidas() {
	cout << "Valor del atributo Alto " << getAlto() << endl;
	cout << "Valor del atributo Ancho " << getAncho() << endl;
	cout << "Valor del atributo Profundidad " << getProf() << endl;
	cout << endl;
}
