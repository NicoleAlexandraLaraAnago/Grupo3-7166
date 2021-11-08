#include <iostream>
#include "Suma.h"
using namespace std;

template <typename S>
S Suma<S>::operacion() {
	return ((this->sumando1 + this->sumando2));
}
