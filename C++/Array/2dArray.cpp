#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int** A = new int* [5]; //double pointer
    A[0] = new int[5]; // each index has pointer to array

    return 0;
}