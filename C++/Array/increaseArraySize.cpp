#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int* p = new int [10];
    int* q =  new int[20];
    for(int i=0; i<10; i++){
        q[i] = p[i];
    }
    delete [] p;
    p=q;
    q=NULL;
    return 0;
}