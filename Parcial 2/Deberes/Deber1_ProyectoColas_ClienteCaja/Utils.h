#pragma once
#include <string>
#include <conio.h>
#include <iostream>

using namespace std;

class Utils {

public:
	int validarDigitos(int);

};

int Utils::validarDigitos(int dato)
{

	string cadena;
	int i = 0;
	char c = 0;

	while (i != dato)
	{
		c = _getch();
		if (c >= '0' && c <= '9')
		{
			cout << c;
			cadena += c;
			i++;
		}
	}
	int valor = stoi(cadena);
	return valor;

}