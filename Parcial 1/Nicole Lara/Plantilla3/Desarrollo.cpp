#include <iostream>
#include "Numero.h"

template<class Simbolo>
Simbolo Numero<Simbolo>::Mayor(){
	return (n1>n2? n1:n2);
}
