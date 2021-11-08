/*Universidad de las fuerzas armadas ESPE
Deber Extra sobre templates
Autores:  Juan Gallardo
Fecha de creación: Miércoles 03 de Noviembre del 2021
Fecha de modificación: Miércoles 03 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/
#include <cstdio>
#include <iostream>

using namespace std;

template <class T>
class Coordenada {
    private:
        T x;
        T y;

    public:
        Coordenada(T x = 0, T y = 0);

        T getX() {
            return x;
        };

        T getY() {
            return y;
        }

        void setX(T x) {
            this->x = x;
        }

        void setY(T y) {
            this->y = y;
        }
};

template <class T>
Coordenada<T>::Coordenada(T x, T y) {
    this->x = x;
    this->y = y;
}

int main()
{
    Coordenada <int> coord1(2,1);
    Coordenada <float> coord2(1.5, 0.5);

    cout << "La coordenada de X es: " << coord1.getX() << endl;
    cout << "La coordenada de Y es: " << coord2.getY() << endl; 

    return 0;
}
