#include <iostream>
#include "Hanoi.h"
using namespace std;

template <class T1, class T2>
void Hanoi<T1, T2> ::operacionHanoi(T1 num, T2 a, T2 b, T2 c) {
	if (num == 1) {
		cout << "Mover el bloque " << num << " Desde " << a << " Hasta " << c << endl;
		this->contar();
	}
	else {
		operacionHanoi(num - 1, a, c, b);
		cout << "Mover el bloque " << num << " Desde " << a << " Hata " << c << endl;
		this->contar();
		operacionHanoi(num - 1, b, a, c);
	}
}
