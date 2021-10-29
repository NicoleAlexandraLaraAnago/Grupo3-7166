/***********************************************************************
 * Module:  Proceso.h
 * Author:  Camile EC
 * Modified: jueves, 28 de octubre de 2021 20:14:47
 * Purpose: Declaration of the class Proceso
 ***********************************************************************/
  /*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:  
Xavier Cordoba
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creación: Miercoles 27 de Octubre del 2021
Fecha de modificación: Jueves 28 de Octubre del 2021
Materia: Estructura de datos
NRC: 7166*/

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
   void Imprimir(Proceso objeto);

protected:
private:
   float numerador1;
   float denominador1;
   float numerador2;
   float denominador2;


};

#endif
