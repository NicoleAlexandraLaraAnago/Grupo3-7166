#include <iostream>
#include"Numero.h"
#include"Numero.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Numero<int> A(17,9);
	Numero<int> B(8,0);
	Numero<int> C;
	Numero<int> D;

	int x,y;
	cout <<" MAYOR QUE  \n"<<endl;
	C=A>B;
	cout<<C.getN1()<<"  >  "<<C.getN2()<< endl;
	D=B>A;
	cout<<D.getN1()<<"  >  "<<D.getN2()<< endl;
	
	//C.setN2(0);
	//C.setN1(0);
	

	system("pause");
	return 0;
	return 0;
}
