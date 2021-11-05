/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordoba
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creación: Miercoles 03 de Noviembre del 2021
Fecha de modificación: Jueves 04 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/

/***********************************************************************
 * Module:  Proceso.h
 * Author:  PC
 * Modified: jueves, 4 de noviembre de 2021 18:14:14
 * Purpose: Declaration of the class Proceso
 ***********************************************************************/
#include "Resultado.h"
#if !defined(__Operaciones2_Proceso_h)
#define __Operaciones2_Proceso_h
template <typename T>
class Proceso : Resultado <T>
{
public:
	T getNumerador1(void);
	void setNumerador1(T newNumerador1);
	T getDenominador1(void);
	void setDenominador1(T newDenominador1);
	T getNumerador2(void);
	void setNumerador2(T newNumerador2);
	T getDenominador2(void);
	void setDenominador2(T newDenominador2);
	Proceso(T num1, T den1, T num2, T den2);
	~Proceso();
	T resultado(void);
	void imprimir(void);

protected:
private:
	T numerador1;
	T denominador1;
	T numerador2;
	T denominador2;
	T result;


};
////////////////////////////////////////////////////////////////////////
// Name:       Proceso::getNumerador1()
// Purpose:    Implementation of Proceso::getNumerador1()
// Return:     float
////////////////////////////////////////////////////////////////////////
template <typename T>
T Proceso<T>::getNumerador1()
{
	return this->numerador1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::setNumerador1(float newNumerador1)
// Purpose:    Implementation of Proceso::setNumerador1()
// Parameters:
// - newNumerador1
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T>
void Proceso<T>::setNumerador1(T newNumerador1)
{
	this->numerador1 = newNumerador1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::getDenominador1()
// Purpose:    Implementation of Proceso::getDenominador1()
// Return:     float
////////////////////////////////////////////////////////////////////////
template <typename T>
T Proceso<T>::getDenominador1()
{
	return this->denominador1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::setDenominador1(float newDenominador1)
// Purpose:    Implementation of Proceso::setDenominador1()
// Parameters:
// - newDenominador1
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T>
void Proceso<T>::setDenominador1(T newDenominador1)
{
	this->denominador1 = newDenominador1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::getNumerador2()
// Purpose:    Implementation of Proceso::getNumerador2()
// Return:     float
////////////////////////////////////////////////////////////////////////
template <typename T>
T Proceso<T>::getNumerador2()
{
	return this->numerador2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::setNumerador2(float newNumerador2)
// Purpose:    Implementation of Proceso::setNumerador2()
// Parameters:
// - newNumerador2
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T>
void Proceso<T>::setNumerador2(T newNumerador2)
{
	this->numerador2 = newNumerador2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::getDenominador2()
// Purpose:    Implementation of Proceso::getDenominador2()
// Return:     float
////////////////////////////////////////////////////////////////////////
template <typename T>
T Proceso<T>::getDenominador2()
{
	return this->denominador2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::setDenominador2(float newDenominador2)
// Purpose:    Implementation of Proceso::setDenominador2()
// Parameters:
// - newDenominador2
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T>
void Proceso<T>::setDenominador2(T newDenominador2)
{
	this->denominador2 = newDenominador2;
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
template <typename T>
Proceso<T>::Proceso(T num1, T den1, T num2, T den2)
{
	this->numerador1 = num1;
	this->numerador2 = num2;
	this->denominador1 = den1;
	this->denominador2 = den2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::~Proceso()
// Purpose:    Implementation of Proceso::~Proceso()
// Return:     
////////////////////////////////////////////////////////////////////////
template <typename T>
Proceso<T>::~Proceso()
{
	// TODO : implement
}
#endif