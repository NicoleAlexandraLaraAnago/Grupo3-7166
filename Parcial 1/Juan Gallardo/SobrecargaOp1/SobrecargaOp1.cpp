#include <iostream>

using namespace std;

class Vehiculos{

	int num;
public:
	Vehiculos(int n):num(n){};
	friend Vehiculos operator+(Vehiculos, Vehiculos);
	friend ostream& operator<<(ostream& os, Vehiculos ms){
		os <<ms.num << "Vehiculos" << endl;
		return os;
	}
	
};
typedef Vehiculos A;
A operator+(A a, A b){
	A res(a.num+b.num);
	return res;
}
int main() {
	Vehiculos vhcl_fabrica1(3);
	Vehiculos vhcl_fabrica2(2);
	Vehiculos Total = vhcl_fabrica1 + vhcl_fabrica2;
	cout << Total;
	return 0;
}
