
#include<iostream>
#include"Proceso.h"

using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Proceso::Imprimir(Proceso objeto)
// Purpose:    Implementation of Proceso::Imprimir()
// Parameters:
// - objeto
// Return:     void
////////////////////////////////////////////////////////////////////////
using namespace std;
void Proceso::Imprimir()
{
   cout<<"El resultado de la Operacion es : "<<(((this->numerador1 * this->denominador2) + (this->numerador2* this->denominador1))/(this->denominador1+this->denominador2))<<endl;
   
}

