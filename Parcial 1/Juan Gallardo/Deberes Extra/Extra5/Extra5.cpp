/*Universidad de las fuerzas armadas ESPE
Deber Extra sobre templates
Autores:  Juan Gallardo
Fecha de creación: Martes 02 de Noviembre del 2021
Fecha de modificación: Martes 02 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/
#include <iostream>
#include <string>

template <typename T>
void Print(T value)
{
	std::cout <<value << std::endl;
}

int main() {
	Print(5);
	Print("Hola");
	Print(5.5f);
	
	std::cin.get();
}
