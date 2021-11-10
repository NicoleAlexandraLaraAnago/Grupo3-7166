/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordova
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creacion: Domingo 09 de Noviembre del 2021
Fecha de modificacion: Domingo 09 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/
#include <iostream>
#include <fstream>

#include"Caja.h"
#include"Caja.cpp"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Creacion de arreglo estatico
	const int tam = 5;
	Caja<float> cajas[tam];
	
	//Lectura de fichero txt
	string filename("Medidas.txt");
	ifstream input_file(filename);
	if (!input_file.is_open()) {
		cerr << "Could not open the file - '"
			<< filename << "'" << endl;
		return EXIT_FAILURE;
	}

	//Almacenamiento de medidas recuperadas del fichero en arreglo
	float medidas[25];
	int i = 0;
	while (input_file >> medidas[i]) {
		i++;
	}
	input_file.close();

	//Declaracion e impresion de objetos tipo Caja<int>
	int contAlto = 1;
	int contAncho = 2;
	int contProf = 3;
	for (int i = 0; i < tam; i++)
	{
		Caja<float> caja(medidas[contAlto-1], medidas[contAncho-1], medidas[contProf-1]);
		cajas[i] = caja;
		contAlto += 3;
		contAncho += 3;
		contProf += 3;
	}
	int j = 1;
	for (auto Caja:cajas)
	{
		cout << "Caja " << j << " del arreglo estatico: " << endl;
		j++;
		Caja.mostrarMedidas();
	}
	
	
	return 0;
}
