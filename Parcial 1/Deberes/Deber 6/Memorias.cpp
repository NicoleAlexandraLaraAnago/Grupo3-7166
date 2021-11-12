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
using namespace std;

template <typename T>
void ingresar(T*, T);
template <typename T>
void imprimir(T*, T);
template <typename T>
void procesar(T*, T);

template <typename T>
void ingresar(T *p, T t)
{
	int i;
	for(i=0;i<t;i++){
		printf("Ingrese el valor entero: ");
		scanf("%d",*(&p)+i);
	}
}
template <typename T>
void imprimir(T *p, T t)
{
	int i;
	for(i=0;i<t;i++){
		printf("\nValor ingresado: ");
		printf("%d",*(&(*p)));	
		*(p++)	;
	}
}

template <typename T>
void procesar(T *p, T t)
{
	int i,e;
	printf("Ingrese el escalar");
	scanf("%d",&e);
	for(i=0;i<t;i++){
		*p=(*(&(*p)))*e;
		*(p++);
	}
}
