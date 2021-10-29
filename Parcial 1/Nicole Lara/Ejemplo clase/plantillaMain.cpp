#include <iostream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

template <typename T>
class Numero{
	public:
		void setNum(T n);
		T getNum() const;
		private:
			T num;
};
template <typename T>
void Numero <T>::setNum(T n){
	this->num=n;
}
template <typename T>
T Numero <T>::getNum() const{
	return this->num;
}
int main(int argc, char** argv) {
	Numero<int> entero;
	Numero<float> flotante; //variable de tipo de dato de tipo template
	Numero<double> real;
	entero.setNum(5);
	flotante.setNum(5.6f);
	real.setNum(3.1415169);
	
	std::cout<<"\n Numero de tipo entero: "<<entero.getNum()<<std::endl;
	std::cout<<"\n Numero de tipo decimal: "<<flotante.getNum()<<std::endl;
	
	system("Pause");
	return 0;
}
