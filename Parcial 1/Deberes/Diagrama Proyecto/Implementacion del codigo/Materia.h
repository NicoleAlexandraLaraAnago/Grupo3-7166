/***********************************************************************
 * Module:  Materia.h
 * Author:  PC
 * Modified: martes, 23 de noviembre de 2021 21:56:20
 * Purpose: Declaration of the class Materia
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Materia_h)
#define __Class_Diagram_1_Materia_h

class Materia
{
public:
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   T getNota1(void);
   void setNota1(T newNota1);
   T getNota2(void);
   void setNota2(T newNota2);
   T getNota3(void);
   void setNota3(T newNota3);
   T getNotaFinal(void);
   void setNotaFinal(T newNotaFinal);
   bool getEstado(void);
   void setEstado(bool newEstado);
   Materia();
   ~Materia();
   void agregarNota(void);
   void modificarNota(void);
   void calcularNotaFinal(void);
   void verificarEstadoEstudiantel(void);
   T getNrc(void);
   void setNrc(T newNrc);

protected:
private:
   std::string nombre;
   T nota1;
   T nota2;
   T nota3;
   T notaFinal;
   bool estado;
   T nrc;


};

#endif