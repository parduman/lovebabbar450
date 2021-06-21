#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int sizeOfArray, *A;
    cout <<" size of array";
    cin >> sizeOfArray;
    A = new int [sizeOfArray];
    for(int i=0;i<sizeOfArray;i++){
        cin >> A[i];
    }
    int max=A[0],min=A[0];
    for(int i=0;i<sizeOfArray;i++){
        if(max<A[i]){
            max = A[i];
        }
        if(min>A[i]){
            min = A[i];
        }
    }
    cout <<"max " << max <<endl <<"min " << min;
    return 0;
}