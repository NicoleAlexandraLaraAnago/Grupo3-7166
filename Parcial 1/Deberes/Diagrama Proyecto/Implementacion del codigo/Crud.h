/***********************************************************************
 * Module:  Crud.h
 * Author:  PC
 * Modified: martes, 23 de noviembre de 2021 22:04:02
 * Purpose: Declaration of the class Crud
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Crud_h)
#define __Class_Diagram_1_Crud_h

class Crud
{
public:
   virtual T insertar(void)=0;
   virtual void mostrar(void)=0;
   virtual T eliminar(void)=0;
   virtual T buscar(void)=0;

protected:
private:

};

#endif