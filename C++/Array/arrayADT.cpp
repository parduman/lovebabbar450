#include <iostream>
#include <stdio.h>
using namespace std;

struct Array {
    int* A;
    int size;
    int length;
};

int main() {
    int i;
    cin >> i ;
    struct Array arr={new int[i],i,0};
    for(int j=0;j<i;j++){
        cin >>arr.A[j];
    }
    return 0;
}