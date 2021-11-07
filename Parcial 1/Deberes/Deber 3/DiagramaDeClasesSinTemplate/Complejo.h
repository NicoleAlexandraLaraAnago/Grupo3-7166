/***********************************************************************
 * Module:  Complejo.h
 * Author:  PC
 * Modified: viernes, 5 de noviembre de 2021 8:16:23
 * Purpose: Declaration of the class Complejo
 ***********************************************************************/

#if !defined(__Class_Diagram_Solis_Complejo_h)
#define __Class_Diagram_Solis_Complejo_h

class Complejo
{
public:
   Complejo getImaginario(void);
   void setImaginario(Complejo newImaginario);
   Complejo(float real, float imag);
   ~Complejo();

protected:
private:
   float real;
   Complejo imaginario;


};

#endif