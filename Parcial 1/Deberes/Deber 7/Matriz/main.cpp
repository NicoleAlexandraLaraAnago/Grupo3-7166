/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordova
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creacion: Domingo 14 de Noviembre del 2021
Fecha de modificacion: Domingo 14 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Matriz.h"
#include "Matriz.cpp"
#include <cmath>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int d, p;
	Matriz<int> m;
	printf("Ingrese la dimension de la matriz: ");
	scanf("%d", &d);
	m.segmentarM1(d);
	m.segmentarMr(d);
	m.encerarM1(d);
	m.encerarMr(d);
	m.ingresar(d);
	printf("\n");
	m.imprimirM1(d);
	printf("\n");
	printf("Ingrese potencia: ");
	scanf("%d", &p);
	printf("\n");
	m.procesar(d, p);
	printf("\n");
	m.imprimirMr(d);
	return 0;
}
