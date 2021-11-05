/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordoba
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creación: Miercoles 03 de Noviembre del 2021
Fecha de modificación: Jueves 04 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/

#include <iostream>
#include<conio.h>
#include "Proceso.cpp"

using namespace std;

int main()
{
    float num1, num2, den1, den2;
    cout << "Ingrese numerador 1 : " << endl;
    cin >> num1;
    cout << "Ingrese denominador 1 : " << endl;
    cin >> den1;
    while (den1 == 0) {
        cout << "Denominador 1 no puede ser igual a 0, intente con otro numero : " << endl;
        cin >> den1;
    }
    cout << "Ingrese numerador 2 : " << endl;
    cin >> num2;
    cout << "Ingrese denominador 2 : " << endl;
    cin >> den2;
    while (den2 == 0) {
        cout << "Denominador 2 no puede ser igual a 0, intente con otro numero : " << endl;
        cin >> den2;
    }

    Proceso<float> operacion(num1, den1, num2, den2);
    operacion.imprimir();
}


