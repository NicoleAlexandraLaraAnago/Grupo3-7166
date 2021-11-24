/***********************************************************************
 * Module:  Banner.h
 * Author:  PC
 * Modified: martes, 23 de noviembre de 2021 21:56:20
 * Purpose: Declaration of the class Banner
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Banner_h)
#define __Class_Diagram_1_Banner_h

class Docente::Persona;
class Alumno::Persona;
class Materia;
class main;

#include <Crud.h>

class Banner : public Crud
{
public:
   Lista* getAlumnos(void);
   void setAlumnos(Lista* newAlumnos);
   Lista* getDocentes(void);
   void setDocentes(Lista* newDocentes);
   Lista* getMaterias(void);
   void setMaterias(Lista* newMaterias);
   void imprimirRegistro(void);
   Banner();
   ~Banner();

   Docente::Persona* docente::Persona;
   Alumno::Persona* alumno::Persona;
   Materia** materia;
   main* main;

protected:
private:
   Lista Alumnos;
   Lista Docentes;
   Lista Materias;


};

#endif