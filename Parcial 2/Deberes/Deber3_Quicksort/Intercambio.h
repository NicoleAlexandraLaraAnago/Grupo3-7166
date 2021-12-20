#pragma once
// funci?n para intercambiar elementos
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
