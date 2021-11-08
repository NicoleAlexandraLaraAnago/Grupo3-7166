/*Universidad de las fuerzas armadas ESPE
Templates example 6
Autor: Xavier Cordova
Fecha de creación: Miercoles 03 de Noviembre del 2021
Fecha de modificación: Miercoles 03 de Noviembre del 2021
Version: 1.0
Materia: Estructura de datos
NRC: 7166*/


#include <iostream>

using namespace std;


template <typename T>
class MatrizPorEscalar {
public:
	void setNums1(T* n1);
	T* getNums1();
	void setEscalar(T n);
	T getEscalar();
	MatrizPorEscalar(T* n1, T n);
	~MatrizPorEscalar();
	void operacion();
private:
	T nums1[5];
	T escalar;
};

template <typename T>
void MatrizPorEscalar<T>::setNums1(T* n1) {
	for (int i = 0; i < 5; i++)
	{
		this->nums1[i] = n1[i];
	};
}

template <typename T>
T* MatrizPorEscalar<T>::getNums1() {
	return this->nums1;
}

template <typename T>
void MatrizPorEscalar<T>::setEscalar(T n) {
	this->escalar = n;
}

template <typename T>
T MatrizPorEscalar<T>::getEscalar() {
	return this->escalar;
}

template <typename T>
MatrizPorEscalar<T>::MatrizPorEscalar(T* n1, T n) {
	for (int i = 0; i < 5; i++)
	{
		this->nums1[i] = n1[i];
	};
	this->escalar = n;
}

template <typename T>
MatrizPorEscalar<T>::~MatrizPorEscalar() {

}

template <typename T>
void MatrizPorEscalar<T>::operacion() {
	int resultado[5] = { 0,0,0,0,0 };
	for (int i = 0;i < 5; i++) {
		resultado[i] = this->nums1[i] * this->escalar;
	}
	cout << "La multiplicacion de la matriz por el escalar es: \n" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "[" << resultado[i] << "]\n" << endl;
	}
}


int main()
{
	int matriz1[5];
	int escalar;

	cout << "================ PRODUCTO PUNTO ENTRE MATRICES ====================" << "\n";
	cout << "Introduzca los elementos de la matriz 1:" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "Introduzca elemento [" << i + 1 << "]: " << endl;
			cin >> matriz1[i];
		}
	cout << "Introduzca escalar al que se va a multiplicar la matriz :" << endl;
	cin >> escalar;
	cout << "===================================================================" << "\n";

	MatrizPorEscalar<int> enteros(matriz1, escalar);

	enteros.operacion();



}

