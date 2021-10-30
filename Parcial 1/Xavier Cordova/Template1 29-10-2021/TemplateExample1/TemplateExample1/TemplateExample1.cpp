/*Universidad de las fuerzas armadas ESPE
Templates example 1
Autor: Xavier Cordoba
Fecha de creación: Viernes 29 de Octubre del 2021
Fecha de modificación: Viernes 29 de Octubre del 2021
Version: 1.0
Materia: Estructura de datos
NRC: 7166*/


#include <iostream>

using namespace std;

template <typename T>
class Suma {
public:
	void setNum1(T n1);
	T getNum1();
	void setNum2(T n2);
	T getNum2();
	Suma(T n1, T n2);
	~Suma();
	T operacion();
private:
	T num1;
	T num2;
};

template <typename T>
void Suma<T>::setNum1(T n1) {
	this->num1 = n1;
}

template <typename T>
void Suma<T>::setNum2(T n2) {
	this->num2 = n2;
}

template <typename T>
T Suma<T>::getNum1() {
	return this->num1;
}

template <typename T>
T Suma<T>::getNum2() {
	return this->num2;
}

template <typename T>
Suma<T>::Suma(T n1, T n2) {
	this->num1 = n1;
	this->num2 = n2;
}

template <typename T>
Suma<T>::~Suma() {

}

template <typename T>
T Suma<T>::operacion() {
	return this->num1 + this->num2;
}

int main()
{
	int num1, num2;

	cout << "================ SUMAR DOS NUMEROS ====================" << "\n";
	cout << "Ingrese numero 1 : " << "\n";
	cin >> num1;
	cout << "Ingrese numero 2 : " << "\n";
	cin >> num2;
	cout << "=======================================================" << "\n";

	Suma<int> enteros(num1, num2);

	cout << "\n La suma de los numeros " << num1 << " y " << num2 << " es = " << enteros.operacion() << endl;

}


