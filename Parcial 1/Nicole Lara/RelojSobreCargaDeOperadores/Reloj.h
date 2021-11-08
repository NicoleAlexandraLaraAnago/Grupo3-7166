#pragma once
#include <iostream>
using namespace std;




class Reloj {
	private: 
	int hora;
    int minuto;
    int segundo;
     public: 
     Reloj(int h=0,int m=0,int s=0);
     void DefineTiempo(int, int, int);
     void DefineHora(int);
     void DefineMinuto(int);
     void DefineSegundo(int);
     int Hora(void);
     int Minuto(void);
     int Segundo(void);
     void operator ++ (void);
};
Reloj::Reloj(int h, int m, int s)
{    hora=h;
     minuto=m;
     segundo=s;
}
void Reloj::DefineTiempo(int h, int m, int s)
{    hora=h;
     minuto=m;
     segundo=s;
}
void Reloj::DefineHora(int h)
{   hora = h;
}

void Reloj::DefineMinuto(int m)
{   minuto = m;
}

void Reloj::DefineSegundo(int s)
{   segundo = s; 
}

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



