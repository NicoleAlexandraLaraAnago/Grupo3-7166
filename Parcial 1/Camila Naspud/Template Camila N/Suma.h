#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

template <class T>

class suma
{
	public:
		suma (T, T);
		T sumar();
	private:
		T n1;
		T n2;
};


template <class T>
suma <T>::suma(T n, T m)
{
	n1=n;
	n2=m;
}
template <class T>
T suma <T>::sumar()
{
	return n1+n2;
}


