#include<iostream>
#include"Operaciones.h"
#include <cmath>

using namespace std;

template <class TipoDato>
TipoDato Operaciones<TipoDato>::SacarRaiz(){
	return sqrt(pow(num3,2)+pow(num4,2));
}

