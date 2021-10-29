/***********************************************************************
 * Module:  Proceso.cpp
 * Author:  Camile EC
 * Modified: jueves, 28 de octubre de 2021 20:14:47
 * Purpose: Implementation of the class Proceso
 ***********************************************************************/
 /*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:  
Xavier Cordoba
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creación: Miercoles 27 de Octubre del 2021
Fecha de modificación: Jueves 28 de Octubre del 2021
Materia: Estructura de datos
NRC: 7166*/


#include "Proceso.h"
#include <stdio.h>

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::getNumerador1()
// Purpose:    Implementation of Proceso::getNumerador1()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Proceso::getNumerador1(void)
{
   return numerador1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::setNumerador1(float newNumerador1)
// Purpose:    Implementation of Proceso::setNumerador1()
// Parameters:
// - newNumerador1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Proceso::setNumerador1(float newNumerador1)
{
   numerador1 = newNumerador1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::getDenominador1()
// Purpose:    Implementation of Proceso::getDenominador1()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Proceso::getDenominador1(void)
{
   return denominador1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::setDenominador1(float newDenominador1)
// Purpose:    Implementation of Proceso::setDenominador1()
// Parameters:
// - newDenominador1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Proceso::setDenominador1(float newDenominador1)
{
   denominador1 = newDenominador1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::getNumerador2()
// Purpose:    Implementation of Proceso::getNumerador2()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Proceso::getNumerador2(void)
{
   return numerador2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::setNumerador2(float newNumerador2)
// Purpose:    Implementation of Proceso::setNumerador2()
// Parameters:
// - newNumerador2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Proceso::setNumerador2(float newNumerador2)
{
   numerador2 = newNumerador2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::getDenominador2()
// Purpose:    Implementation of Proceso::getDenominador2()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Proceso::getDenominador2(void)
{
   return denominador2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::setDenominador2(float newDenominador2)
// Purpose:    Implementation of Proceso::setDenominador2()
// Parameters:
// - newDenominador2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Proceso::setDenominador2(float newDenominador2)
{
   denominador2 = newDenominador2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::Proceso(float num1, float den1, float num2, float den2)
// Purpose:    Implementation of Proceso::Proceso()
// Parameters:
// - num1
// - den1
// - num2
// - den2
// Return:     
////////////////////////////////////////////////////////////////////////

Proceso::Proceso(float num1, float den1, float num2, float den2)
{
   // TODO : implement
   this->numerador1=num1;
   this->denominador1=den1;
   this->numerador2=num2;
   this->denominador2=den2;
   
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::~Proceso()
// Purpose:    Implementation of Proceso::~Proceso()
// Return:     
////////////////////////////////////////////////////////////////////////

Proceso::~Proceso()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::Imprimir(Proceso objeto)
// Purpose:    Implementation of Proceso::Imprimir()
// Parameters:
// - objeto
// Return:     void
////////////////////////////////////////////////////////////////////////

void Proceso::Imprimir(Proceso objeto)
{
   // TODO : implement
   printf("%f",(objeto.numerador1 * objeto.denominador2) + (objeto.numerador2*objeto.denominador1)/(objeto.denominador1+objeto.denominador2));
   
}

