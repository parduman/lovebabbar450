#include <iostream>
#include <stdlib.h>

using namespace std;

struct reactange{
    int length;
    int breadth;
};

int main() {
    int a=10;

    int *p, *d;
    p = &a;

    d = new int[10];
    cout <<a <<" " <<p << " " << *p <<endl;

    reactange roco={10,21};
    reactange *pointRoco = &roco;
    
    cout <<pointRoco -> length <<" " << pointRoco -> breadth;
    delete [ ]d; //free dynamic allocated memory
    return 0;
}

//to get memory in heap use new
// p = new int[10]

//array name is pointer to array zero index

//pointer Variable -> access elements of that class/structure
//(*pointer Variable). is same as above