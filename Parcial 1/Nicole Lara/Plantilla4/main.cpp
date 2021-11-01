#include <iostream>
#include <stdlib.h>
#include "Factorial.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero1, factorial = 1;
	cout << "\t\t\tCALCULAR FACTORIAL" << "\n";
	cout << "Ingrese el numero factorial  : ";
	cin >> numero1;


	cout << "";

	Factorial<int> resuelve(numero1);

	cout << "\n RESULTADO: " << numero1 << "i" <<" = " << resuelve.operacion() << endl;
	return 0;
}
