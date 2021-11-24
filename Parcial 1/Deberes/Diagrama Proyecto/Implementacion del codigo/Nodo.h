/***********************************************************************
 * Module:  Nodo.h
 * Author:  PC
 * Modified: martes, 23 de noviembre de 2021 22:04:02
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Nodo_h)
#define __Class_Diagram_1_Nodo_h

class Nodo
{
public:
   Nodo(T val, Nodo* sig, Nodo* ant);
   ~Nodo();

protected:
private:
   T valor;
   Nodo * sig;
   Nodo * ant;


};

#endif