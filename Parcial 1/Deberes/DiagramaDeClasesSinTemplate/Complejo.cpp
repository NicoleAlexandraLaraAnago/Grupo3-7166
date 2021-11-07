/***********************************************************************
 * Module:  Complejo.cpp
 * Author:  PC
 * Modified: viernes, 5 de noviembre de 2021 8:16:23
 * Purpose: Implementation of the class Complejo
 ***********************************************************************/

#include "Complejo.h"

////////////////////////////////////////////////////////////////////////
// Name:       Complejo::getImaginario()
// Purpose:    Implementation of Complejo::getImaginario()
// Return:     Complejo
////////////////////////////////////////////////////////////////////////

Complejo Complejo::getImaginario(void)
{
   return imaginario;
}

////////////////////////////////////////////////////////////////////////
// Name:       Complejo::setImaginario(Complejo newImaginario)
// Purpose:    Implementation of Complejo::setImaginario()
// Parameters:
// - newImaginario
// Return:     void
////////////////////////////////////////////////////////////////////////

void Complejo::setImaginario(Complejo newImaginario)
{
   imaginario = newImaginario;
}

////////////////////////////////////////////////////////////////////////
// Name:       Complejo::Complejo(float real, float imag)
// Purpose:    Implementation of Complejo::Complejo()
// Parameters:
// - real
// - imag
// Return:     
////////////////////////////////////////////////////////////////////////

Complejo::Complejo(float real, float imag)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Complejo::~Complejo()
// Purpose:    Implementation of Complejo::~Complejo()
// Return:     
////////////////////////////////////////////////////////////////////////

Complejo::~Complejo()
{
   // TODO : implement
}