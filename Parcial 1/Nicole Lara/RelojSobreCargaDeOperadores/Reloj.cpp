void Reloj::DefineHora(int h)
{   hora = h;
}

void Reloj::DefineMinuto(int m)
{   minuto = m;
}

void Reloj::DefineSegundo(int s)
{   segundo = s; 
}
#include <iostream>
#include"Reloj.h"
using namespace std;

int Reloj::Hora(void)
{   return hora; 
}

int Reloj::Minuto(void)
{   return minuto; 
}

int Reloj::Segundo(void)
{   return segundo; 
}

void Reloj::operator ++(void)
{   segundo++;
      if (segundo > 59)
      { segundo -= 60;
          ++minuto;
      }
      if (minuto > 59)
      { minuto -= 60;
          ++hora;
      }
      
      if (hora > 23) hora -= 24;
}
