#include <iostream>
#include <iostream>
#include "Punto.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Punto<int> A(1,3),B(2,4);
	Punto<int> C;
	int x,y;
	cout <<" suma "<<endl;
	C=A+B;
	cout<<C.getX()<<"  +  "<<C.getY()<< endl;
	C.setY(0);
	C.setX(0);
	cout <<" resta  "<<endl;
	C=A-B;
	cout<<C.getX()<<"  -  "<<C.getY()<< endl;
	cin.ignore();
	system("pause");
	return 0;
}
