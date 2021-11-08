
/*Universidad de las fuerzas armadas ESPE
Deber Extra sobre templates
Autores:  Juan Gallardo
Fecha de creación: sábado 30 de Octubre del 2021
Fecha de modificación: sábado 30 de Octubre del 2021
Materia: Estructura de datos
NRC: 7166*/
#include <iostream>
using namespace std;
template <class TEMPLATE>
void Sumar(TEMPLATE num,TEMPLATE num1);
main() {
	int x=3,y=10;
	double a=54321,b=76543;
	float n=23.5,m=11.5;
	
	Sumar(x,y);
	Sumar(a,b);
	Sumar(n,m);
	system("pause");
}
template <class TEMPLATE>
void Sumar(TEMPLATE num,TEMPLATE num1){
	TEMPLATE resultado;
	resultado = num+num1;
	
	cout<<"Resultado es: "<<resultado<<endl;
}
