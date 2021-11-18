#pragma once
#include <iostream>
#include "Contador.h"

using namespace std;

template <class T1, class T2>
void Hanoi<T1, T2>::contar() {
	this->count = this->count + 1;
}
