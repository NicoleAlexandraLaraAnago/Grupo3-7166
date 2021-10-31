/*Universidad de las fuerzas armadas ESPE
Templates example 3
Autor: Xavier Cordoba
Fecha de creación: Domingo 31 de Octubre del 2021
Fecha de modificación: Domingo 31 de Octubre del 2021
Version: 1.0
Materia: Estructura de datos
NRC: 7166*/


#include <iostream>


using namespace std;


template <typename T>
class OrdenArreglo {
public:
	void setNums(T *n1);
	T* getNums();
	OrdenArreglo(T *n1);
	~OrdenArreglo();
	T* operacion();
private:
	T nums[5];

};

template <typename T>
void OrdenArreglo<T>::setNums(T *n1) {
	for (int i = 0; i < sizeof(n1); i++)
	{
		this->nums[i] = n1[i];
	};
}

template <typename T>
T *OrdenArreglo<T>::getNums() {
	return this->nums;
}

template <typename T>
OrdenArreglo<T>::OrdenArreglo(T *n1) {
	for (int i = 0; i < 5; i++)
	{
		this->nums[i] = n1[i];
	};
}

template <typename T>
OrdenArreglo<T>::~OrdenArreglo() {

}

template <typename T>
T *OrdenArreglo<T>::operacion() {
	T temporal;

	for (int i = 0;i < 5; i++) {
		for (int j = 0; j < 5 - 1; j++) {
			if (this->nums[j] > this->nums[j + 1]) {
				temporal = this->nums[j];
				this->nums[j] = this->nums[j + 1];
				this->nums[j + 1] = temporal;
			}
		}
	}

	return this->nums;
}

int main()
{
	int arreglo[5];
	int *arregloOrdenado;

	cout << "================ ORDENAR ARREGLO ====================" << "\n";
	cout << "Introduzca los 5 elementos del arreglo" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Introduzca elemento " << i+1 << " : " << endl;
		cin >> arreglo[i];
	}
	cout << "=======================================================" << "\n";

	OrdenArreglo<int> enteros(arreglo);

	arregloOrdenado = enteros.operacion();

	cout << "El arreglo ordenado de menor a mayor es : \n" << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout << arregloOrdenado[i] << endl;
	}
	
}

