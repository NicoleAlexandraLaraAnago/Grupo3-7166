/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordova
Camila Naspud
Juan Gallardo
Nicole Lara
Adrian Paez
Fecha de creación: Viernes 17 de Diciembre del 2021
Fecha de modificación: Martes 21 de Diciembre del 2021
Materia: Estructura de datos
NRC: 7166*/


#include <iostream>
#include <vector>
#include <sstream>
#include "QuickSort.h"


using namespace std;


int main()
{
    QuickSort<int> qs;
    int cant;
    int num;
    vector<int> numeros;
    string n;
    stringstream ss;
    cout << "Ingrese cantidad de elementos a ingresar: ";
    cin >> n;
    while (!isdigit(n[0]) || n.find(',') < n.length() || n.find('.') < n.length() || n.find_first_not_of("0123456789") != string::npos) {
        cout << "Ingrese solo valores enteros, intente de nuevo: ";
        cin >> n;
    }
    ss.clear();
    ss << n;
    ss >> cant;
    n = "";
    for (int i = 0; i < cant; i++)
    {
        // se ingresan elementos al vector
        cout << "Ingrese elemento " << i + 1 << " : " ;
        cin >> n;
        while (!isdigit(n[0]) || n.find(',') < n.length() || n.find('.') < n.length() || n.find_first_not_of("0123456789") != string::npos) {
            cout << "Ingrese solo numeros enteros, intente de nuevo: ";
            cin >> n;
        }
        ss.clear();
        ss << n;
        ss >> num;
        n = "";
        numeros.push_back(num);
    }

    cout << endl;
    //for each para imprimir arreglo
    cout << "Arreglo ingresado: \n";
    for (auto i : numeros)
        cout << i << " ";
    cout << endl;

    // se ordena el vector
    qs.quickSort(numeros, 0, numeros.size()-1);

    //for each para imprimir arreglo
    cout << "Arreglo ordenado por QuickSort: \n";
    for (auto i : numeros)
        cout << i << " ";
    cout << endl;

    cout << endl;

    system("pause");
}

