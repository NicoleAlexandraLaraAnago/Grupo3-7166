/***********************************************************************
 * Module:  Proceso.h
 * Author:  PC
 * Modified: jueves, 4 de noviembre de 2021 18:14:14
 * Purpose: Declaration of the class Proceso
 ***********************************************************************/

#if !defined(__Operaciones2_Proceso_h)
#define __Operaciones2_Proceso_h

class Proceso
{
public:
   float getNumerador1(void);
   void setNumerador1(float newNumerador1);
   float getDenominador1(void);
   void setDenominador1(float newDenominador1);
   float getNumerador2(void);
   void setNumerador2(float newNumerador2);
   float getDenominador2(void);
   void setDenominador2(float newDenominador2);
   Proceso(float num1, float den1, float num2, float den2);
   ~Proceso();
   float Operacion(void);
   void imprimir(void);

protected:
private:
   float numerador1;
   float denominador1;
   float numerador2;
   float denominador2;
   float resultado;


};

#endif