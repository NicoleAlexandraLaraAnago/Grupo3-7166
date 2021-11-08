/*Universidad de las fuerzas armadas ESPE
Sobrecarga de Operadores (operador =)
Autores:  Juan Gallardo
Fecha de creación: domingo 07 de noviembre del 2021
Fecha de modificación: domingo 07 de noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/
#include <iostream>
using namespace std;
class Cuadernos{

	int num;
public:
	Cuadernos(int n = 0):num(n){};
	
	friend ostream& operator<<(ostream& os, Cuadernos ms){
		os << ms.num << "Cuadernos" << endl;
		return os;
	}
	
	friend Cuadernos operator+(Cuadernos a, Cuadernos b){
		return Cuadernos(a.num+b.num);	
	}
	
	Cuadernos& operator=(Cuadernos a){
		num = a.num;
		return *this;
	}
};
int main() {
	Cuadernos a(3), b(4), c(5),d,e;
	e = d = a + b + c;
	e = d + a + b;
	cout << d << endl;
	cout << e << endl;
	return 0;
}
