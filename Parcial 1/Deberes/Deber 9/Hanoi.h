#pragma once
#include <iostream>

using namespace std;

template <class T1, class T2>
class Hanoi {
public:
	Hanoi(T1);
	~Hanoi();
	void operacionHanoi(T1, T2, T2, T2);
	void contar();
	T1 getCount();
	void setCount(T1);
private:
	T1 count;
};

template <class T1, class T2>
Hanoi<T1, T2> ::Hanoi(T1 count) {
	this->count = count;
}

template <class T1, class T2>
Hanoi<T1, T2> ::~Hanoi() {

}
