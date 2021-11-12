/*Universidad de las fuerzas armadas ESPE
MEMORIAS
Autores:
Xavier Cordova
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creacion: Jueves 11 de Noviembre del 2021
Fecha de modificacion: Jueves 11 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/


#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "Memorias.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int t;
	int *ptr=(int*)malloc(4*sizeof(int));
	std::cout<<"Ingrese el tamanio: "<<std::endl;
	std::cin>>t;
	ingresar(ptr,t);
	imprimir(ptr,t);
	procesar(ptr,t);
	imprimir(ptr,t);
	
	return 0;
}
