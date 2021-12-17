#include <iostream>
#include "FuncionesLambda.h"

using namespace std;

int main()
{
	FuncionesLambda lambda;

	int a = 6;
	int b = 24;
	int c = 80;
	int d = 4;
	int e = 8;
	int f = 32;


	cout << "El MCD es: " << lambda.MCD(a, b, c, d, e, f, 216) << endl;
	cout << "El MCM es: " << lambda.MCM(a, b, c, d, e, f, 216) << endl;

}