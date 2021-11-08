/*Universidad de las fuerzas armadas ESPE
Templates example 4
Autor: Xavier Cordova
Fecha de creación: Lunes 01 de Noviembre del 2021
Fecha de modificación: Lunes 01 de Noviembre del 2021
Version: 1.0
Materia: Estructura de datos
NRC: 7166*/


#include <iostream>

using namespace std;

template <typename T>
class DivisionFracciones {
public:
	void setNum1(T n1);
	T getNum1();
	void setNum2(T n2);
	T getNum2();
	void setDen1(T d1);
	T getDen1();
	void setDen2(T d2);
	T getDen2();
	DivisionFracciones(T n1, T n2, T den1, T den2);
	~DivisionFracciones();
	T operacion();
private:
	T num1;
	T num2;
	T den1;
	T den2;
};

template <typename T>
void DivisionFracciones<T>::setNum1(T n1) {
	this->num1 = n1;
}

template <typename T>
void DivisionFracciones<T>::setNum2(T n2) {
	this->num2 = n2;
}

template <typename T>
T DivisionFracciones<T>::getNum1() {
	return this->num1;
}

template <typename T>
T DivisionFracciones<T>::getNum2() {
	return this->num2;
}

template <typename T>
DivisionFracciones<T>::DivisionFracciones(T n1, T n2, T d1, T d2) {
	this->num1 = n1;
	this->num2 = n2;
	this->den1 = d1;
	this->den2 = d2;
}

template <typename T>
DivisionFracciones<T>::~DivisionFracciones() {

}

template <typename T>
T DivisionFracciones<T>::operacion() {
	return ((this->num1 * this->den2)/(this->den2 * this->num2));
}

int main()
{
	double num1, num2, den1, den2;

	cout << "================ SUMAR DOS NUMEROS ====================" << "\n";
	cout << "Ingrese numerador 1 : " << "\n";
	cin >> num1;
	cout << "Ingrese denominador 1 : " << "\n";
	cin >> den1;
	cout << "Ingrese numerador 2 : " << "\n";
	cin >> num2;
	cout << "Ingrese denominador 2 : " << "\n";
	cin >> den2;
	cout << "=======================================================" << "\n";

	DivisionFracciones<double> enteros(num1, num2, den1, den2);

	cout << "\n La division de las fracciones " << num1 << "/" << den1 << " y " << num2 << "/" << den2 << " es = " << enteros.operacion() << endl;
}

