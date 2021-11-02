/*Universidad de las fuerzas armadas ESPE
Templates example 5
Autor: Xavier Cordova
Fecha de creación: Martes 02 de Noviembre del 2021
Fecha de modificación: Martes 02 de Noviembre del 2021
Version: 1.0
Materia: Estructura de datos
NRC: 7166*/

#include <iostream>

using namespace std;

template <typename T>
class ProductoPuntoMatrices {
public:
	void setNums1(T* n1);
	T* getNums1();
	void setNums2(T* n2);
	T* getNums2();
	ProductoPuntoMatrices(T n1[2][2], T n2[2][2]);
	~ProductoPuntoMatrices();
	T operacion();
private:
	T nums1[2][2];
	T nums2[2][2];
};

template <typename T>
void ProductoPuntoMatrices<T>::setNums1(T* n1) {
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			this->nums1[i][j] = n1[i][j];
		}
	};
}

template <typename T>
T* ProductoPuntoMatrices<T>::getNums1() {
	return this->nums1;
}

template <typename T>
void ProductoPuntoMatrices<T>::setNums2(T* n2) {
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			this->nums2[i][j] = n2[i][j];
		}
	};
}

template <typename T>
T* ProductoPuntoMatrices<T>::getNums2() {
	return this->nums2;
}

template <typename T>
ProductoPuntoMatrices<T>::ProductoPuntoMatrices(T n1[2][2], T n2[2][2]) {
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			this->nums1[i][j] = n1[i][j];
			this->nums2[i][j] = n2[i][j];
		}
	};
}

template <typename T>
ProductoPuntoMatrices<T>::~ProductoPuntoMatrices() {

}

template <typename T>
T ProductoPuntoMatrices<T>::operacion() {
	T temporal = 0;

	for (int i = 0;i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			temporal = temporal + (this->nums1[i][j] * this->nums2[i][j]);
		}
	}

	return temporal;
}


int main()
{
	int matriz1[2][2];
	int matriz2[2][2];
	int productoPunto;

	cout << "================ PRODUCTO PUNTO ENTRE MATRICES ====================" << "\n";
	cout << "Introduzca los elementos de la matriz 1:" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
		{
			cout << "Introduzca elemento [" << i + 1 << "][" << j + 1 << "] : " << endl;
			cin >> matriz1[i][j];
		}
	}
	cout << "Introduzca los elementos de la matriz 2:" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
		{
			cout << "Introduzca elemento [" << i + 1 << "][" << j + 1 << "] : " << endl;
			cin >> matriz2[i][j];
		}
	}
	cout << "===================================================================" << "\n";

	ProductoPuntoMatrices<int> enteros(matriz1, matriz2);

	productoPunto = enteros.operacion();

	cout << "El producto punto entre las matricez 1 y 2 es : "<< productoPunto << endl;
}
