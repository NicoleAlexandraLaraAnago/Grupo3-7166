#include <iostream>

int main (int argc, char **argv){
	int c = 100;
	int a =5;
	int b=10;
	int x;
	auto f = [=] (int &a) -> int {
	
		return a + 10; 
	};
	
	x=f(a);
	printf("%d",f(a));
	return 0;
}
