#include <iostream>
#include <stdio.h>
using namespace std;

int fibonacci(int n){
    if(n==0 || n ==1){
        return n;
    };
    return fibonacci(n-1) + fibonacci(n-2);
}

int A[10];

int optimisedFibonacci(int n){
    if(n<=1){
        A[n] = n;
        return n;
    } else {
        if(A[n-2] == -1){
            A[n-2] = optimisedFibonacci(n-2);
        };
        if(A[n-1] == -1){
            A[n-1] = optimisedFibonacci(n-1);
        };
        return A[n-1] + A[n-2];
    }
};

int main() {
    int i = 6;
    for(int j=0;j<i;j++){
        A[j] = -1;
    }
    cout << fibonacci(i) <<endl;
    cout << optimisedFibonacci(i) << endl;

    return 0;
}