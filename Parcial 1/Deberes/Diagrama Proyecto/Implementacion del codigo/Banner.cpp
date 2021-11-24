/***********************************************************************
 * Module:  Banner.cpp
 * Author:  PC
 * Modified: martes, 23 de noviembre de 2021 21:56:20
 * Purpose: Implementation of the class Banner
 ***********************************************************************/

#include "Docente::Persona.h"
#include "Alumno::Persona.h"
#include "Materia.h"
#include "main.h"
#include "Banner.h"

////////////////////////////////////////////////////////////////////////
// Name:       Banner::getAlumnos()
// Purpose:    Implementation of Banner::getAlumnos()
// Return:     Lista
////////////////////////////////////////////////////////////////////////

Lista* Banner::getAlumnos(void)
{
   return Alumnos;
}

////////////////////////////////////////////////////////////////////////
// Name:       Banner::setAlumnos(Lista* newAlumnos)
// Purpose:    Implementation of Banner::setAlumnos()
// Parameters:
// - newAlumnos
// Return:     void
////////////////////////////////////////////////////////////////////////

void Banner::setAlumnos(Lista* newAlumnos)
{
   Alumnos = newAlumnos;
}

////////////////////////////////////////////////////////////////////////
// Name:       Banner::getDocentes()
// Purpose:    Implementation of Banner::getDocentes()
// Return:     Lista
////////////////////////////////////////////////////////////////////////

Lista* Banner::getDocentes(void)
{
   return Docentes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Banner::setDocentes(Lista* newDocentes)
// Purpose:    Implementation of Banner::setDocentes()
// Parameters:
// - newDocentes
// Return:     void
////////////////////////////////////////////////////////////////////////

void Banner::setDocentes(Lista* newDocentes)
{
   Docentes = newDocentes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Banner::getMaterias()
// Purpose:    Implementation of Banner::getMaterias()
// Return:     Lista
////////////////////////////////////////////////////////////////////////

Lista* Banner::getMaterias(void)
{
   return Materias;
}

////////////////////////////////////////////////////////////////////////
// Name:       Banner::setMaterias(Lista* newMaterias)
// Purpose:    Implementation of Banner::setMaterias()
// Parameters:
// - newMaterias
// Return:     void
////////////////////////////////////////////////////////////////////////

void Banner::setMaterias(Lista* newMaterias)
{
   Materias = newMaterias;
}

////////////////////////////////////////////////////////////////////////
// Name:       Banner::imprimirRegistro()
// Purpose:    Implementation of Banner::imprimirRegistro()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Banner::imprimirRegistro(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Banner::Banner()
// Purpose:    Implementation of Banner::Banner()
// Return:     
////////////////////////////////////////////////////////////////////////

Banner::Banner()
{
   docente::Persona = NULL;
   alumno::Persona = NULL;
   materia = NULL;
   main = NULL;
}

////////////////////////////////////////////////////////////////////////
// Name:       Banner::~Banner()
// Purpose:    Implementation of Banner::~Banner()
// Return:     
////////////////////////////////////////////////////////////////////////

Banner::~Banner()
{
   // TODO : implement
}