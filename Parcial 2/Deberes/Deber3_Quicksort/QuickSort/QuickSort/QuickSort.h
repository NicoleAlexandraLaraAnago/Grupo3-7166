#pragma once

#include <iostream>
#include <vector>

using namespace std;

template <class T>
class QuickSort
{
public:
	void swap(T&, T&);
	void quickSort(vector<T>&, T, T);
};

