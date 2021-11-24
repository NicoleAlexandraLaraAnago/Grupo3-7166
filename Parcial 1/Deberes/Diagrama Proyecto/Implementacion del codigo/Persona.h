/***********************************************************************
 * Module:  Persona.h
 * Author:  PC
 * Modified: martes, 23 de noviembre de 2021 18:51:48
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h

class Persona
{
public:
   T verificarCedula(void);
   std::string getNombres(void);
   void setNombres(std::string newNombres);
   std::string getApellidos(void);
   void setApellidos(std::string newApellidos);
   std::string getCorreo(void);
   void setCorreo(std::string newCorreo);
   T getID(void);
   void setID(T newID);
   T getCedula(void);
   void setCedula(T newCedula);
   T generarCorreo(void);
   Persona();
   ~Persona();

protected:
private:
   std::string nombres;
   std::string apellidos;
   std::string correo;
   T ID;
   T cedula;


};

#endif