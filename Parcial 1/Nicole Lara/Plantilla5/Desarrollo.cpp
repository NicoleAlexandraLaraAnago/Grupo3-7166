#include <iostream>
#include "Factorial.h"
using namespace std;

template <typename S>
S Factorial<S>::operacion() {
int factorial = 1;
	for(int i=1;i<=numero1;i++ ){
		factorial = factorial * i;
	}
	return factorial;
}
