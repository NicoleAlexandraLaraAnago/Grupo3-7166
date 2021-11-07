/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:  
Xavier Cordova
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creación: Miercoles 27 de Octubre del 2021
Fecha de modificación: Domingo 7 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/


#include <iostream>
#include "Proceso.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
	float numerador1;
   	float denominador1;
   	float numerador2;
   	float denominador2;
   
   	cout << "================ CALCULAR ====================" << "\n";
	cout << "Ingrese numerador 1 : ";
	cin >> numerador1;
	cout << "Ingrese denominador 1 : ";
	cin >> denominador1;
	while(denominador1 == 0){
		cout << "Denominador 1 no puede ser 0, ingrese otro numero: ";
		cin >> denominador1;
	}
	cout << "Ingrese numerador 2 : ";
	cin >> numerador2;
	cout << "Ingrese denominador 2 : ";
	cin >> denominador2;
	while(denominador2 == 0){
		cout << "Denominador 2 no puede ser 0, ingrese otro numero: ";
		cin >> denominador2;
	}
	
	Proceso objeto = Proceso(numerador1,denominador1,numerador2,denominador2);
	objeto.Imprimir();
	return 0;
}
