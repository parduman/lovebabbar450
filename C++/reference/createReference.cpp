#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a = 10;

    int &k = a;
    //now k and a are pointing to same address
    // reference mst be initialzed simultaneously with declaration
    //reference cannot be changed to different variable once initialized
    

    cout << a << ' ' << k;
}