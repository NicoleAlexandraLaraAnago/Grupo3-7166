#include <iostream>
#include "Intercambio.h"
#include "Intercambio.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

    int numeros[100],n;
    cout<<"Digite el numero de elementos que va a tener el arreglo: ";cin>>n;
    
    for (int i=0;i<n;i++){
        cout<<"Digite un numero: ";
        cin>>numeros[i];
    }

    //for each para imprimir arreglo
    cout << "Arreglo ingresado: \n";
    for (int mostrar : numeros){
        cout << mostrar << " ";
        //n = sizeof(numeros) / sizeof(numeros[0]);
    cout << endl;
    }
    // se ordena el arreglo
    quickSort(numeros, 0, n - 1);

    //for each para imprimir arreglo
    cout << "Arreglo ordenado por QuickSort: \n";
    for (int i : numeros)
        cout << i << " ";
    cout << endl;
	return 0;
}
