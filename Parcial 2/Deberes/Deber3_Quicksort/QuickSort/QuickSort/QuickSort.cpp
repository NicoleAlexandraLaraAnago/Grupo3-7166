#include "QuickSort.h"
#include <iostream>
#include <vector>

using namespace std;

// función para intercambiar elementos
template <class T>
void QuickSort<T> :: swap(T& a, T& b) {
    int t = a;
    a = b;
    b = t;
}

// función lambda para reorganizar la matriz encontrando el punto de particion
template <class T>
auto particion = [&](vector<T>& nums, T low, T high) -> T {

    // selecciona el elemento más a la derecha como pivote
    int pivote = nums[high];

    // puntero para un elemento mayor
    int i = (low - 1);

    // atraviesa cada elemento de la matriz
    // compararlos con el pivote
    for (int j = low; j < high; j++) {
        if (nums[j] <= pivote) {

            // si se encuentra un elemento más pequeño que el pivote
            // intercambiarlo con el elemento mayor señalado por i
            i++;

            // intercambiar elemento en i con elemento en j
            swap(nums[i], nums[j]);
        }
    }

    // intercambiar pivote con el elemento mayor en i
    swap(nums[i + 1], nums[high]);

    // devolver el punto de partición
    return (i + 1);
};


// funcion recursiva de ordenamiento rapido
template <class T>
void QuickSort<T> :: quickSort(vector<T>& nums, T low, T high) {
    if (low < high) {

        // encontrar el elemento pivote tal que
        // los elementos más pequeños que el pivote están a la izquierda del pivote
        // los elementos mayores que pivote están a la derecha del pivote
        auto pi = particion<T>(nums, low, high);

        // llamada recursiva a la izquierda del pivote
        quickSort(nums, low, pi - 1);

        // llamada recursiva a la derecha del pivote
        quickSort(nums, pi + 1, high);
    }
}

template class QuickSort<int>;
