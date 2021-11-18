#include <iostream>
#include "Hanoi.h"
#include "OperacionHanoi.cpp"
#include "Contador.h"
#include "Contador.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Hanoi<int, char> h(0);
	int num;
	cout << "\nDiscos A, B, C" << endl;
	cout << "Ingrese el numero de discos: ";
	cin >> num;
	cout << endl;
	h.operacionHanoi(num, 'A', 'B', 'C');
	cout << endl;
	cout << "El numero de vueltas en total = " << h.getCount() << endl;
	
	return 0;
}
