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
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include "Matriz.h"
using namespace std;

template<class T>
void Matriz<T>::segmentarM1(T d) {
	T** mat;
	int i;
	mat = (T**)malloc(d * sizeof(T*));
	for (i = 0;i < d;i++) {
		*(mat + i) = (T*)malloc(d * sizeof(T));
	}
	this->m1 = mat;
	return;
}
template<class T>
void Matriz<T>::segmentarMr(T d) {
	T** mat;
	int i;
	mat = (T**)malloc(d * sizeof(T*));
	for (i = 0;i < d;i++) {
		*(mat + i) = (T*)malloc(d * sizeof(T));
	}
	this->mr = mat;
	return;
}
template<class T>
void Matriz<T>::encerarM1(T d) {
	for (int i = 0;i < d;i++) {
		for (int j = 0;j < d;j++) {
			*(*(this->m1 + i) + j) = 0;
		}
	}
	return;
}
template<class T>
void Matriz<T>::encerarMr(T d) {
	for (int i = 0;i < d;i++) {
		for (int j = 0;j < d;j++) {
			*(*(this->mr + i) + j) = 0;
		}
	}
	return;
}
template<class T>
void Matriz<T>::ingresar(T d) {
	for (int i = 0;i < d;i++) {
		for (int j = 0;j < d;j++) {
			printf("Ingrese elemento [%d][%d]: ", i + 1, j + 1);
			scanf("%i", &(*(*(this->m1 + i) + j)));
		}
	}
}
template<class T>
void Matriz<T>::imprimirM1(T d) {
	for (int i = 0;i < d;i++) {
		for (int j = 0;j < d;j++) {
			printf("%d", *(*(this->m1 + i) + j));
			printf("%*s", j + 5, "");
		}
		printf("\n");
	}
}
template<class T>
void Matriz<T>::imprimirMr(T d) {
	for (int i = 0;i < d;i++) {
		for (int j = 0;j < d;j++) {
			printf("%d", *(*(this->mr + i) + j));
			printf("%*s", j + 5, "");
		}
		printf("\n");
	}
}
template<class T>
void Matriz<T>::procesar(T d, T potencia) {
	for (int i = 0;i < d;i++) {
		for (int j = 0;j < d;j++) {
			for (int h = 0;h < d;h++) {
				for (int k = 1; k < potencia; k++)
				{
					*(*(this->mr + i) + j) = *(*(this->mr + i) + j) + (*(*(this->m1 + i) + h)) * (*(*(this->m1 + h) + j));
				}
			}
		}
	}
}
template class Matriz<int>;
template class Matriz<float>;
template class Matriz<double>;

