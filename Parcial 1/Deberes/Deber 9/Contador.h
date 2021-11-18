#pragma once
#include <iostream>
#include "Hanoi.h"

using namespace std;

template <class T1, class T2>
T1 Hanoi<T1, T2>::getCount() {
	return this->count;
}

template <class T1, class T2>
void Hanoi<T1, T2>::setCount(T1 count) {
	this->count = count;
}

template class Hanoi <int, char>;
